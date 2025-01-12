#include<bits/stdc++.h>
using namespace std;
int arr[]={1,3,2,5,6,8,9};
int main(){
    int n =sizeof(arr)/sizeof(arr[0]);   
    int largest=arr[0];
    int slargest=-1;
    for(int i =0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
            
        }

    }cout<<slargest<<endl;


    
}