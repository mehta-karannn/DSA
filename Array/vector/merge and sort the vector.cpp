#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,n1;

    cout<<"First Vector: ";
    cin>>n;
    cout<<"Second Vector: ";
    cin>>n1;

    vector <int> v(n);
    vector <int> v1(n1);

    cout<<"Enter the elements in the first vector";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<"enter the elements in the second vector";
    for(int i =0;i<n1;i++){
        cin>>v1[i];
    }

    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());

    vector<int> v3(v.size()+v1.size());

    merge(v.begin(),v.end(),v1.begin(),v1.end(),v3.begin());
    v3.erase(unique(v3.begin(), v3.end()), v3.end());
    cout << "Merged vector: "<<endl;

    for(int i:v3){
        cout<< i <<" ";
    }
    cout<<endl;

    

}