#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student12
{
	int id;
	int score[4];
	int rank;
	int cat;
};
bool cmp120(student12 a,student12 b)
{
	return a.score[0]>b.score[0];
}
bool cmp121(student12 a,student12 b)
{
	return a.score[1]>b.score[1];
}
bool cmp122(student12 a,student12 b)
{
	return a.score[2]>b.score[2];
}
bool cmp123(student12 a,student12 b)
{
	return a.score[3]>b.score[3];
}
int main1012()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,m,ci,r;
	vector<student12> v;
	student12 s;
	char c[4]={'C','M','E','A'};
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d%d",&s.id,&s.score[0],&s.score[1],&s.score[2]);
		s.score[3]=(s.score[0]+s.score[1]+s.score[2])/3;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),cmp123);
	for(int i=0;i<v.size();i++)
	{
		if(i!=0&&v[i].score[3]==v[i-1].score[3])
			v[i].rank=v[i-1].rank;
		else
		{
			v[i].rank=i;
			v[i].cat=3;
			r=v[i].rank;
		}
	}
	sort(v.begin(),v.end(),cmp120);
	for(int i=0;i<v.size();i++)
	{
		if(i!=0&&v[i].score[0]==v[i-1].score[0])
			r=r;
		else
			r=i;
		if(v[i].rank>r)
		{
			v[i].rank=r;
			v[i].cat=0;
		}
	}
	sort(v.begin(),v.end(),cmp121);
	for(int i=0;i<v.size();i++)
	{
		if(i!=0&&v[i].score[1]==v[i-1].score[1])
			r=r;
		else
			r=i;
		if(v[i].rank>r)
		{
			v[i].rank=r;
			v[i].cat=1;
		}
	}
	sort(v.begin(),v.end(),cmp122);
	for(int i=0;i<v.size();i++)
	{
		if(i!=0&&v[i].score[2]==v[i-1].score[2])
			r=r;
		else
			r=i;
		if(v[i].rank>r)
		{
			v[i].rank=r;
			v[i].cat=2;
		}
	}
	
	while(m--)
	{
		int j;
		scanf("%d",&ci);
		for(j=0;j<v.size();j++)
		{
			if(v[j].id==ci)
			{
				printf("%d %c\n",v[j].rank+1,c[v[j].cat]);
				break;
			}
		}
		if(j==v.size())
			printf("N/A\n");
	}
	return 0;
}