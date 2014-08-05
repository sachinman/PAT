#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp37(int a,int b)
{
	return a>b;
}
int main1037()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int nc,np,tmp,sum=0;
	vector<int> c1,c2,p1,p2;
	scanf("%d",&nc);
	while(nc--)
	{
		scanf("%d",&tmp);
		if(tmp>=0)
			c1.push_back(tmp);
		else
			c2.push_back(tmp);
	}
	scanf("%d",&np);
	while(np--)
	{
		scanf("%d",&tmp);
		if(tmp>=0)
			p1.push_back(tmp);
		else
			p2.push_back(tmp);
	}
	sort(c1.begin(),c1.end(),cmp37);
	sort(c2.begin(),c2.end());
	sort(p1.begin(),p1.end(),cmp37);
	sort(p2.begin(),p2.end());

	for(int i=0;i<c1.size()&&i<p1.size();i++)
		sum+=c1[i]*p1[i];
	for(int i=0;i<c2.size()&&i<p2.size();i++)
		sum+=c2[i]*p2[i];
	printf("%d\n",sum);
	return 0;
}