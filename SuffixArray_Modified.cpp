#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<string>
using namespace std;
#define MAX 400004
struct info
{
    int tup[2], indx;
}arr[MAX];
int cmp(info a, info b)
{
    if (a.tup[0] != b.tup[0]) {
        return (a.tup[0] < b.tup[0]);
    }
    else {
        return (a.tup[1] < b.tup[1]);
    }
}
int Rank[18][MAX], step;
string text;
void build_suffix_array()
{
    int n = text.size(), jump;
    for(int j = 0; j < n; j++)
    {
        Rank[0][j] = text[j];
        memset(arr[j].tup, 0,sizeof(arr[j].tup));
    }
    for(step = 1, jump = 1; jump <= n; step++, jump <<= 1)
    {
        for(int j = 0; j <=n; j++)
        {
            arr[j].indx = j;
            arr[j].tup[0] = Rank[step - 1][j];
            arr[j].tup[1] = j + jump < n? Rank[step - 1][j + jump] : -1;
        }
        sort(arr, arr + n, cmp);
        Rank[step][arr[0].indx] = 0;
        for(int j = 1; j < n; j++) {
            if ( arr[j].tup[0] == arr[j - 1].tup[0] && arr[j].tup[1] == arr[j - 1].tup[1] ) {
                Rank[step][arr[j].indx] =  Rank[step][arr[j - 1].indx];
            }
            else {
                Rank[step][arr[j].indx] = j;
            }
        }
    }
}
int main() {
    cin >> text;
    printf("%d\n", text.size());
    build_suffix_array();
    for (int i = 0; i < text.size(); ++i) {
        cout << arr[i].indx << ' ' << text.substr(arr[i].indx) << '\n';
    }
    return 0;
}
