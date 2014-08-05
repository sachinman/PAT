#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student36
{
	char name[11];
	char gender;
	char id[11];
	int score;
};
bool cmp36(student36 a,student36 b)
{
	return a.score<b.score;
}
int main1036()
{
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);

	int n;
	scanf("%d",&n);
	getchar();
	student36 s;
	vector<student36> vm;
	vector<student36> vf;
	while(n--)
	{
		scanf("%s %c %s %d",s.name,&s.gender,s.id,&s.score);
		getchar();
		if(s.gender=='M')
			vm.push_back(s);
		else
			vf.push_back(s);
		//printf("%s %c %s %d\n",s.name,s.gender,s.id,s.score);
	}
	if(!vm.empty())
		sort(vm.begin(),vm.end(),cmp36);
	if(!vf.empty())
		sort(vf.begin(),vf.end(),cmp36);
	
	if(vf.empty())
		printf("Absent\n");
	else
		printf("%s %s\n",vf[vf.size()-1].name,vf[vf.size()-1].id);

	if(vm.empty())
		printf("Absent\n");
	else
		printf("%s %s\n",vm[0].name,vm[0].id);

	if(vm.empty()||vf.empty())
		printf("NA\n");
	else
		printf("%d\n",vf[vf.size()-1].score-vm[0].score);
	return 0;
}