#include<bits/stdc++.h>
using namespace std;


int arr[]={3,1,2,5,2};
int main(){
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
        largest=arr[i];}
        
    }
cout<<largest<<endl;
    
}