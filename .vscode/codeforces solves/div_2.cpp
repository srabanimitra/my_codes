#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int sum = p1 + p2 + p3;
        int sum1 = 0;

        if(sum % 2 != 0){
            cout << "-1" << endl;
        }
        else if(sum == 0){
            cout << "0" << endl;
        }
        else {
            while(p1 > 0 && p3 > 0){
                p1--;
                p3--;
                sum1++;
            }
            while(p2 > 0 && p3 > 0){
                p2--;
                p3--;
                sum1++;
            }
            cout << sum1 << endl;
        }
    }
    return 0;
}
