#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p=0,g;
	cin>>n;
	int arr[n+1];
	int arr2[n+1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	    arr2[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i] && arr2[j]+1>arr2[i]){
				arr2[i]=arr2[j]+1;
               p=max(p,arr2[i]);
               if(max(p,arr2[i]))
               	g=i;
			}
		}
		for(int z=0;z<n;z++){
			cout<<arr2[z]<<" ";
		}
		cout<<endl;
	}

	cout<<"The longest Increasing Subsequent is:"; 

	cout<<arr[g]<<" ";
	for(int i=g;i>=0;i--){
		 if(p==arr2[i]+1){
		 	cout<<arr[i]<<" ";
		 	p=arr2[i];
		 }
	}

}