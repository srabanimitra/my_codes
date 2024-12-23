#include<bits/stdc++.h>
using namespace std;
vector<int>v[14];
int main(){

    int n,e;
    cin>>n >>e;
    for(int i=0;i<e;i++){
       int n1,n2;
        cin>>n1 >>n2;
        v[n1].push_back(n2);
         v[n2].push_back(n1);

    }
    for(int i=1;i<=n;i++){
       cout<<i<<"->";
         for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
         }
         cout<<endl;

    }
    return 0;
}
/*
10 13
1 2
1 4
1 3
2 6
6
10
3 7
4 7
3 8
7 8
7 9
9 10
8 5
10 5*/
