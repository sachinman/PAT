#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int main1048()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,m,vi;
	scanf("%d%d",&n,&m);
	vector<int> v;
	while(n--)
	{
		scanf("%d",&vi);
		v.push_back(vi);
	}
	sort(v.begin(),v.end());
	int i=0;
	int j=v.size()-1;
	bool found=false;
	while(i<j)
	{
		int sum=v[i]+v[j];
		if(sum==m)
		{
			found=true;
			break;
		}
		else if(sum<m)
			i++;
		else
			j--;
	}
	if(found)
		printf("%d %d",v[i],v[j]);
	else
		printf("No Solution");
	return 0;
}
/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,m,v;
	int coins[1001];
	int v1=0,v2=0;
	memset(coins,0,sizeof(coins));
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v);
		coins[v]++;
	}
	for(int i=1;i<501;i++)
	{	
		if(coins[i]>0)
		{
			int lef=m-i;
			if(lef==i)
				coins[lef]--;
			if(coins[lef]>0&&lef>=i)
			{
				v1=i;v2=lef;
				break;
			}
		}
	}
	if(v1==0)
		printf("No Solution");
	else
		printf("%d %d",v1,v2);
	return 0;
}
*/