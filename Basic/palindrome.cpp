#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,reverseA;

    cout<<"enter your string";
    cin>>a;

    reverseA=string(a.rbegin(),a.rend());

    if(a==reverseA){
        cout<<"the string is a palindrome";
    }else{
        cout<<"the string is not palindrome";
    }
    return 0;

}