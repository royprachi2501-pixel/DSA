#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(char k='A';k<='A'+i;k++){
            cout<<k;
  }
  for(char p='A'+(i-1);p>='A';p--){
    cout<<p;
  }
  cout<<endl;

     }
     return 0;

}