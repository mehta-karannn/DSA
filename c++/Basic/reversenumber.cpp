#include<bits/stdc++.h>
using namespace std;


int reversedNumber(int num){
        int reversed =0;

        while(num!=0){
            int digit = num%10;
            reversed=reversed*10+digit;
            num /= 10;
        }
        return reversed;
    }

int main(){
    int num;

    cout<<"Enter the Number:";
    cin>>num;

    int reversed =reversedNumber(num);
    cout << "The reversed number is: " << reversed << endl;
    return 0;
}
    
