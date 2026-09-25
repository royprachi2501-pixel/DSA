#include<bits/stdc++.h>
using namespace std;
void rat(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    rat(i+1,n);
}
int main(){
    int n;
    cin>>n;
    int i=1;
    rat(i,n);
    return 0;   
}
