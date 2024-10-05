#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={3,5,2,8,5,9,1};
    //int n=arr.size(); wrong but i dont know why
    

    map<int,int> mmp;
    for(int i=0;i<7;i++){
        mmp[arr[i]]=mmp[arr[i]]+1;
    }
    for(auto it:mmp){
        cout<<it.first<<" ->"<<it.second<<endl;
    }
 return 0;
}