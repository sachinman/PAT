#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

struct student47
{
	char name[5];
	int ina;
};
bool cmp47(student47 a,student47 b)
{
	return a.ina<b.ina;
}
int hashNames(const char* name)
{
	return(name[0]-'A')*26*26*10+(name[1]-'A')*26*10+(name[2]-'A')*10+(name[3]-'0');
}
int main1047()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	
	int n,k,c,ci;
	student47 s;
	scanf("%d%d",&n,&k);
	vector<vector<student47>> mp(k);
	getchar();
	while(n--)
	{
		scanf("%s %d",s.name,&c);
		s.ina=hashNames(s.name);
		
		while(c--)
		{
			scanf("%d",&ci);
			mp[ci-1].push_back(s);
		}
		getchar();
	}
	
	for(int i=0;i<k;i++)
	{
		printf("%d %d\n",i+1,mp[i].size());
		sort(mp[i].begin(),mp[i].end(),cmp47);
		for(int j=0;j<mp[i].size();j++)
			printf("%s\n",mp[i][j].name);
	}


	return 0;
}

/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	map<int,set<string>> mp;
	map<int,set<string>>::iterator it;
	set<string>::iterator sit;
	int n,k,c,ci;
	char nam[5];
	string name;
	scanf("%d%d",&n,&k);
	getchar();
	while(n--)
	{
		scanf("%s %d",nam,&c);
		name=nam;
		while(c--)
		{
			scanf("%d",&ci);
			mp[ci].insert(name);
		}
		getchar();
	}
	for(it=mp.begin();it!=mp.end();it++)
	{
		printf("%d %d\n",(*it).first,(*it).second.size());
		for(sit=(*it).second.begin();sit!=(*it).second.end();sit++)
			printf("%s\n",(*sit).c_str());
	}
	return 0;
}
*/