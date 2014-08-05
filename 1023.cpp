#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main1023()
{
	string nin,nout,tmp;
	int i,a,b,c;
	while(cin>>nin)
	{
		c=0;nout="";
		for(i=nin.length()-1;i>=0;i--)
		{
			a=(nin[i]-'0')*2+c;
			b=a%10;
			nout.insert(nout.begin(),b+'0');
			c=a/10;
		}
		if(c!=0)
			nout.insert(nout.begin(),c+'0');
		tmp=nout;
		sort(nin.begin(),nin.end());
		sort(nout.begin(),nout.end());
		if(nin==nout)
			printf("Yes\n");
		else
			printf("No\n");
		cout<<tmp<<endl;
		nin="";
	}
	return 0;
}