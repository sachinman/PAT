#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct Node52
{
	int add;
	int key;
	int next;
};
bool cmp52(Node52 a,Node52 b)
{
	return a.key<b.key;
}
int main1052()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,head;
	scanf("%d%d",&n,&head);
	Node52 node;
	vector<Node52> v(100010);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d",&node.add,&node.key,&node.next);
		v[node.add]=node;
	}
	vector<Node52> p;
	int cur=head;
	while(cur>=0)
	{
		p.push_back(v[cur]);
		cur=v[cur].next;
	}
	if(p.empty())
	{
		printf("0 -1\n");
	}
	else
	{
		sort(p.begin(),p.end(),cmp52);
		printf("%d %05d\n",p.size(),p[0].add);
		for(int i=0;i<p.size();i++)
		{
			if(i!=p.size()-1)
				printf("%05d %d %05d\n",p[i].add,p[i].key,p[i+1].add);
			else
				printf("%05d %d -1\n",p[i].add,p[i].key);
		}
	}

	return 0;
}