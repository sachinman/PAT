#include<iostream>
#include<string.h>
using namespace std;

int a[100000],b[10000];
int main1041()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		int i;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			b[a[i]]++;
		}
		
		for(i=0;i<n;i++)
		{
			if(b[a[i]]==1)
			{
				printf("%d",a[i]);
				break;
			}
		}
		if(i==n)
			printf("None");
	}
	return 0;
}