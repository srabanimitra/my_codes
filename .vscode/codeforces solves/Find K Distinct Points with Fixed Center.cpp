/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
         ll x,y,k;
        cin >> x>>y>>k ;

      for(int i=0;i<k-1;i++){
        cout<<x-i <<" "<<y-i<<endl;
      }
cout<<x+(k-1) <<" "<<y+(k-1)<<endl;
    }
    return 0;
}


*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;

        vector<pair<int, int>> points;
        // Generate k points
        for (int i = 0; i < k - 1; i++) {
            points.push_back({xc - i, yc - i});
        }
        points.push_back({xc + (k - 1), yc + (k - 1)});

        // Output the points
        for (auto& point : points) {
            cout << point.first << " " << point.second << endl;
        }
    }
    return 0;
}
