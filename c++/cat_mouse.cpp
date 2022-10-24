#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--){
        int x,y,z;
        cin >> x >> y >> z;
        if(abs(x-z) < abs(y-z)){
            cout << "Cat A\n";
        }
        if(abs(x-z) > abs(y-z)){
            cout << "Cat B\n";
        }
        if(abs(x-z) == abs(y-z)){
            cout << "Mouse C\n";
        }
    }
} 
