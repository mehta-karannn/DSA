#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<< "The elements in the vectors: ";
    cin>>n;
    vector<int> v(n);
    cout<<"The elements are:";
    for(int i = 0 ; i<n;i++){
        cin>>v[i];
    }
    v.erase(remove_if(v.begin(),v.end(),[](int x) { return x % 2 != 0; }), v.end());
    for(auto i: v){
        cout<<i<<""<<endl;
    }
}