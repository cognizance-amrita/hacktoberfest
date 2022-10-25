#include<iostream>
using namespace std;
int main(){
    int p,N,head=0,tail;
    
    cin>>N>>p;
    int arr[N];

    for(int i=0;i<N;i++){
     cin>>arr[i];
    }
    head=head+p;
    tail=N-1;

    int i=head;
    do{
        cout<<arr[i]<<" ";
        i++;
         if(i==tail+1){
            i=0;

        }
    }while(i!=head);
} 
