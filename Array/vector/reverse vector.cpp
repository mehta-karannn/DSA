#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={7,9,3,1,4,7};  //-->Creating an Vector

    reverse(v.begin(),v.end());//-->this is how we reverse a number 

    cout<<"Reversed number:";

    for (int num:v){ //-->num:v stands for holding the vector v in temporary variable num to iterate the output
        cout<<num<<" ";
    }
    return 0;

}