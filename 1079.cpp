#include<iostream>
#include<vector>
using namespace std;

struct Node
{
	double price;
	int parent;
	int amount;
};
Node node[100000];

int main1079()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,k,id;
	double p,r,sum=0;
	scanf("%d %lf %lf",&n,&p,&r);
	node[0].price=p;
	for(int i=0;i<n;i++)
	{
		node[i].amount=0;
		scanf("%d",&k);
		if(k==0)
		{
			scanf("%d",&node[i].amount);
		}
		else
		{
			while(k--)
			{
				scanf("%d",&id);
				node[id].parent=i;
				if(node[i].price!=0)
					node[id].price=node[i].price*(1+r/100.0);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(node[i].price==0)
			node[i].price=node[node[i].parent].price*(1+r/100.0);
		if(node[i].amount!=0)
			sum+=node[i].price*node[i].amount;
	}
	printf("%.1lf",sum);
	return 0;
}