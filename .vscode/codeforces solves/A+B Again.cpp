
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a1,a2,b1,b2;

        cin>>a1>>a2>>b1>>b2;
        int sum=0;
        int x[2]={a1,a2};
        int x1[2]={b1,b2};

        for(int i=0;i<2;i++){
           for(int j=0;j<2;j++){
            int s=0,l=0;
            if(x[i]>x1[j])s++;

            else if(x[i]<x1[j])l++;
            if(x[1-i]>x1[1-j])s++;
           else  if(x[1-i]<x1[1-j])l++;
           if(s>l)sum++;
        }
        }


        cout<<sum<<endl;
}
}

