#include<iostream>
#include<vector>
#define MAX 100000
using namespace std;

int g_dis[MAX];
int g_sum[MAX+1];

int main1046()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,m,a,b,s1,s2,sum=0;
	scanf("%d",&n);
	g_sum[0]=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&g_dis[i]);
		sum+=g_dis[i];
		if(i==0)
			g_sum[i+1]=g_dis[i];
		else
			g_sum[i+1]=g_sum[i]+g_dis[i];
	}
	scanf("%d",&m);
	while(m--)
	{
		s1=0;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			s2=a;a=b;b=s2;
		}
		s1=g_sum[b-1]-g_sum[a-1];
		s2=sum-s1;
		printf("%d\n",s1<s2?s1:s2);
	}
	return 0;
}


/*
//我的有例子会超时
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,t,d,m,a,b,s1,s2,sum=0;
	vector<int> v;
	scanf("%d",&n);
	t=n;
	while(t--)
	{
		scanf("%d",&d);
		v.push_back(d);
		sum+=d;
	}
	scanf("%d",&m);
	while(m--)
	{
		s1=0;
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			s2=a;a=b;b=s2;
		}
		for(int i=a-1;i<=b-2;i++)
			s1+=v[i];
		s2=sum-s1;
		printf("%d\n",s1<s2?s1:s2);
	}
	return 0;
}
*/