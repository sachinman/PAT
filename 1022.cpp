#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<map>
#include<sstream>
#include<algorithm>
using namespace std;

/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n;
	scanf("%d",&n);getchar();
	map<string,vector<string>> queryMap[5];
	while(n--)
	{
		string id,title,author,wordList,publisher,year;
		getline(cin,id);
		getline(cin,title);
		getline(cin,author);
		getline(cin,wordList);
		getline(cin,publisher);
		getline(cin,year);
		queryMap[0][title].push_back(id);
		queryMap[1][author].push_back(id);
		queryMap[3][publisher].push_back(id);
		queryMap[4][year].push_back(id);
		istringstream istr(wordList);
		while(!istr.eof())
		{
			string word;
			istr>>word;
			queryMap[2][word].push_back(id);
		}
	}
	for(int i=0;i<5;i++)
	{
		map<string,vector<string>>::iterator it;
		for(it=queryMap[i].begin();it!=queryMap[i].end();it++)
			sort(it->second.begin(),it->second.end());
	}
	int m;
	scanf("%d",&m);
	while(m--)
	{
		int index;
		string q;
		scanf("%d: ",&index);
		getline(cin,q);
		printf("%d: %s\n",index,q.c_str());
		index--;
		map<string,vector<string>>::iterator it;
		it=queryMap[index].find(q);
		if(it!=queryMap[index].end())
		{
			for(int i=0;i<(*it).second.size();i++)
				printf("%s\n",(*it).second[i].c_str());
		}
		else
			printf("Not Found\n");
	}
	return 0;
}

*/

//自己的，有错误，22/30
struct book 
{
	int id;
	char name[85];
	char author[85];
	string keyword;
	char publisher[85];
	int year;
};
bool cmp22(book a,book b)
{
	return a.id<b.id;
}
//自己的，有错误，22/30
int main1022()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,m;
	scanf("%d",&n);
	vector<book> v;
	book b;
	while(n--)
	{
		scanf("%d",&b.id);getchar();
		gets(b.name);
		gets(b.author);
		getline(cin,b.keyword);
		gets(b.publisher);
		scanf("%d",&b.year);
		v.push_back(b);
	}
	sort(v.begin(),v.end(),cmp22);
	scanf("%d",&m);
	
	while(m--)
	{
		int c,y,count=0;
		char key[85];
		scanf("%d: ",&c);
		gets(key);
		printf("%d: %s\n",c,key);
		if(c==1)
		{
			for(int i=0;i<v.size();i++)
			{
				if(strcmp(v[i].name,key)==0)
				{
					printf("%d\n",v[i].id);
					count++;
				}
			}
		}
		else if(c==2)
		{
			for(int i=0;i<v.size();i++)
			{
				if(strcmp(v[i].author,key)==0)
				{
					printf("%d\n",v[i].id);
					count++;
				}
			}
		}
		else if(c==3)
		{
			for(int i=0;i<v.size();i++)
			{
				string sk=key;
				int ids=v[i].keyword.find(sk);
				if(ids>=0&&ids<v[i].keyword.length())
				{
					printf("%d\n",v[i].id);
					count++;
				}
			}
		}
		else if(c==4)
		{
			for(int i=0;i<v.size();i++)
			{
				if(strcmp(v[i].publisher,key)==0)
				{
					printf("%d\n",v[i].id);
					count++;
				}
			}
		}
		else if(c==5)
		{
			sscanf(key,"%d",&y);
			for(int i=0;i<v.size();i++)
			{
				if(v[i].year==y)
				{
					printf("%d\n",v[i].id);
					count++;
				}
			}
		}
		if(count==0)
			printf("Not Found\n");
	}
	return 0;
}
