#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main1057()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,v;
	string cmd;
	char cm[15];
	vector<int> sta;
	multiset<int> values;
	multiset<int>::iterator it;
	scanf("%d",&n);
	getchar();
	sta.clear();
	while(n--)
	{
		gets(cm);
		cmd=cm;
		if(cmd=="Pop")
		{
			if(sta.empty())
				printf("Invalid\n");
			else
			{
				v=sta[sta.size()-1];
				printf("%d\n",v);
				sta.erase(sta.begin()+sta.size()-1);
				it=values.find(v);
				values.erase(it);
			}
		}
		else if(cmd=="PeekMedian")
		{
			if(sta.empty())
				printf("Invalid\n");
			else
			{
				int i=0;
				for(it=values.begin();it!=values.end();it++,i++)
				{
					if(i==(sta.size()+1)/2-1)
					{
						printf("%d\n",*it);
						break;
					}
				}
			}
		}
		else
		{
			sscanf(cm,"Push %d",&v);
			sta.push_back(v);
			values.insert(v);
		}
	}
	return 0;
}

/*
int main()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int n,v;
	string cmd;
	char cm[15];
	vector<int> sta;
	vector<int> vec;
	//multiset<int> values;
	//multiset<int>::iterator it;
	scanf("%d",&n);
	getchar();
	sta.clear();
	while(n--)
	{
		gets(cm);
		cmd=cm;
		//cout<<cmd<<endl;
		if(cmd=="Pop")
		{
			if(sta.empty())
				printf("Invalid\n");
			else
			{
				v=sta[sta.size()-1];
				printf("%d\n",v);
				sta.erase(sta.begin()+sta.size()-1);
				//it=values.find(v);
				//values.erase(it);
			}
		}
		else if(cmd=="PeekMedian")
		{
			if(sta.empty())
				printf("Invalid\n");
			else
			{
				vec.clear();
				for(int i=0;i<sta.size();i++)
					vec.push_back(sta[i]);
				sort(vec.begin(),vec.end());
				printf("%d\n",vec[(vec.size()+1)/2-1]);
			}
		}
		else
		{
			sscanf(cm,"Push %d",&v);
			sta.push_back(v);
			//values.insert(v);
		}
	}
	return 0;
}
*/