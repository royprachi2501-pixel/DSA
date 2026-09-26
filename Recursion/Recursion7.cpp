#include<bits/stdc++.h>
using namespace std;
void recursion(int n,int factorial){
    if(n==1){
        cout<<factorial<<endl;
        return;
    }
    recursion(n-1,factorial*n);

}
int main(){
    int n;
    cin>>n;
    int factorial;
    factorial=1;
    recursion(n,factorial);

}