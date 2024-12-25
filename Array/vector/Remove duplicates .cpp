#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={5,6,6,7,8,1,2,9};
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    for(int num :v){
        cout<<num<< " ";
    }


    
}