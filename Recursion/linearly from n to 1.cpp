#include<bits/stdc++.h>
using namespace std;

void name (int i , int n){
    if(i<1) return;

    cout<<i<<endl;

    name(i-1,n);


}

int main(){
    int n ;
    cout<<"enter a number to print your name";
    cin>>n;
    name(n,n);
}