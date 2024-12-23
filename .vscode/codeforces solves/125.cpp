#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
   int j=1;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
         sort(b,b+n);
for(int i=0;i<n;i++){
    if(a[i]==b[i]){
        count++;
    }
}
cout<< "Case "<<j<<": ";
cout<<n-count<<endl;
j++;
        }

}

