#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
struct suffix
{
    int index;
    char suff[200];
};
suffix* suffixes;
int cmp(suffix a, suffix b)
{
    if (strcmp(a.suff, b.suff) < 0) {
        return 1;
    }
    else {
        return 0;
    }
}
void buildSuffixArray(char *txt, int n)
{
    suffixes = new suffix[n];
    for (int i = 0; i < n; i++)
    {
        suffixes[i].index = i;
        int k = 0;
        for (int j = i; j < strlen(txt); ++j, ++k) {
            suffixes[i].suff[k] = txt[j];
        }
        suffixes[i].suff[k] = '\0';
    }
    sort(suffixes, suffixes+n, cmp);

    for (int i = 0; i < n; ++i) {
        printf("%s\n", suffixes[i].suff);
    }

    return;
}
void search(char *pat, int n)
{
    int m = strlen(pat);
    int l = 0, r = n-1;
    while (l <= r)
    {
        int mid = ( l + r ) / 2;
        int res = strncmp(pat, suffixes[mid].suff, m);
        if (res == 0)
        {
            printf("Pattern found\n");
            return;
        }
        if (res < 0) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    printf("Pattern not found\n");
}
int main()
{
    char txt[1000];
    scanf("%s", &txt);
    int n = strlen(txt);
    buildSuffixArray(txt,  n);
    char pattern[1000];
    while(scanf("%s", pattern)) {
        search(pattern, n);
    }
    return 0;
}
