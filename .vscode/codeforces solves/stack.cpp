/*#include<bits/stdc++.h>
using namespace std;
queue<int>q,q1;
int main(){
for(int i=0;i<5;i++){
    int x;
    cin>>x;
    q.push(x);
    while(!q1.empty()){
        q.push(q1.front());
        q1.pop();

    }
    swap(q,q1);
}
for(int i=0;i<5;i++){
    cout<<q1.front()<<" ";
    q1.pop();
}
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
stack<int>st;
for(int i=0;i<5;i++){
int x;
cin>>x;
st.push(x);
}
while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();

}

}
