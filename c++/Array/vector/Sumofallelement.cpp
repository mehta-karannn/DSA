#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"enter the number of elements in an vector";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter the numbers :";
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    int sum = accumulate(v.begin(),v.end(),0);

    for(int j:v){
        cout<<j<<" ";
    }
    cout<<endl;
    cout<<"The sum of all element in the vector : "<<sum<<endl;


}