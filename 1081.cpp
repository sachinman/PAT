#include<iostream>
using namespace std;

int gcd(long long a,long long b)
{
	return (b==0)?a:gcd(b,a%b);
}
int gbs(long long a,long long b)
{
	return a*b/gcd(a,b);
}
int main1081()
{
	int n;
	long long a,b,m,c,d,s;
	scanf("%d",&n);
	scanf("%d/%d",&c,&d);n--;
	while(n--)
	{
		scanf("%d/%d",&a,&b);
		s=gbs(d,b);
		c=c*s/d+a*s/b;
		d=s;
	}
	m=c/d;
	c=c%d;
	if(m==0)
		cout<<c<<"/"<<d;
	else
		cout<<m<<" "<<c<<"/"<<d;
	return 0;
}