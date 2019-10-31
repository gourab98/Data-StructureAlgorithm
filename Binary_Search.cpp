#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n,int x)
{
    int left,right,mid;
    left=0;
    right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            right=mid-1;
        else
            left=mid+1;
    }
        return -1;
}
int main()
{
    int a[]={2,3,4,8,9,10,14,15,18,20,25,29,30,48,50,69,79,89,90};
    int n=sizeof(a)/sizeof(a[0]);
    int x=15;
    int result=binarysearch(a,n,x);
    (result==-1)?cout<<"Element is not found.":cout<<"Element is found at "<<result+1<<" index.";
    return 0;
}
