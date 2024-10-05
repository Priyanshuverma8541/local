#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    // precompute//logic
    int hash[256]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    int q;
    cout<<"Enter How many times you want to search\n";
    cin>>q;
    while(q--){
        cout<<"Enter the character to search how many times its appears\n";

        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    
    
 return 0;
}