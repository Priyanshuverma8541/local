//map is in hashing do same kon element kitne bar h
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,1,3,2,5,5,5,5,5,4,1};

    //pre-compute
    map<int,int> mpp;//
    for (int i = 0; i < 11; i++)
    {
        mpp[arr[i]]++;
    }

    //iterater in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }


    int number;
    cout<<"enter the number:\n";
    cin>>number;
    cout<<mpp[number]<<endl;

 return 0;
};
