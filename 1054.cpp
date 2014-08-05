#include<iostream>
#include<map>
using namespace std;

int main1054()
{
	int m,n,s;
	scanf("%d%d",&m,&n);
	int num=m*n;
	int a=num;
	map<int,int> mp;
	map<int,int>::iterator it;
	while(a--)
	{
		scanf("%d",&s);
		it=mp.find(s);
		if(it!=mp.end())
			(*it).second++;
		else
			mp[s]=1;
	}
	for(it=mp.begin();it!=mp.end();it++)
		if((*it).second>=(num/2))
			break;
	printf("%d\n",(*it).first);
	return 0;
}