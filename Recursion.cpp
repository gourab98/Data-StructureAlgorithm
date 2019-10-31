///local Recursion...

#include<bits/stdc++.h>
using namespace std;

int counter=1;

void a()
{
    counter++;
    if(counter>3) return;
    int x=5;
    x++;

    a();
    cout<<x<<endl;
}
int main()
{
    a();
    return 0;
}
