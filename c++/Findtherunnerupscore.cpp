#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A, A+n);
    int max = A[n-1];
    int runner_up = A[n-2];
    for(int i = n-2; i >= 0; i--) {
        if(A[i] < max) {
            runner_up = A[i];
            break;
        }
    }
    cout << runner_up;
    return 0;
}
