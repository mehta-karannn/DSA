#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={5,4,3,2,1};

    //max_element-->predefined functions in C++ in STL
    //min_element-->predefined functions in C++ in STL

    int maximum= *max_element(nums.begin(),nums.end());
    int minimum= *min_element(nums.begin(),nums.end());

    cout<<"Maximum Element : "<<maximum<<endl;
    cout<<"Minimum Element : "<<minimum;
}
