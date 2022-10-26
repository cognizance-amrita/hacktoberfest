#include <bits\stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long int arr[n];
    long long int sum=0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << sum;
    return 0;
}