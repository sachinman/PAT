#include <iostream>
#include <string>
#include <map>
using namespace std;


int main1005()
{
	map<int,string> mp;
	mp[0]="zero";
	mp[1]="one";
	mp[2]="two";
	mp[3]="three";
	mp[4]="four";
	mp[5]="five";
	mp[6]="six";
	mp[7]="seven";
	mp[8]="eight";
	mp[9]="nine";

	int sum,i;
	string num,s;
	while(cin>>num)
	{
		sum=0;
		for(i=0;i<num.length();i++)
			sum+=(num[i]-'0');
		num="";
		char ss[4];
		sprintf(ss,"%d",sum);
		s=ss;
		cout<<mp[s[0]-'0'];
		for(i=1;i<s.length();i++)
			cout<<" "<<mp[s[i]-'0'];
	}
	return 0;
}