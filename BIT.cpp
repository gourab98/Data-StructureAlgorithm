#include<bits/stdc++.h>
using namespace std;
int BIT[10000], a[10000],n;

void update(int x,int delta)
{
	for(;x<=n;x+=x&-x)
		BIT[x]+=delta;
}

int  query(int x)
{
	int sum=0;
	for(;x>0;x-=x&-x)
		sum+=BIT[x];
	return sum;
}

int main()
{
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		update(i,a[i]);
	}
	printf("%d\n",query(3));
	return 0;
}
