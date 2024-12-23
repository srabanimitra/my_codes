#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>st;
stack<int>st1;
for(int i=0;i<4;i++){
        int n;
        cin>>n;
    st.push(n);

}
for(int i=0;i<4;i++){
        int y=st.top();
    st1.push(y);
st.pop();

}
for(int i=0;i<4;i++){
    cout<<st1.top()<<endl;
    st1.pop();

}


}
