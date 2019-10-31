#include<bits/stdc++.h>
using namespace std;
int BIT[100000],a[100000],n;
void update(int idx,int val)
{
   for(;idx<=n;idx+=idx&-idx)
   {
     BIT[idx]+=val;
   }
}

int query(int idx)
{
  int sum=0;
  for(;idx>0;idx-=idx&-idx)
  {
    sum+=BIT[idx];
  }
  return sum;
}

int main()
{
   int i,g;
   cout<<"Enter the total Number:";
   cin>>n;
   cout<<"Enter the numbers:";
   for(i=1;i<=n;i++)
   {
     cin>>a[i];
     update(i,a[i]);
   }
   cout<<"Enter the number you want to query:";
   cin>>g;
   cout<<"The total sum from 1 to "<<g<<" is:";
   cout<<query(g);
   return 0;
}
