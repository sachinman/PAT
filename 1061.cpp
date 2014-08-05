#include<iostream>
#include<string>
using namespace std;

int main1061()
{
	char date[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int i,j;
	for(i=0;i<s1.length()||i<s2.length();i++)
		if(s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='G')
		{
			printf("%s ",date[s1[i]-'A']);
			break;
		}
	for(i=i+1;i<s1.length()||i<s2.length();i++)
		if(s1[i]==s2[i])
			if(s1[i]>='0'&&s1[i]<='9')
			{
				printf("%02d:",s1[i]-'0');
				break;
			}
			else if(s1[i]>='A'&&s1[i]<='N')
			{
				printf("%02d:",s1[i]-'A'+10);
				break;
			}
	for(j=0;j<s3.length()||j<s4.length();j++)
		if(s3[j]==s4[j]&&isalpha(s3[j]))
		{
			printf("%02d\n",j);
			break;
		}
	return 0;
}