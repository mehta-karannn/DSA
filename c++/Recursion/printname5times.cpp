#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void name(){
    if(cnt == 4) return;
    cout<<cnt<<endl;
    cnt++;
    name();
    
};
string names ="Karan";
void namess(int cnt){
    if (cnt==5) return ;
    cout<<names<<endl;
    namess(cnt+1);
};
int main(){
    name();
    namess(0);
    return 0;
}


