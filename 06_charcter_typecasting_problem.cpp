#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Priyansuuuuu";
    int hash[256]={0};
    for (int i = 0; i < s.size(); i++)
    {
         hash[s[i]]++;
    }
    
     char c='u';
    cout<<hash[c]<<endl;
 return 0;
}