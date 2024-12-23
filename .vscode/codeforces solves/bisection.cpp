#include<bits/stdc++.h>
using namespace std;
double func(float x){
return ((x*x*x*x)-x*x-1);
}
int main(){
float a=2,b=7,x0;
float root;
float f1,f0,f2;
f1=func(a);
f2=func(b);
if(f1*f2>0){
    cout<<"wrong guess"<<endl;
    return 0;
}
do{
    root=(a+b)/2;
    f0=func(root);
   cout <<"f[a]="<<f1<<" "<<"f[b]="<<f2<<endl;
    if(f1*f0<0){
        b=root;
       f2=f0;//root->x0
    }
    else{
        a=root;
        f1=f0;
    }
    cout<<"The root is="<<root<<" "<<"  "<<"f(root)="<<f0<<endl;
}while(fabs(func(root))>0.001);
cout<<root<<endl;
}
