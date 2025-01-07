#include<bits/stdc++.h>
using namespace std;

void bt(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    bt(i-1,n);
    
}
int main(){
    int n;
    cout<<"Enter the n element";
    cin>>n;
    bt(n,n);


}