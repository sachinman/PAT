#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main1029()
{
	int n1,n2;
	
	int t;
	while(scanf("%d",&n1)!=EOF)
	{
		vector<int> a,b;
		for(int i=0;i<n1;i++)
		{
			scanf("%d",&t);
			a.push_back(t);
		}
		scanf("%d",&n2);
		for(int i=0;i<n2;i++)
		{
			scanf("%d",&t);
			b.push_back(t);
		}
		
		int mid=(n1+n2-1)/2;
		int c,k=0;
		int i,j;
		for(i=0,j=0;i<n1&&j<n2;)
		{
			if(a[i]<=b[j])
			{
				c=a[i];
				i++;
				k++;
			}
			else
			{
				c=b[j];
				j++;
				k++;
			}
			if((k-1)==mid)
			{
				printf("%d",c);
				break;
			}
		}
		if((k-1)!=mid&&i<n1)
			printf("%d",a[mid-n2]);
		else if((k-1)!=mid&&j<n2)
			printf("%d",b[mid-n1]);	
	}
	return 0;
}