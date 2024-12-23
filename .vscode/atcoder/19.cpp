
#include<bits/stdc++.h>
using namespace std;
int swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return (a,b);
}
int main(){
  int a=5,b=7;
  cout<<a<<" " << b <<endl;
  swap(a,b);

  cout<<a<<" "<<b<<endl;

}

  //another code
  void fun(string &s)
  {
      s="";
  }
  int main()
  {
     string s="lets have fun";
      cout<<s<<endl;
      fun(s);
      cout<<s<<endl;
  }

