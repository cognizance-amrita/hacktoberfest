#include<iostream>
using namespace std;

int main(){
    int a[104],n;
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"The reversed array: ";
    for(int j=n-1;j>=0;j--){
        cout<<a[j]<<" ";
    }
}