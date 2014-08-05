#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student83
{
	char name[11];
	int grade;
	char id[11];
};
bool cmp83(student83 a,student83 b)
{
	return a.grade>b.grade;
}
int main1083()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	vector<student83> v,t;
	int n,g1,g2;
	scanf("%d",&n);
	student83 s;
	while(n--)
	{
		scanf("%s %s %d",s.name,s.id,&s.grade);
		v.push_back(s);
	}
	scanf("%d%d",&g1,&g2);
	for(int i=0;i<v.size();i++)
		if(v[i].grade>=g1&&v[i].grade<=g2)
			t.push_back(v[i]);
	sort(t.begin(),t.end(),cmp83);
	if(t.empty())
		printf("NONE");
	else
	{
		for(int i=0;i<t.size();i++)
			printf("%s %s\n",t[i].name,t[i].id);
	}
	return 0;
}