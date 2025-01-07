#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={5,6,7,8,1,2,9};

    sort(v.begin(),v.end());
    cout<<"Ascending Order : ";//-->this is how we ascend the number
    for(int num:v){
        cout<<num<<" ";
    }
    cout<<endl;

    sort (v.begin(),v.end(),greater<int>());//--> this is how we descend the enumber
    cout<<"Descending order : ";
    for(int nums:v){
        cout<<nums<<" ";
    }
    cout<<endl;


}