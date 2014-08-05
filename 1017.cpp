#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

struct Customer17
{
	int h;
	int m;
	int s;
	int total;
	int work;
};
bool cmp17(Customer17 a,Customer17 b)
{
	return a.total<b.total;
}
int main1017()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,k;
	int wins[101];
	int wint[101];
	vector<Customer17> v;
	Customer17 c;
	double wt=0;
	int begin=8*60*60;
	int over=17*60*60+1;
	memset(wint,0,sizeof(wint));
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++)
		wins[i]=1;
	for(int i=0;i<n;i++)
	{
		scanf("%d:%d:%d %d",&c.h,&c.m,&c.s,&c.work);
		c.total=c.h*60*60+c.m*60+c.s;
		c.work*=60;
		if(c.total<over)
			v.push_back(c);
	}
	sort(v.begin(),v.end(),cmp17);
	for(int i=0;i<v.size();i++)
	{
		int wait=0;int min=24*60*60,id,j;
		if(v[i].total<begin)
		{
			wt+=(begin-v[i].total);
			v[i].total=begin;
		}
		for(j=0;j<k;j++)
		{
			if(wins[j])
			{
				wint[j]=v[i].total+v[i].work;
				wins[j]=0;
				break;
			}
			else if(wins[j]==0&&wint[j]<v[i].total)
			{
				wint[j]=v[i].total+v[i].work;
				break;
			}
			else
			{
				wait=wint[j]-v[i].total;
				if(wait<min)
				{
					min=wait;
					id=j;
				}
			}
		}
		if(j==k)
		{
			wt+=min;
			v[i].total=wint[id];
			wint[id]=v[i].total+v[i].work;
			printf("%d--%d\n",wint[id],i);
			wins[id]=0;
		}
	}

	wt/=60;
	wt/=n;
	printf("%.1lf",wt);


	return 0;
}