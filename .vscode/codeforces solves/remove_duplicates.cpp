#include <bits/stdc++.h>
using namespace std;
int main() {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      for(int i=0;i<n-1;i++){
          for(int j=i+1;j<n;j++){
              if(a[i]==a[j]){

                  a[i]=-1000;
              }
          }
      }
      vector<int>vec;
      for(int i=0;i<n;i++){
          if(a[i]!=-1000){

              vec.push_back(a[i]);
          }
      }
      cout<<vec.size()<<endl;
      for(int i=0;i<vec.size();i++){
          cout<<vec[i]<<" ";
      }
}
