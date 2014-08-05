#include<iostream>
#include<string>
using namespace std;

string convertto13(int a)
{
	string c;
	int m,n;
	m=a/13;n=a%13;
	if(n<10)
		c.insert(c.begin(),n+'0');
	else if(n==10)
		c.insert(c.begin(),'A');
	else if(n==11)
		c.insert(c.begin(),'B');
	else if(n==12)
		c.insert(c.begin(),'C');
	if(m<10)
		c.insert(c.begin(),m+'0');
	else if(m==10)
		c.insert(c.begin(),'A');
	else if(m==11)
		c.insert(c.begin(),'B');
	else if(m==12)
		c.insert(c.begin(),'C');
	return c;
}
int main1027()
{
	int r,g,b;
	string z,x,c;
	while(scanf("%d%d%d",&r,&g,&b)!=EOF)
	{
		z=convertto13(r);
		x=convertto13(g);
		c=convertto13(b);
		printf("#%s%s%s",z.c_str(),x.c_str(),c.c_str());
	}
	return 0;
}