#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t=2;
        char f='#';
         char f1='.';
         if(i%2==1){
            f='.';
            f1='#';
         }
         while(t--){
            for(int j=0;j<n;j++){
                int p=2;
                while(p--){
                    if(j%2==0){
                        cout<<f;

                    }
                    else{
                        cout<<f1;
                    }
                }

            }
            cout<<endl;
         }
      //   cout<<endl;
    }
}
int main(){
int t;
cin>>t;
while(t--){
 solve();
}

}


