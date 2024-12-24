
#include<bits/stdc++.h>
using namespace std;

int main() {

    int N = 0;
    cin>>N;
    long data[N];
    for(int i=0; i<N; i++){
        cin>>data[i];
    }
    for(int i=0; i<N; i++)
    {
    cout << data[i]%10;
    }


    if(data[N-1]%10==0)
    cout<<"yes";
    else
        cout<<"no";
    return 0;
}
