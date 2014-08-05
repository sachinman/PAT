#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main1050()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	vector<bool> existed(1000,false);
	for(int i=0;i<b.size();i++)
		existed[b[i]]=true;
	for(int i=0;i<a.size();i++)
		if(!existed[a[i]])
			printf("%c",a[i]);
	printf("\n");
	return 0;
}