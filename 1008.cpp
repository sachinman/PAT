#include<iostream>
#include<vector>
using namespace std;

int main1008()
{
	vector<int> v;
	int n,i,sum;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			scanf("%d",&i);
			v.push_back(i);
		}
		sum=5*v.size();
		sum+=v[0]*6;
		for(i=0;i<v.size()-1;i++)
		{
			if(v[i]<v[i+1])
				sum+=(v[i+1]-v[i])*6;
			else
				sum+=(v[i]-v[i+1])*4;
		}
		printf("%d",sum);
	}
	return 0;
}