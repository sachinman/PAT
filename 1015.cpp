#include<iostream>
#include<math.h>
using namespace std;

int reverseNum(int n,int d)
{
	int sum=0;
	do{
		sum=sum*d+n%d;
		n/=d;
	}while(n!=0);
	return sum;
}
bool isPrime(int a)
{
	if(a==0||a==1)
		return false;
	int d=sqrt((double)a);
	for(int i=2;i<=d;i++)
		if((a%i)==0)
			return false;
	return true;
}

int main1015()
{
	int n,d;
	while(scanf("%d",&n)!=EOF&&n>=0)
	{
		scanf("%d",&d);
		if(isPrime(n)&&isPrime(reverseNum(n,d)))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}