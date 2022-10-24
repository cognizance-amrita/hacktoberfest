#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    string query;
    cin >> n;
    string name[n];
    double marks[n][3];
    for (int j=0;j<n;j++){
        cin >> name[j];
        for (int i=0;i<3;i++){
            cin >> marks[j][i];
        }
    }
    cin >> query;
    int j=0;
    for (int i=0;i<n;i++){
        if (name[i]==query){
            j=i;
        }
    }
    double sum=0;
    for (int i=0;i<3;i++){
        sum+=marks[j][i];
    }
    printf("%.2f",sum/3.0);
    return 0;
}