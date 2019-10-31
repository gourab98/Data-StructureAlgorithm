///incomplete...
#include<bits/stdc++.h>
using namespace std;

int row,col;
char board[12][12];
int mark[12][12];
char blank[20];
int startrow,startcol,finishrow,finishcol;

bool ispossible(int r, int c){
  if(r<0 || c<0 || r>=row || c>col) return false;
  if(board[r][c]=='*')return false;
  if(mark[r][c]==1)return false;
  if(board[r][c]=='e')return true;

  mark[r][c]=1;

}


int main()
{
    cin>>row>>col;
    fgets(blank,20,stdin);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%c",&board[i][j]);

            if(board[i][j]=='s'){
                startrow=i;
                startcol=j;
            }
            if(board[i][j]=='e'){
                finishrow=i;
                finishcol=j;
            }
        }
        fgets(blank,20,stdin);
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<
        }

    }
}
