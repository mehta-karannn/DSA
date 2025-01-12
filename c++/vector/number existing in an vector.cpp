#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={7,9,3,1,4,7}; 
    int target;
    cout<< "The Target Number is :";
    cin>>target;
    if(find(v.begin(),v.end(),target) != v.end()){ //!=v.end() --> it make sure that if th element is not found it points to the elemet just after the end index of the vecotr which is empty 
        cout<<"Found";
    }else{
        cout<<"Not Found";

    }
    return 0;

    
}