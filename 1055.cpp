#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

struct people55
{
	char name[9];
	int age;
	int worth;
};
bool cmp55(people55 a,people55 b)
{
	if(a.worth==b.worth)
	{
		if(a.age==b.age)
		{
			if(strcmp(a.name,b.name)>0)
				return false;
			else
				return true;
		}
		else
			return a.age<b.age;
	}
	else
		return a.worth>b.worth;
}
int main1055()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,k;
	int m,amin,amax;
	people55 p;
	vector<people55> v;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%s %d %d",p.name,&p.age,&p.worth);
		v.push_back(p);
	}
	sort(v.begin(),v.end(),cmp55);


	int ageCount[201]={0};
	int *filter=new int[n];
	int filter_num=0;
	for(int i=0;i<n;i++)
	{
		if(++ageCount[v[i].age]<101)
			filter[filter_num++]=i;
	}
	int count;
	bool flag;
	int unfilter;
	for(int i=0;i<k;i++)
	{
		scanf("%d%d%d",&m,&amin,&amax);
		count=0;
		flag=true;
		printf("Case #%d:\n",i+1);
		for(int j=0;j<filter_num;j++)
		{
			unfilter=filter[j];
			if(v[unfilter].age>=amin&&v[unfilter].age<=amax)
			{
				printf("%s %d %d\n",v[unfilter].name,v[unfilter].age,v[unfilter].worth);
				flag=false;
				count++;
				if(count>=m)
					break;
			}
		}
		if(flag)
			printf("None\n");
	}

	/*
	for(int i=1;i<=k;i++)
	{
		scanf("%d%d%d",&m,&amin,&amax);
		int t=m;
		printf("Case #%d:\n",i);
		for(int j=0;j<v.size()&&m>0;j++)
		{
			if(v[j].age>=amin&&v[j].age<=amax)
			{
				printf("%s %d %d\n",v[j].name,v[j].age,v[j].worth);
				m--;
			}
		}
		if(t==m)
			printf("None\n");
	}
	*/
	return 0;
}