#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

int main1051()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int m,n,k;
	scanf("%d%d%d",&m,&n,&k);
	for(int i=0;i<k;i++)
	{
		stack<int> s;
		bool flag=true;
		int cur=1;
		for(int j=0;j<n;j++)
		{
			int num;
			scanf("%d",&num);
			if(flag)
			{
				while(s.empty()||s.top()!=num)
				{
					s.push(cur);
					if(s.size()>m)
					{
						flag=false;
						break;
					}
					cur++;
				}
				if(flag&&s.size()>=1&&s.top()==num)
					s.pop();
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int m,n,k,d;
	stack<int> s;
	int i,j;
	bool can=true;
	scanf("%d%d%d",&m,&n,&k);
	while(k--)
	{
		s.push(1);
		int t=n,a=s.top();
		while(t--)
		{
			scanf("%d",&d);
			if(d>a)
			{
				for(a=a+1;a<=d;a++)
				{
					if(s.size()<m)
						s.push(a);
					else
						break;
				}
				if(s.top()==d)
				{
					s.pop();
					a=s.top();
				}
				else
				{
					can=false;
					break;
				}
			}
			else if(d==a)
			{
				s.pop();
				if(s.empty())
				{
					s.push(a++);
				}
				a=s.top();
				
			}
			else
				can=false;
		}
		if(can)
			printf("YES\n");
		else
			printf("NO\n");
	}


	return 0;
}
*/