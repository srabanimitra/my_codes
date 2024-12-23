#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }

    int coins=0;
    int redCount=0;

    for(int i=0;i<n;i++) {
        if(v[i]==0)
         {
            coins++;
            //redCount++;
        } else if(v[i]==1||v[i]==2)
        {
           // redCount--;
           coins--;
            if(i+1<n && v[i+1]==0) {
                coins++;
                v[i+1]=1;
            }
        }
    }

    cout<<coins<<"\n";

    return 0;
}
