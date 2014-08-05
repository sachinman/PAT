#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct Node25
{
	char num[14];
	int score;
	int frank;
	int position;
	int lrank;
};
bool cmp25(Node25 a,Node25 b)
{
	if(a.score==b.score)
	{
		if(strcmp(a.num,b.num)>0)
			return false;
		else
			return true;
	}
	else
		return a.score>b.score;
}
int main1025()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,k,s=0;
	map<int,vector<Node25>> m;
	vector<Node25> g;
	Node25 no;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		s+=k;
		vector<Node25> v;
		int r=1;
		for(int j=0;j<k;j++)
		{
			scanf("%s %d",no.num,&no.score);
			no.position=i+1;
			v.push_back(no);
		}
		sort(v.begin(),v.end(),cmp25);
		for(int j=0;j<k;j++)
		{
			if(j==0||v[j].score==v[j-1].score)
			{
				v[j].lrank=r;
			}
			else
			{
				v[j].lrank=j+1;
				r=v[j].lrank;
			}
			g.push_back(v[j]);
		}
	}
	sort(g.begin(),g.end(),cmp25);
	int r=1;
	for(int j=0;j<s;j++)
	{
		if(j==0||g[j].score==g[j-1].score)
		{
			g[j].frank=r;
		}
		else
		{
			g[j].frank=j+1;
			r=g[j].frank;
		}
	}
	printf("%d\n",s);
	for(int j=0;j<s;j++)
		printf("%s %d %d %d\n",g[j].num,g[j].frank,g[j].position,g[j].lrank);
	return 0;
}