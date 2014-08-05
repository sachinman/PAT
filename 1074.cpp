#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Node
{
	int add;
	int num;
	int next;
};

int main1074()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	vector<Node> v(100010),r; 
	int na,n,m,i;
	Node nd;
	scanf("%d%d%d",&na,&n,&m);
	while(n--)
	{
		scanf("%d%d%d",&nd.add,&nd.num,&nd.next);
		v[nd.add]=nd;
	}
	while(na!=-1)
	{
		r.push_back(v[na]);
		na=v[na].next;
	}

	for(i=0;i<r.size()/m;i++)
	{
		reverse(r.begin()+m*i,r.begin()+m*i+m);
	}
	for(i=0;i<r.size()-1;i++)
	{
		r[i].next=r[i+1].add;
	}
	r[r.size()-1].next=-1;
	for(i=0;i<r.size()-1;i++)
		printf("%05d %d %05d\n",r[i].add,r[i].num,r[i].next);
	printf("%05d %d %d\n",r[r.size()-1].add,r[r.size()-1].num,r[r.size()-1].next);
	return 0;
}