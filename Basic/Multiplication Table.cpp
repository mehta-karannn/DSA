#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int f;

    cout<<"enter a number to print multiplication ";
    cin>>n;
    cout<<"enter the number till you wnat to print the table multiplication";
    cin>>f;

    for(int i = 1;i<=f;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;;
    }
    return 0;


}