#include<iostream>
using namespace std;

bool isPrime59(long n)
{
	long i;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main1059()
{
	long n,i,tmp,k;
	cin>>n;
	tmp=n;
	cout<<n<<"=";
	if(n==1)
		cout<<n;
	else
	{
		for(i=2;i<=tmp;i++)
		{
			k=0;
			if(isPrime59(i))
			{
				while(n%i==0)
				{
					k++;
					n/=i;
				}
			}
			if(k>1)
				cout<<i<<"^"<<k;
			else if(k==1)
				cout<<i;
			if(n!=1&&k>=1)
				cout<<"*";
			else if(n==1)
				break;
		}
	}
	return 0;
}