#include<bits/stdc++.h>
using namespace std;
void f(int i,int n,string name){
    if(i>n){
        return;
    }
    cout<<name<<endl;
    f(i+1,n,name);
}

int main(){
    int n;
    cout<<"Enter the number of times you want to print the name: ";
    cin>>n;
    int i=1;
    cout<<"Enter the name you want to print: ";
    string name;
    cin>>name;
    f(i,n,name);
    return 0;   
}