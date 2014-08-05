#include<iostream>
#include<vector>
#include<string>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;



int main1071()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	map<string,int> m;
	int i=0;
	char t;
	vector<char> input;
	while(scanf("%c",&t))
	{
		input.push_back(t);
		if(t=='\n')
			break;
	}

	vector<char>::iterator it=input.begin();
	int len=input.size();
	int begin=-1,end=-1;
	int max=0;
	string tmp;
	for(i=0;i<len;i++)
	{
		if(input[i]=='\n')
			break;
		if(isalpha(input[i])||isdigit(input[i]))
		{
			if(!islower(input[i]))
			{
				input[i]=tolower(input[i]);
			}
			if(begin==-1)
				begin=i;
			end=i;
		}
		else
		{
			if(begin!=-1){
				string s(it+begin,it+end+1);
				m[s]++;
				if(m[s]>max||(m[s]==max&&s<tmp))
				{
					max=m[s];
					tmp=s;
				}
			}
			begin=-1;
		}
	}
	if(begin!=-1){
		string s(it+begin,it+end+1);
		m[s]++;
		if(m[s]>max||(m[s]==max&&s<tmp))
		{
			max=m[s];
			tmp=s;
		}
	}
	if(max!=0)
		cout<<tmp<<" "<<max<<endl;
	return 0;
}






//char sent[1048600];
/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	
	string word;
	map<string,int> mp;
	map<string,int>::iterator it;
	map<string,int>::iterator it2;
	char w;
	bool enter;

	gets(sent);
	int len=strlen(sent);
	for(int i=0;i<len;i++)
	{
		if(sent[i]!=' ')
		{

		}
		else
		{
			enter=false;
		}
	}

	return 0;
}


int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	string word;
	map<string,int> mp;
	map<string,int>::iterator it;
	map<string,int>::iterator it2;
	char w;
	bool enter;
	while(scanf("%c",&w)&&w!='\n')
	{
		if(w>='A'&&w<='Z')
		{
			w=w-'A'+'a';
			word=word+w;
		}
		else if((w>='a'&&w<='z')||(w>='0'&&w<='9'))
		{
			word=word+w;
		}
		else
		{
			if(word!="")
			{
				mp[word]++;
				word="";
			}
		}
		
	}
	if(word!="")
	{
		mp[word]++;
		word="";
	}
	
	int max=-1;
	for(it=mp.begin();it!=mp.end();it++)
	{
		if((*it).second>max)
		{
			it2=it;
			max=(*it).second;
		}
	}
	cout<<(*it2).first<<" "<<(*it2).second;
	return 0;
}

/*
string processword(string a)
{
	string::iterator it;
	for(it=a.begin();it!=a.end();it++)
	{
		if(*it>='A'&&*it<='Z')
			*it=*it-'A'+'a';
		else if(!((*it>='a'&&*it<='z')||(*it>='0'&&*it<='9')))
		{
			a.erase(it);
			if(it==a.begin()+a.length()-1)
				it--;
		}
	}
	return a;
}
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	map<string,int> mp;
	string word;
	while(cin>>word)
	{
		word=processword(word);
		mp[word]++;
	}
	cout<<mp["can"];
	return 0;
}
*/