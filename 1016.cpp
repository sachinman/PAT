#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Call
{
	string name;
	int date[4];
	int total;
	string state;
};
bool cmp16(Call a,Call b)
{
	return a.total<b.total;
}
int main1016()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	map<string,vector<Call>> m;
	map<string,vector<Call>>::iterator it;
	int rate[24];
	int n;
	Call c;
	int sum,flag=0,first=1;
	int cost,dcost=0;
	for(int i=0;i<24;i++)
	{
		scanf("%d",&rate[i]);
		dcost+=rate[i]*60;
	}
	scanf("%d",&n);
	while(n--)
	{
		cin>>c.name;
		scanf("%d:%d:%d:%d",&c.date[0],&c.date[1],&c.date[2],&c.date[3]);
		cin>>c.state;
		c.total=c.date[3]+c.date[2]*60+c.date[1]*60*24;
		m[c.name].push_back(c);
	}
	for(it=m.begin();it!=m.end();it++)
	{
		sort((*it).second.begin(),(*it).second.end(),cmp16);
	}
	for(it=m.begin();it!=m.end();it++)
	{
		sum=0;
		first=1;
		flag=0;
		for(int i=0;i<(*it).second.size()-1;i++)
		{
			if((*it).second[i].state=="on-line"&&(*it).second[i+1].state=="off-line")
			{
				if(first)
				{
					printf("%s %02d\n",(*it).first.c_str(),(*it).second[0].date[0]);
					first=0;
				}
				
				cost=0;flag=1;
				printf("%02d:%02d:%02d ",(*it).second[i].date[1],(*it).second[i].date[2],(*it).second[i].date[3]);
				printf("%02d:%02d:%02d ",(*it).second[i+1].date[1],(*it).second[i+1].date[2],(*it).second[i+1].date[3]);
				printf("%d ",(*it).second[i+1].total-(*it).second[i].total);

				if(!((*it).second[i+1].date[1]==(*it).second[i].date[1]&&(*it).second[i+1].date[3]==(*it).second[i].date[3]&&
				(*it).second[i+1].date[2]==(*it).second[i].date[2])){
				
				int m1=60-(*it).second[i].date[3];
				cost+=m1*rate[(*it).second[i].date[2]];
				
				cost+=(*it).second[i+1].date[3]*rate[(*it).second[i+1].date[2]];
				
				if((*it).second[i+1].date[1]==(*it).second[i].date[1])
				{
					if((*it).second[i+1].date[2]==(*it).second[i].date[2])
					{
						cost=0;
						cost+=rate[(*it).second[i+1].date[2]]*((*it).second[i+1].date[3]-(*it).second[i].date[3]);
					}
					else
					{
						for(int j=(*it).second[i].date[2]+1;j<(*it).second[i+1].date[2];j++)
							cost+=rate[j]*60;
					}
					
				}
				else if((*it).second[i+1].date[1]-(*it).second[i].date[1]==1)
				{
					for(int j=(*it).second[i].date[2]+1;j<24;j++)
						cost+=rate[j]*60;
					for(int j=0;j<(*it).second[i+1].date[2];j++)
						cost+=rate[j]*60;
				}
				else
				{
					cost=cost+((*it).second[i+1].date[1]-(*it).second[i].date[1]-1)*dcost;
					for(int j=(*it).second[i].date[2]+1;j<24;j++)
						cost+=rate[j]*60;
					for(int j=0;j<(*it).second[i+1].date[2];j++)
						cost+=rate[j]*60;
				}
				
				
				}

				sum+=cost;
				double dco=(double)cost/100.0;
				printf("$%.2lf\n",dco);
			}
		}
		if(flag)
		{
			double dsum=(double)sum/100.0;
			printf("Total amount: $%.2lf\n",dsum);
		}
	}
	return 0;
}