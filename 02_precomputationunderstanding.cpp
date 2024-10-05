#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,4,1,1,2,5,2};
    int hash[13]={0};
    for(int i=0;i<7;i++){
        //hash[arr[i]]=hash[arr[i]]+1;
        hash[arr[i]]++;
    }
    int number;
    cout<<"Enter the number which u want to know how much time it is repeated"<<endl;
    cin>>number;
    cout<<hash[number];
 return 0;
}