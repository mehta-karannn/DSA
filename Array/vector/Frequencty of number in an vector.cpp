#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elements :";
    cin>>n;
    vector<int> v(n);
    cout<<"enter the elements";
    for(int i = 0; i<n;i++){
        cin>>v[i];
        if(v[i]>n){
            cout<<"You exceeded the limit of the number"<<endl;
            return 1;
        }
        
    }
    unordered_map<int,int>freq_map;
    for(int num:v){
        freq_map[num]++;
    }
    cout << "Frequency of each element:" << endl;
    for (auto &entry : freq_map) {
        cout << "Element " << entry.first << " appears " << entry.second << " times." << endl;
    }
    

}

