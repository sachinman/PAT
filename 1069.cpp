#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main1069()
{
	char ac[5];
	while(gets(ac))
	{
		string n=ac;
		while(n.length()!=4)
			n.insert(n.begin(),'0');
		if(n[0]==n[1]&&n[0]==n[2]&&n[0]==n[3])
			printf("%s - %s = 0000\n",n.c_str(),n.c_str());
		else
		{
			string r,a,b;
			int ai,bi,ri=0,i;
			
			while(ri!=6174)
			{
				sort(n.begin(),n.end());
				b=n;
				for(i=0;i<4;i++)
					ac[i]=b[i];
				sscanf(ac,"%d",&bi);
				reverse(n.begin(),n.end());
				a=n;
				for(i=0;i<4;i++)
					ac[i]=a[i];
				sscanf(ac,"%d",&ai);
				ri=ai-bi;
				printf("%04d - %04d = %04d\n",ai,bi,ri);
				sprintf(ac,"%d",ri);
				n=ac;
				while(n.length()!=4)
					n.insert(n.begin(),'0');			
			}
		}
	}
	return 0;
}

