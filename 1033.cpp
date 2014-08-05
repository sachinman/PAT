#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

struct station 
{
	double price;
	double distance;
};
bool cmp33(station a,station b)
{
	return a.distance<b.distance;
}
int main1033()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	double c,d,da,n,pc;
	scanf("%lf%lf%lf%lf",&c,&d,&da,&n);
	pc=c*da;
	vector<station> v;
	station s;
	while(n--)
	{
		scanf("%lf%lf",&s.price,&s.distance);
		v.push_back(s);
	}
	sort(v.begin(),v.end(),cmp33);
	double dis=0;
	double sump=0.0;
	bool error=false;
	for(int i=0;i<v.size()-1;i++)
	{
		if(i==0)
			sump+=v[i].price*c;
		else
		{
			int j,min;
			bool first=true;
			for(j=i+1;j<v.size();j++)
			{
				if(v[j].distance-v[i].distance<=pc)
				{
					if(first)
					{
						min=j;
						first=false;
					}
					else
					{
						if(v[j].price<=v[min].price)
							min=j;
					}
				}
				else
				{
					if(j=i+1)
						error=false;
					break;
				}
			}
			if(error)
			{
				dis+=pc;
				break;
			}
			else
			{
				dis=v[min].distance;
				double p=(v[min].distance-v[i].distance)/da;
				sump+=v[min].price*p;
			}
		}

	}
	if(error)
		printf("The maximum travel distance = %.2lf\n",dis);
	else
		printf("%.2lf\n",sump);
	return 0;
}