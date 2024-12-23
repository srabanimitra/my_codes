/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;
cin>>t;
while(t--){
        float n,a,b;
    cin>>n >>a >>b;
    float d =(b/2);
    float s=round(d*n);
    float f=n*a;
    if(s<f)
        cout << s<<"\n";

else
        cout << f<<"\n";


}

}*/
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        // If the price of two yogurts on promotion is less than or equal to twice the price of one yogurt,
        // then it's better to buy yogurts in pairs.
        if (b <= 2 * a) {
            cout << (n / 2) * b + (n % 2) * a << endl;
        } else {
            cout << n * a << endl;
        }
    }

    return 0;
}


