#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
    int t,flag=0,sum=0,one=0;
    cin >> t;
        int n;
        cin >> n;

    int a[t][n];
        for (int i = 0; i < t; i++) {
                  for (int j = 0; j < n; j++){
                     cin >> a[i][j];
                  }


        }
for (int i = 0; i < t; i++) {
                  for (int j = 0; j < n; j++){

                        flag=0;
                  if(a[0][0]==2){
                     if(a[i][j+1]==1){
                            a[i][j+1] += 1;
                             flag=1;
                        }

                    if(a[i+1][j]==1){
                            a[i+1][j] += 1;
                             flag=1;
                        }
                  }
                  else{
                    if(a[i][j]==2){
                        if( a[i][j-1]==1){
                            a[i][j-1] += 1;
                            flag=1;
                        }
                        if(a[i][j+1]==1){
                            a[i][j+1] += 1;
                             flag=1;
                        }
                         if(a[i+1][j]==1){
                            a[i+1][j] += 1;
                             flag=1;
                        }
                         if(a[i-1][j]==1){
                            a[i-1][j] += 1;
                             flag=1;
                        }
                    }

                  }
                   if(flag==1)
                        sum+=1;
                  }


        }

 for (int i = 0; i < t; i++) {
                  for (int j = 0; j < n; j++){
                        cout<<a[i][j]<<" ";
                    if(a[i][j]==1)
                        one++;
                  }
                  cout<<endl;
        }
        if(one == 0)
            cout<<sum << endl;
      //  cout<<"-1" << endl;
        else
                   // cout<<sum << endl;
                    cout<<"-1" << endl;

    }


