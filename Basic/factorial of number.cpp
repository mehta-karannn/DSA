#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    long long factorial = 1;

    cout<<"Enter a POSITIVE integer:";
    cin>>n;

    if(n<0){
        cout<<"Factorial is not-defined for negative numbers";
    }else{
        for(int i=1;i<=n;++i){
            factorial *=i;
        }
         cout << "The factorial of " << n << " is " << factorial << endl;
    }
    
    return 0;
}