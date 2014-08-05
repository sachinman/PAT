#include<iostream>
using namespace std;

int main1065()
{
	int t,i;
	long long a,b,c;
	
	while(scanf("%d",&t)!=EOF)
	{
		i=1;
		while(t--)
		{
			cin>>a>>b>>c;
			long long res=a+b;
			if(a<0&&b<0 && res>=0)
				printf("Case #%d: false\n",i);
			else if(a>0&&b>0&&res<=0)
				printf("Case #%d: true\n",i);
			else if(res>c)
				printf("Case #%d: true\n",i);
			else
				printf("Case #%d: false\n",i);
			i++;
		}
	}
	return 0;
}