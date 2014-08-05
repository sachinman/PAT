#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct mooncake
{
	double ton;
	double price;
};
bool cmp70(mooncake a,mooncake b)
{
	return (a.price/a.ton)>(b.price/b.ton);
}
int main1070()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n,t;
	double d,sum=0;
	vector<mooncake> v;
	scanf("%d %lf",&n,&d);
	t=n;
	mooncake m;
	while(t--)
	{
		scanf("%lf",&m.ton);
		v.push_back(m);
	}
	for(int i=0;i<v.size();i++)
		scanf("%lf",&v[i].price);
	sort(v.begin(),v.end(),cmp70);
	for(int i=0;i<v.size();i++)
	{
		if(d==0)
			break;
		if(d>=v[i].ton)
		{
			sum+=v[i].price;
			d-=v[i].ton;
		}
		else
		{
			sum=sum+d/v[i].ton*v[i].price;
			d=0;
		}
	}
	printf("%.2lf",sum);
	return 0;
}