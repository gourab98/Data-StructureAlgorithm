#include<bits/stdc++.h>
using namespace std;
int n;
int tree[4*100000];
int A[100000];

void build(int node, int start, int end_)
{
    tree[node]=0;
  if(start==end_)
  {
    tree[node]=A[start];
    return ;
  }


    int mid=(start+end_)/2;
    build(2*node,start,mid);
    build(2*node+1,mid+1,end_);
    tree[node]=tree[2*node]+tree[2*node+1];

}

void update(int node, int start, int end_, int idx,int val)
{
  if(start==end_)
  {
    A[idx]=val;
    tree[node]=val;
    return ;
  }

    int mid=(start+end_)/2;
    if(start<=idx and idx<=mid)
    {
      update(2*node,start,mid,idx,val);
    }
    else
    {
      update(2*node+1,mid+1,end_,idx,val);
    }
    tree[node]=tree[2*node]+tree[2*node+1];
}

int query (int node,int start,int end_,int l,int r)
{
  if(r<start or end_<l)
  {
    return 0;
  }
  if(l<=start and end_<=r)
  {
    return tree[node];
  }
  int mid=(start+end_)/2;
  int p1=query(2*node,start,mid,l,r);
  int p2=query(2*node+1,mid+1,end_,l,r);
  return (p1+p2);
}
int main()
{
  int i,l,r;
  cout<<"Enter the total value:";
  cin>>n;
  cout<<"Enter the values:";
  for(i=1;i<n;i++)
  {
    cin>>A[i];
  }
  build(1,1,n);
  int g;
  cout<<"Enter the range:";
  cin>>l>>r;
  cout<<"The value of inside the range is:";
  cout<<query(1,1,n,2,4);

  return 0;
}
