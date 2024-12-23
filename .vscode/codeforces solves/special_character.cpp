/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
if(n==1 || n==0)
    cout<<"NO"<<endl;
   else
   {
     cout<<"YES"<<endl;
     for(int i=1;i<=n;i++){
        cout<<"A";
     }
     cout<<endl;
   }
	}
}

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

     if(n<2 || n%2==1)
        cout<<"NO"<<endl;
     else{
        cout<<"YES"<<endl;
        int i=0;
        while(n!=0){
            if(i%2==0){
               cout<<"AA";
               i=1;
            }
            else{
               cout<<"BB";
               i=0;
            }
            n=n-2;
        }
        cout<<endl;
     }

}
}
