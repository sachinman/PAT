#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

double n[2001];
int n1[11],n2[11];
double a1[11],a2[11];

int main1009()
{
	
	int k1,k2;
	while(scanf("%d",&k1)!=EOF)
	{
		memset(n,0,sizeof(n));
		memset(n1,0,sizeof(n1));
		memset(a1,0,sizeof(a1));
		memset(n2,0,sizeof(n2));
		memset(a2,0,sizeof(a2));
		int i,j,s=0;
		
		for(i=0;i<k1;i++)
			scanf("%d%lf",&n1[i],&a1[i]);
		scanf("%d",&k2);		
		for(j=0;j<k2;j++)
			scanf("%d%lf",&n2[j],&a2[j]);	

		for(i=0;i<k1;i++)
			for(j=0;j<k2;j++)
				n[n1[i]+n2[j]]+=(a1[i]*a2[j]);
		for(i=2000;i>=0;i--)
			if(fabs(n[i])>1e-6)
				s++;
		printf("%d",s);
		for(i=2000;i>=0;i--)
			if(fabs(n[i])>1e-6)
				printf(" %d %.1lf",i,n[i]);

	}
	return 0;
}