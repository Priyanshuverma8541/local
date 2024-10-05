#include<bits/stdc++.h>
using namespace std;
int main()
{   string s="leetcode";
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++){
        v[s[i]-'a']++;
    }
    
   for(auto it:v){
    cout<<it <<" ";
   }
 return 0;
}