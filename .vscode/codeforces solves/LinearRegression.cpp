#include<bits/stdc++.h>
using namespace std;


double linear(vector<double> &x, vector<double> &y,double &a,double &b){
int n=x.size();
double sumx=0;
 double sumx2=0;
 double sumy=0;
  double sumxy=0;

  for(int i=0;i<n;i++){
    sumx=sumx+x[i];
    sumx2=sumx2+x[i]*x[i];
    sumy=sumy+y[i];
    sumxy=sumxy+x[i]*y[i];
  }
b=(n*sumxy - sumx*sumy)/(n*sumx2-sumx*sumx);
a=(sumy-b*sumx)/n;

cout<<a<<endl;
cout<<b<<endl;
}

int main(){
double n,a,b;
    cout<<"Enter data number: ";
    cin >> n;

    vector<double> x(n), y(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
   linear(x,y,a,b);

}
/*
140 60
155 62
212 75
179 70
192 71
200 72

*/
