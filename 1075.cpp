#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student75
{
	int id;
	int score[6];
	int sum;
	int pe;
	int ok;
};
bool cmp75(student75 a,student75 b)
{
	if(a.ok==b.ok)
	{
		if(a.sum==b.sum)
		{
			if(a.pe==b.pe)
				return a.id<b.id;
			else
				return a.pe>b.pe;
		}
		else
			return a.sum>b.sum;
		}
	else
		return a.ok>b.ok;
}
vector<student75> sv(10001);
int main1075()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,k,m,r=1;
	int p[6];
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=k;i++)
		scanf("%d",&p[i]);
	int sid,kid,sc;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&sid,&kid,&sc);
		if(sc==-1)
		{
			sv[sid].score[kid]=-1;
			continue;
		}
		if(sc==0)
		{
			sv[sid].ok=1;
			sv[sid].score[kid]=-1;
			continue;
		}
		sv[sid].ok=1;
		sv[sid].score[kid]=sv[sid].score[kid]>sc?sv[sid].score[kid]:sc;

	}
	for(int i=1;i<=n;i++)
	{	
		sv[i].id=i;
		for(int j=1;j<=k;j++)
		{
			if(sv[i].score[j]>0)
				sv[i].sum+=sv[i].score[j];
			sv[i].pe+=(sv[i].score[j]==p[j]?1:0);
		}
	}

	sort(sv.begin()+1,sv.begin()+n+1,cmp75);
	for(int i=1;i<=n;i++)
	{
		if(sv[i].ok==1)
		{
			if(sv[i].sum==sv[i-1].sum)
			{
				printf("%d ",r);
			}
			else
			{
				printf("%d ",i);
				r=i;
			}
			printf("%05d %d",sv[i].id,sv[i].sum);
			for(int j=1;j<=k;j++)
			{
				if(sv[i].score[j]==-1)
					printf(" 0");
				else if(sv[i].score[j]==0)
					printf(" -");
				else
					printf(" %d",sv[i].score[j]);
			}
			printf("\n");
		}
	}
	return 0;
}

/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,k,m,r=1;
	int p[6];
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=k;i++)
		scanf("%d",&p[i]);
	int sid,kid,sc;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d%d",&sid,&kid,&sc);
		sv[sid].id=sid;
		if((sc==-1||sc==0)&&sv[sid].score[kid]<=0)
		{
			sv[sid].score[kid]=-1;
		}
		else
		{
			if(sv[sid].score[kid]>0&&sv[sid].score[kid]<sc)
			{
				sv[sid].sum=sv[sid].sum-sv[sid].score[kid]+sc;
				sv[sid].score[kid]=sc;
				
			}
			else if(sv[sid].score[kid]==0)
			{
				sv[sid].sum+=sc;
				sv[sid].score[kid]=sc;
			}
			if(sv[sid].score[kid]==p[kid])
					sv[sid].pe++;
		}
	}
	sort(sv.begin()+1,sv.begin()+n+1,cmp75);
	for(int i=1;i<=n;i++)
	{
		if(sv[i].sum>0)
		{
			if(sv[i].sum==sv[i-1].sum)
			{
				printf("%d ",r);
			}
			else
			{
				printf("%d ",i);
				r=i;
			}
			printf("%05d %d",sv[i].id,sv[i].sum);
			for(int j=1;j<=k;j++)
			{
				if(sv[i].score[j]==-1)
					printf(" 0");
				else if(sv[i].score[j]==0)
					printf(" -");
				else
					printf(" %d",sv[i].score[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
*/