#include<bits/stdc++.h>
using namespace std;


int main (){
    int n,first = 0, second = 1, next;

    cout<<"enter a postive number: ";
    cin>>n;

    if(n<0){
        cout<<"Please enter a positve number"<<endl;
        return 0;
    }

    cout << "Fibonacci series up to " << n << ":" << endl;
    if (n >= 0) cout << first << " "; 
    if (n >= 1) cout << second << " "; 

    next = first + second;
    while (next <= n) {
        cout << next << " ";
        first = second;
        second = next;
        next = first + second;
    }

    cout << endl;

    return 0;
}


