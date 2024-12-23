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
         int n,count=0;
        cin >> n ;
        string s,s1;
        cin>>s >>s1;
        for(int i=0;i<2;i++){
          for(int j=1;j<n-1;j++){
                if(i==0){
                    if(s[j]=='.' && s[j-1]=='.'&& s[j+1]=='.' && s1[j]=='.'&&s1[j+1]=='x' &&s1[j-1]=='x')
                        count++;
                }
                else{
                     if(s1[j]=='.' && s1[j-1]=='.'&& s1[j+1]=='.' && s[j]=='.'&&s[j+1]=='x' &&s[j-1]=='x')
                        count++;
                }

        }
        }

          cout<<count<<endl;
        }




    }

