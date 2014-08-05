#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main1019()
{
	int n,b;
	
	while(scanf("%d%d",&n,&b)==2)
	{
		vector<int> v,a;
		string s;
		do
		{
			int t=n%b;
			v.push_back(t);
			a.push_back(t);
			n/=b;
		}while(n!=0);
		reverse(a.begin(),a.end());
		int i;
		for(i=0;i<v.size();i++)
			if(v[i]!=a[i])
				break;
		if(i==v.size())
		{
			printf("Yes\n");
			for(i=0;i<a.size();i++)
				if(i==0)
					printf("%d",a[i]);
				else
					printf(" %d",a[i]);
		}
		else
		{
			printf("No\n");
			for(i=0;i<a.size();i++)
				if(i==0)
					printf("%d",a[i]);
				else
					printf(" %d",a[i]);
		}
	}
	return 0;
}