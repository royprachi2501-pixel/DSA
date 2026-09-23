#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        k=n-i-1;
        for(int j=0;j<=i;j++){
            cout<<char('A'+ k);
            k++;
        }
        cout<<endl;
    }
    return 0;
}