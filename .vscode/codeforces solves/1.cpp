#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
int main() {
    ll P;
    cin >> P;
int flag=1;
double y;
for (ll i = 1; i <= P; i++) {
       y = log(P - pow(3, i)) / log(5);
        if (y == floor(y) && y > 0) {
            cout << i<<" "<< y << "\n";
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag!=1)
    cout << "-1" << endl;

}
