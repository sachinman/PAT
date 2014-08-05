#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

struct node32
{
	int add;
	char key;
	int next;
};

int main1032()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int fn,sn,n;
	scanf("%d%d%d",&fn,&sn,&n);
	vector<node32> v(100000);
	vector<node32> a,b;
	node32 no;
	while(n--)
	{
		scanf("%d %c %d",&no.add,&no.key,&no.next);
		if(no.key>='A'&&no.key<='Z')
			no.key=no.key-'A'+'a';
		v[no.add]=no;
	}
	while(fn!=-1)
	{
		a.push_back(v[fn]);
		fn=v[fn].next;
	}
	while(sn!=-1)
	{
		b.push_back(v[sn]);
		sn=v[sn].next;
	}
	int index=-1;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<a.size()&&i<b.size();i++)
	{
		if(a[i].key==b[i].key&&a[i].add==b[i].add)
			index=a[i].add;
		else
			break;
	}
	if(index==-1)
		printf("%d\n",index);
	else
		printf("%05d\n",index);
	return 0;
}