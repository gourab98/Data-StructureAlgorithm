#include<bits/stdc++.h>
using namespace std;

typedef pair<int , int> pi;

int main()
{
    freopen("kruskal.txt", "r", stdin);
    int vertex;
    int edge;
    cin>>vertex>>edge;
    vector<pi> v[20];

    for(int i=0;i<edge;i++)
    {
       int source;
       pi p;
       cin>>source>>p.first>>p.second;
       v[source].push_back(p);
       int s2=p.first;
       p.first =source;
       v[s2].push_back(p);
    }

    for(int i=0;i<vertex;i++)
    {
      cout<<i<<"--";
      for(int j=0;j<v[i].size();j++)
      {
         cout<<v[i][j].first<<"-"<<v[i][j].second<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
}
