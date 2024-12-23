#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int main()
{
    int n;
    cin>>n;
    int f=0;
    string a,b,s;
    for(int i=0; i<n; i++)
    {
        cin>>a >>b;
if(i==0){
     s=a;

}

        if(b=="goal")
        {
            f++;
            if(f>1)
            {
                s=a;
            }
        }

    }
    cout << s << endl;

    return 0;
}
