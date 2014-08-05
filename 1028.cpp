#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int c;
struct student{
	int num;
	string name;
	int score;
};
bool comp(const student a,const student b)
{
	if(1==c)
		return a.num<b.num;
	else if(2==c)
	{
		if(a.name.compare(b.name)==0)
			return a.num<b.num;
		else
			return a.name.compare(b.name)<0;
	}
	else if(3==c)
	{
		if(a.score==b.score)
			return a.num<b.num;
		else
			return a.score<b.score;
	}
}

int main1028()
{
	int n,i;
	vector<student> v;
	while(scanf("%d%d",&n,&c)!=EOF)
	{
		vector<student> v(n);
		for(i=0;i<n;i++)
		{
			cin>>v[i].num>>v[i].name>>v[i].score;
		}
		sort(v.begin(),v.end(),comp);
		for(i=0;i<v.size();i++)
			printf("%06d %s %d\n",v[i].num,v[i].name.c_str(),v[i].score);
		v.clear();
	}
	return 0;
}