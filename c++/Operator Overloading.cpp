#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>
using namespace std;
class Matrix 
{
    public:
        vector<vector<int> > matrx;
        Matrix operator+(const Matrix &obj) 
        {
            Matrix mat_sum(*this);
            for(int i=0;i<mat_sum.matrx.size();i++) 
            {
                for(int j=0;j<mat_sum.matrx[i].size();j++) 
                {
                    mat_sum.matrx[i][j] += obj.matrx[i][j];
                }
            }
            return mat_sum;
        }
};
int main() 
{
   int no_inp,k;
   cout<<"Enter the number of inputs : ";
   cin >> no_inp;
   for(int i=0;i<no_inp;i++) 
   {
      Matrix A;
      Matrix B;
      int m,n;
      cout<<"Enter the value of N and M : ";
      cin>>n>>m;
      int val;
      for(int j=0;j<n;j++) 
      {
         vector<int> a_vals;
         for(int k=0;k<m;k++) 
         {
            cin>>val;
            a_vals.push_back(val);
         }
         A.matrx.push_back(a_vals);
      }
      for(int i=0;i<n;i++) 
      {
         vector<int> b_vals;
         for(int j=0;j<m;j++) 
         {
            cin>>val;
            b_vals.push_back(val);
         }
         B.matrx.push_back(b_vals);
      }
      Matrix sum=A+B;
      cout<<"Sum of the two matrices"<<endl;
      for(int i=0;i<n;i++) 
      {
         for(int j=0;j<m;j++) 
         {
            cout<<sum.matrx[i][j]<<" ";
         }
         cout<<endl;
      }
   }  
   return 0;
}
