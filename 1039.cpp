#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
using namespace std;

const int MAX_STU=26*26*26*10;
int hashName(const char* name)
{
	return(name[0]-'A')*26*26*10+(name[1]-'A')*26*10+(name[2]-'A')*10+(name[3]-'0');
}

int main1039()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,k;
	scanf("%d%d",&n,&k);
	int i,j,z;
	vector<vector<int>> v(MAX_STU+1);
	int id,num;
	char name[5];
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&id,&num);
		for(j=0;j<num;j++)
		{
			scanf("%s",name);
			v[hashName(name)].push_back(id);
		}
	}
	vector<int> tt;
	char queryName[5];
	for(i=0;i<n;i++)
	{
		scanf("%s",queryName);
		tt=v[hashName(queryName)];
		sort(tt.begin(),tt.end());
		int size=tt.size();
		printf("%s %d",queryName,size);
		for(z=0;z<size-1;z++)
		{
			printf(" %d",tt[z]);
		}
		if(size>0)
			printf(" %d",tt[size-1]);
		printf("\n");
	}

	return 0;
}

/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,k,ki,ni;
	map<string,set<int>> mp;
	set<int>::iterator it;
	string key;
	string name;
	char nam[5];
	scanf("%d%d",&n,&k);
	while(k--)
	{
		scanf("%d%d",&ki,&ni);
		getchar();
		while(ni--)
		{
			scanf("%s",nam);
			name=nam;
			mp[name].insert(ki);
		}
	}
	while(n--)
	{
		scanf("%s",nam);
		key=nam;
		printf("%s %d",key.c_str(),mp[key].size());
		
		for(it=mp[key].begin();it!=mp[key].end();it++)
			printf(" %d",*it);
		printf("\n");
	}

	return 0;
}

*/
/*
//yi ¸ö³¬Ê±
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,k,ki,ni;
	map<string,vector<int>> mp;
	string key;
	string name;
	char nam[5];
	scanf("%d%d",&n,&k);
	while(k--)
	{
		scanf("%d%d",&ki,&ni);
		getchar();
		while(ni--)
		{
			scanf("%s",nam);
			name=nam;
			mp[name].push_back(ki);
		}
	}
	while(n--)
	{
		scanf("%s",nam);
		key=nam;
		printf("%s %d",key.c_str(),mp[key].size());
		
		sort(mp[key].begin(),mp[key].end());
		for(int i=0;i<mp[key].size();i++)
			printf(" %d",mp[key][i]);
		printf("\n");
	}

	return 0;
}
*/