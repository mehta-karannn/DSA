#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n;
    int count=0;

    cout<<"enter a number: ";
    cin>>n;

    n=abs(n); // handlesnegativenumbers--learn new keyword:)

    if(n ==0){
        count=1;
    }
    else{
        while(n>0){
            n =n/10;
            count++;
        }
        
    }
    cout << "The number of digits is: " << count << endl;
    return 0;

}