///local Recursion...

#include<bits/stdc++.h>
using namespace std;

int counter=1;

void Helloworld(int counter)
{
    if(counter<1)return;
    printf("Hello World!\n");
    Helloworld(counter-1);
}
int main()
{
    Helloworld(2);
    return 0;
}
