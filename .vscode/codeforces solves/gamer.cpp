#include <iostream>
#include <string>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;
while(t--){
  ll n,k,x;;
    cin>>n >>k >> x;
ll sum=(n*(n+1))/2;
       ll sum1=(k*(k+1))/2;
       ll p=(n-k);
       ll sum2=sum-((p*(p+1))/2);
       if((x<=sum2)&&(x>=sum1))
        cout << "YES" << endl;
       else
                cout << "NO" << endl;

}


}

