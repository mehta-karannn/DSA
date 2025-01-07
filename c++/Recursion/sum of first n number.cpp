#include<bits/stdc++.h>
using namespace std;

int sumofN(int n){
    if(n==0) return 0 ;
    return n + sumofN(n-1);



}

int main(){
    int n;
    cout<< " Enter the value of n:";
    cin>>n;
    int result = sumofN(n);
    cout<<"the sum of the first"<< n <<"numbers is: "<<result<<endl;
    return 0;
}