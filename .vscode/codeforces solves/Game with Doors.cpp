#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int CHECK(int l, int r, int L, int R) {
    int sum=min(r,R)-max(l,L);
    vector<bool>v(4,false);

    if(l<L) v[1]=true;
    if(r>R) v[2]=true;
    if(l>L) v[3]=true;
    if(R>r) v[4]=true;
   int ans=0;
   for(int i=1;i <=4;i++){
    ans += v[i];
   }
   if(sum<0)
    ans=0;
    return max(1, ans+max(0,min(r,R)-max(l,L)));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int l, r, L, R;
        cin >> l >> r >> L >> R;


        int result = CHECK(l, r, L, R);
        cout << result << "\n";
    }

}

