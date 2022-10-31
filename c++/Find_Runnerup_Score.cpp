#include <iostream>
using namespace std;
int main()
{
    int n,H=-100,a=-100;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if (A[i]>H)
        {
            a = H;
            H = A[i];
        }
        else if (A[i]>a && A[i]<H){
            a = A[i];
        }
    }
    cout<<a;
    return 0; 
}