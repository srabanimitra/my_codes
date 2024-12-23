#include<bits/stdc++.h>
using namespace std;


void print(map<int, string > &m)
{
    cout<<m.size()<<endl;
    for(auto &pr: m)
    {
        cout<<pr.first <<" " <<pr.second <<endl;
    }
}
int main()
{
    map<int, string > m;
    m[1]="abc";//o(log(n))
    m[5]="dsc";
    m[3]="msc";
    m[5]="efg";
    m[6]="d";
    m.insert({4,"afg"});
    auto it = m.find(7);//o(log(n))
    if(it != m.end()){
           m.erase(it);

    }
    m.erase(4);//o(log(n))
    m.clear();
    if(it == m.end())
    {
        cout<<"No Value"<<endl;
    }
    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    print(m);
//map<int,string> :: iterator it;
//for(it=m.begin(); it != m.end(); it++){
    //cout<<(*it ).first <<" "<<(*it).second<<endl;
// }

}
