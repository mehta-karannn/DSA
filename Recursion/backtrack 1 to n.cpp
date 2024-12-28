#include<bits/stdc++.h>
using namespace std;

void bt(int i,int n){
    if(i<1) return;
    bt(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cout<<"Enter the n element";
    cin>>n;
    bt(n,n);


}