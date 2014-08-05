#include<iostream>
using namespace std;

int main1058()
{
	int a[3],b[3],c[3];
	scanf("%d.%d.%d %d.%d.%d",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2]);
	int r,g=0;
	r=a[2]+b[2]+g;
	c[2]=r%29;
	g=r/29;

	r=a[1]+b[1]+g;
	c[1]=r%17;
	g=r/17;

	r=a[0]+b[0]+g;
	c[0]=r;

	printf("%d.%d.%d\n",c[0],c[1],c[2]);
	return 0;
}