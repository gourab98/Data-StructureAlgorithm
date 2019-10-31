#include<bits/stdc++.h>
using namespace std;

int modInverse(int a,int m)
{
    a=a%m;
    for(int x=1;x<m;x++)
    {
    	if((a*x)%m==1)
    		return x;
    }	
}

int main()
{
	int a,m;
	cin>>a>>m;
	cout<<modInverse(a,m);
	return 0;
}