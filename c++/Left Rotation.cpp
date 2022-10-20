#include<iostream>
#include <stdio.h>  
using namespace std;
void rotateleft(int arr[],int d)
{
	int n = (sizeof(arr)/2)+1;
	for(int i=0; i<d; i++){  
        int j, first_val;   
        first_val = arr[0]; 
        for(j=0;j<n-1;j++){    
            arr[j] = arr[j+1];  
        }  
        arr[j] = first_val;  
    }        
    cout<<"Left Rotate by "<<d <<" times gives : ";  
    for(int i=0; i<n; i++){  
        cout<<arr[i]; 
    }  	
}
int main()  
{      
    int n ,d;
	cout<<"Enter the number of elements and number of rotations : ";
	cin>>n>>d;
	int arr[n];
	cout<<"Enter the elements of the array : ";  
    for (int i=0; i<n;i++) 
	{   
		cin>>arr[i];
    }      
    rotateleft(arr,d);
    return 0;  
}  

