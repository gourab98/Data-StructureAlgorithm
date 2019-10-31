#include<bits/stdc++.h>
using namespace std;
int main(){
	int value,total;
	cin>>value>>total;
	int coin[total+1];
	for(int i=0;i<total;i++){
		cin>>coin[i];
	}
	int mat[total+1][value+1];
	for(int i=0;i<total;i++){
		for(int j=0;j<=value;j++){
			if(j==0)
				mat[i][j]=0;
			else
				mat[i][j]=INT_MAX;
		}
	}
	for(int i=0;i<total;i++){
		for(int j=0;j<=value;j++){
			if(j-coin[i]<0){
				mat[i][j]=mat[i-1][j];
			}
			else
			{
				mat[i][j]=min(mat[i-1][j],mat[i][j-coin[i]]+1);
			}
		}
	}
	for(int i=0;i<total;i++)
	{
		for(int j=0;j<=value;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	//cout<<mat[total-1][value];



} 