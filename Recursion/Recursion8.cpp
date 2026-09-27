#include<bits/stdc++.h>
using namespace std;
void recursion(int n,int arr[]){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-1]);
        n--;
    }
    
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reversed array: ";
    recursion(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}