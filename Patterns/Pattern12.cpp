#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    
    for(int j=0;j<=start;j++){
        cout<<" ";
    }
    
    for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        start-=2;
    }
    return 0;
}