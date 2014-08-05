#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main1035()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,t;
	bool moded;
	char name[11],pwd[11];
	string sname,spwd;
	vector<string> v;
	scanf("%d",&n);
	getchar();
	t=n;
	while(t--)
	{
		scanf("%s %s",name,pwd);
		sname=name;spwd=pwd;
		moded=false;
		for(int i=0;i<spwd.length();i++)
		{
			if(spwd[i]=='1')
			{
				spwd[i]='@';
				moded=true;
			}
			else if(spwd[i]=='l')
			{
				spwd[i]='L';
				moded=true;
			}
			else if(spwd[i]=='0')
			{
				spwd[i]='%';
				moded=true;
			}
			else if(spwd[i]=='O')
			{
				spwd[i]='o';
				moded=true;
			}
		}
		if(moded)
		{
			v.push_back(sname+" "+spwd);
		}
	}
	if(v.size()==0)
	{
		if(n==1)
			printf("There is %d account and no account is modified\n",n);
		else
			printf("There are %d accounts and no account is modified\n",n);
	}
	else
	{
		printf("%d\n",v.size());
		for(int i=0;i<v.size();i++)
			printf("%s\n",v[i].c_str());
	}
	return 0;
}