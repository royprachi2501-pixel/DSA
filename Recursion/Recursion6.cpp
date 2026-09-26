//sum of first n natural number
#include<bits/stdc++.h>
using namespace std;
void recursion(int n, int sum){
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    recursion(n-1,sum+n); 
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    recursion(n,sum);
}