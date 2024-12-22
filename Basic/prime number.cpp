#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a positive number:";
    cin>>n;

    if(n<2){
        cout<<n<<"It is not a prime number";
    }else {
        for(int i =2 ; i<n ;i++){
            if(n%i==0){
                cout<<"it is not a prime number";
                break;

            }else{
                cout<<"it is a prime number";
                break;
            }

        }
    }return 0;
}