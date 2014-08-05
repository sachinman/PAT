#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int swapZero(vector<int> &nums)
{
	int cnt=0;
	int tmp1=0;
	int tmp2=nums[tmp1];
	nums[0]=0;
	while(tmp2!=nums[tmp2])
	{
		tmp1=nums[tmp2];
		nums[tmp2]=tmp2;
		tmp2=tmp1;
		++cnt;
	}
	return cnt;
}
int gao(vector<int> &nums)
{
	int len=nums.size();
	int res=0;
	for(int i=0;i<len;i++)
	{
		if(nums[i]!=i)
		{
			if(0!=i)
			{
				swap(nums[0],nums[i]);
				res+=1;
			}
			res+=swapZero(nums);
		}
	}
	return res;
}

int main1067()
{
	int n;
	vector<int> nums;
	scanf("%d",&n);
	nums.resize(n);
	for(int i=0;i<n;i++)
		scanf("%d",&nums[i]);
	printf("%d\n",gao(nums));
	return 0;
}
/*
int nums[100000];
int n,p1=0;
bool orderd(int nums[])
{
	for(int i=p1;i<n;i++)
	{
		if(nums[i]!=i)
		{
			p1=i;
			return false;
		}
	}
	return true;
}
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int t,sum=0,p0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&nums[i]);
		if(nums[i]==0)
			p0=i;
	}
	
	while(!orderd(nums))
	{
		if(p0==0)
		{
			nums[0]=nums[p1];
			nums[p1]=0;
			p0=p1;
			sum++;
		}
		for(int i=0;i<n;i++)
		{
			if(nums[i]==p0)
			{
				nums[p0]=p0;
				nums[i]=0;
				p0=i;
				sum++;
				break;
			}
		}
	}
	printf("%d",sum);
	return 0;
}
*/