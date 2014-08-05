
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct Man{
	string name;
	int sigin[3];
	int sigout[3];
};
bool comp1(const Man &a,const Man &b)
{
	if(a.sigin[0]!=b.sigin[0])
		return a.sigin[0]<b.sigin[0];
	else
	{
		if(a.sigin[1]!=b.sigin[1])
			return a.sigin[1]<b.sigin[1];
		else
			return a.sigin[2]<b.sigin[2];
	}
}
bool comp2(const Man &a,const Man &b)
{
	if(a.sigout[0]!=b.sigout[0])
		return a.sigout[0]>b.sigout[0];
	else
	{
		if(a.sigout[1]!=b.sigout[1])
			return a.sigout[1]>b.sigout[1];
		else
			return a.sigout[2]>b.sigout[2];
	}
}
int main1006()
{
	int n;
	vector<Man> man;
	while(scanf("%d",&n)!=EOF)
	{
		while(n--)
		{
			Man mm;
			cin>>mm.name;
			scanf("%d:%d:%d",&mm.sigin[0],&mm.sigin[1],&mm.sigin[2]);
			scanf("%d:%d:%d",&mm.sigout[0],&mm.sigout[1],&mm.sigout[2]);
			man.push_back(mm);
		}
		sort(man.begin(),man.end(),comp1);
		cout<<man[0].name<<" ";
		sort(man.begin(),man.end(),comp2);
		cout<<man[0].name<<endl;
		man.clear();
	}
	return 0;
}


