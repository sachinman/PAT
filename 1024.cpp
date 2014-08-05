#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string sumab(string a,string b)
{
	string c;
	int g,w,t;
	g=0;
	for(int i=a.length()-1;i>=0;i--)
	{
		w=(a[i]-'0')+(b[i]-'0')+g;
		t=w%10;
		c.insert(c.begin(),t+'0');
		g=w/10;
	}
	if(g>0)
		c.insert(c.begin(),g+'0');
	return c;
}

int main1024()
{
	string s,t,sum;
	int k,i,n;
	while(cin>>s)
	{
		scanf("%d",&k);
		t=s;sum=s;
		reverse(t.begin(),t.end());
		if(s==t)
		{
			cout<<sum<<endl;
			cout<<0<<endl;
		}
		else
		{
			for(i=1;i<=k;i++)
			{
				sum=sumab(sum,t);
				t=sum;
				reverse(t.begin(),t.end());
				if(sum==t)
					break;
			}
			cout<<sum<<endl;
			if(sum==t)
				cout<<i<<endl;
			else
				cout<<i-1<<endl;
		}
	}
	return 0;
}