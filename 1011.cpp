#include<iostream>
#include<map>
using namespace std;

int main1011()
{
	map<double,char> m,n,p;
	double a,b,c,s=1.0;
	scanf("%lf%lf%lf",&a,&b,&c);
	m[a]='W';m[b]='T';m[c]='L';
	scanf("%lf%lf%lf",&a,&b,&c);
	n[a]='W';n[b]='T';n[c]='L';
	scanf("%lf%lf%lf",&a,&b,&c);
	p[a]='W';p[b]='T';p[c]='L';
	map<double,char>::reverse_iterator it;
	it=m.rbegin();
	s*=(*it).first;
	printf("%c ",(*it).second);
	it=n.rbegin();
	s*=(*it).first;
	printf("%c ",(*it).second);
	it=p.rbegin();
	s*=(*it).first;
	printf("%c ",(*it).second);
	s=(s*0.65-1.0)*2.0;
	printf("%.2lf",s);
	return 0;

}