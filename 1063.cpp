#include<iostream>
#include<set>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;

int main1063(int argc,char *argv[])
{
	set<int> s[55];
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int m;
		int temp;
		scanf("%d",&m);
		for(j=1;j<=m;j++)
		{
			scanf("%d",&temp);
			s[i].insert(temp);
		}
	}
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int x,y;
		int ret,total;
		set<int> ans;
		scanf("%d%d",&x,&y);
		set_intersection(s[x].begin(),s[x].end(),s[y].begin(),s[y].end(),
		inserter(ans,ans.begin()));//求集合交集
		ret=ans.size();//交集元素个数
		total=s[x].size()+s[y].size()-ret;//不重复元素总个数
		printf("%.1f%%\n",100*ret*1.0/total);
	}

	return 0;
}

/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	map<int,set<int>> mp;
	set<int> sp;
	set<int>::iterator it;
	int n,m,k,a,b;
	double r;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		while(m--)
		{
			scanf("%d",&a);
			mp[i].insert(a);
		}
	}
	scanf("%d",&k);
	while(k--)
	{
		scanf("%d%d",&a,&b);
		a--;b--;
		sp.clear();
		for(it=mp[a].begin();it!=mp[a].end();it++)
			sp.insert(*it);
		for(it=mp[b].begin();it!=mp[b].end();it++)
			sp.insert(*it);
		int s1=mp[a].size(),s2=mp[b].size(),s3=sp.size();
		r=(double)(s1+s2-s3)/(double)s3*100.0;
		printf("%.1lf%%\n",r);
	}


	return 0;
}
*/