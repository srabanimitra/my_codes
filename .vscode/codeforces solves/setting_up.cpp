#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    if((b+c)%3!=0 && c<((b+c)%3)) cout<<-1<<"\n";
    else{
        cout<<(int)(a+ceil((float)(b+c)/3))<<"\n";
    }
    }
}
