#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int k; // Total number of integers in the input
        cin >> k;

        vector<int> a(k);
        unordered_set<int> elements;

        // Read all k integers and store them in a set
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
            elements.insert(a[i]);
        }

        // Find a valid pair (n, m)
        for (int n = 1; n * n <= k; ++n) {
            if (k % n == 0) { // Check if n divides k
                int m = k / n; // The other dimension
                if (elements.count(n) && elements.count(m)) { // Both n and m must exist in the input
                    cout << n << " " << m << endl;
                    break;
                }
            }
        }
    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
        int n,sum=0;
    cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
//cout<<a[i]<<a[i+1]<<endl;
//cout<<i<<i+1<<endl;
  if(a[i]==a[i+1]){
    sum=sum+1;
    i=i+1;
  }

}


 cout<<sum<<endl;

}
}
*/
