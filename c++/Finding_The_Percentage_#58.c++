#include <bits\stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,j=0,marks[n][3];
    string name[n],query;
    cin >> n;
    for (int i=0;i<4;i++){
        cin >> name[j];
        j++;
        cin >> marks[j][i];
    }
    cin >> query;
    for (int i=0;i<n;i++){
        if (name[i]==query){
            j=i;
        }
    }
    int sum=0;
    for (int i=0;i<3;i++){
        sum+=marks[j][i];
    }
    printf("%.2f",((float)sum)/3.0);
    return 0;
}