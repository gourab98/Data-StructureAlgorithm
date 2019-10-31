#include<bits/stdc++.h>
using namespace std;
int a[200][200],color[200],queue2[200],m,dist[200];
int front=-1,rear=-1;
void enqueue(int n)
{
    if(front==-1)
    {
        front++;
        rear++;
        queue2[rear]=n;
    }
    else
    {
        rear++;
        queue2[rear]=n;
    }
    return;
}
int dequeue()
{
    int top;
    if(front==rear)
    {
        top=queue2[front];
        front=rear=-1;
    }
    else
    {
        top=queue2[front];
        front++;
    }
    return top;
}
void bfs(int n)
{
    int i;
    enqueue(n);
    while(front> -1 && rear>-1)
    {
        n=dequeue();
        color[n]=1;
        for(i=0;i<m;i++)
        {
            if(a[n][i]==1 && color[i]==0)
            {
                color[i]=1;
                enqueue(i);
                dist[i]=dist[n]+1;
            }
        }
    }
}
int main()
{
    int i,j,n,p,q;
    cin>>m>>n;///m=node,n=edge
    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        a[p][q]=1;
        a[q][p]=1;
    }
    bfs(0);
    for(i=0;i<m;i++)
    {
        cout<<dist[i]<<' ';
    }
    return 0;
}
/**6 8
1 3
1 2
2 4
2 5
3 5
4 5
4 6
5 6
0 1 1 2 2 3*/
