//printing linearly decreasing numbers using backtrack recursion
#include<bits/stdc++.h>
using namespace std;
void recursion(int i,int n){
    if(n>i){
        return;
    }
    recursion(i-1,n);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    recursion(n,n);
}