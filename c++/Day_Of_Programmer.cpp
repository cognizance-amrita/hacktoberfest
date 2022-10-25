#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
 int year;
 cout<<"Enter the year : ";
 cin>>year;
 if(year==1918)
 {
 	cout<<"26/09/"<<year;
 }
 else 
 {
 	if(year<= 1917)
 	{
 		if(year%4==0)
		{
			cout<<"12/09/"<<year;
		}
 		else
		{
			cout<<"13/09/"<<year; 	
		} 	
 	}
 	else{
 		if((year%4==0 && year%100!=0)||(year%400==0))
 		{
			cout<<"12/09/"<<year;
		}
 		else 
		{
			cout<<"13/09/"<<year;
		}
 		}
 }
 return 0;
}
