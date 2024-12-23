
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    std::cin >> n;
   int first = 0, second = 1, next, sum = 0;
vector<string>s;
    for (int i = 0; i < n; ++i) {
         //sum=sum+first;
         //s.push_back(next);
         cout<<first<<endl;
        int next = first + second;
        first = second;
        second = next;
    }
   //  cout<<sum<<endl;

    return 0;
}

