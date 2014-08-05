#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main1060()
{
	int n,i,p;
	string a,b;
	string ap,bp;
	int as=0,bs=0;
	cin>>n>>a>>b;
	p=a.find(".");
	if(p>=0&&p<a.length())
	{
		
		a.erase(a.begin()+p,a.end());
	}
	ap=ap+"0.";
	for(i=0;i<n&&i<a.length();i++)
	{
		ap=ap+a[i];
	}
	for(i=ap.length();i<n+2;i++)
		ap+='0';
	as=a.length();
	
	p=b.find(".");
	if(p>=0&&p<b.length())
	{
		b.erase(b.begin()+p,b.end());
	}
	bp=bp+"0.";
	for(i=0;i<n&&i<b.length();i++)
	{
		bp=bp+b[i];
	}
	for(i=bp.length();i<n+2;i++)
		bp+='0';
	bs=b.length();

	if(as==bs&&ap==bp)
	{
		cout<<"YES "<<ap<<"*10^"<<as;
	}
	else
	{
		cout<<"NO "<<ap<<"*10^"<<as<<" "<<bp<<"*10^"<<bs;
	}
	system("PAUSE");
	return 0;
}