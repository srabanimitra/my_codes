
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n,x,sum=0,max1=-101,min1=101;
        cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    max1=max(max1,a[i]);
    min1=min(min1,a[i]);
}
//int max1=max(a,a+n);
//int min1=min(a,a+n);
//cout<<max1<<min1<<endl;
// int &max  = *max_element(a,a+n);
  // int &min  = *min_element(a,a+n);
   //int maxin = 0,minin =0 , sum=0 ;
int max2=0,min2=0;

        for(int i=0;i<n;i++){
            if(max1==a[i]){
                max2=i;
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(min1==a[i]){
                min2=i;
            }
        }

        sum = max2-1+n-min2;

            if(max2>min2){
                sum--;
            }
            cout<<sum<<"\n";
        }



