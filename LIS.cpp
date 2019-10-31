#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size: "
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=0;i<n;i++)
	{
       cin>>a[i];
       b[i]=1;

	}
	for(int i=1;i<n;++i){
        for(int j=0;j<i;++j)
        {
        	if(a[i]>a[j] && b[i]<b[j]+1)
        	{
        		b[i]=b[j]+1;
        	}
        }

    for(int z=0;z<n;z++)
    {
      cout<<b[z]<<" ";
    }
    cout<<endl;
   
   }

}