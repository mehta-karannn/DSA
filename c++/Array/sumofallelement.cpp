#include<bits/stdc++.h>
using namespace std;
int arr[]={1,3,4,5,6,7};
int n = sizeof(arr)/sizeof(arr[0]);
int c=0;
int main(){
    for(int i =0;i<n;i++){
        c+=arr[i];
    }
    cout<<c<<endl;
    
}