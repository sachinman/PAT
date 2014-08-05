#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main1042()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	string card[55]={"O","S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
	"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
	"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
	"D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
	"J1","J2"};
	string ocard[55];
	int k;
	string tmp;
	int order[55]={0};
	scanf("%d",&k);
	for(int i=1;i<55;i++)
		scanf("%d",&order[i]);
	while(k--)
	{
		for(int i=1;i<55;i++)
		{
			ocard[order[i]]=card[i];
		}
		for(int i=1;i<55;i++)
		{
			card[i]=ocard[i];
		}
	}
	for(int i=1;i<55;i++)
	{
		if(i==54)
			cout<<ocard[i];
		else
			cout<<ocard[i]<<" ";
	}
	return 0;
}