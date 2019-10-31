#include<bits/stdc++.h>
using namespace std;
void ins(string text,int pos,string pattern)
{
   string first,second;
   int len=text.size();
   for(int i=0;i<pos-1;i++)
   first=first+text[i];

   for(int i=pos-1;i<len;i++)
   second=second+text[i];

   text=first + pattern + second;
   cout<<text<<endl;
}

int main()
{
 int pos;
 string text,pattern;
 cout<<"Enter the text:";
 getline(cin,text);
 cout<<"Enter the substring:";
 getline(cin,pattern);
 cout<<"Enter the position:";
 cin>>pos;
 ins(text,pos,pattern);
 //cout<<text<<endl;
 }
