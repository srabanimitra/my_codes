#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int t;
    cin>>t;
    while(t--){
    ll n;
        cin>>n;
        string s;
        cin>>s;
       ll count=0,sum=0;
       s[0]='(';
 for(int i=1;i<n;i++){
             if(s[i]=='('){
                    sum -=i;
                    count--;
                }
            else  if(s[i]==')'){
                    sum+=i;
                    count++;
                }
                else if(count<0){
                        s[i]==')';
                    sum+=i;
                    count++;
                }
                else {
                    s[i]=='(';
                    sum -=i;
                    count--;
                }


    }
     cout<<sum<<"\n";
}

}
