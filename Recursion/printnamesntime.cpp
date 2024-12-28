#include<bits/stdc++.h>
using namespace std;

void name (int i , int n){
    if(i>n) return;

    cout<<"Karan"<<endl;

    name(i+1,n);


}

int main(){
    int n ;
    cout<<"enter a number to print your name";
    cin>>n;
    name(1,n);
}