#include<bits/stdc++.h>
using namespace std ;

int n=4;
vector<double>v = {1, -6, 11, -6};

double hons(double x){
	double p=v[0];
	for(int i=1;i<(int)v.size();i++){
		p = p*x+v[i];
	}
	return p;
}

int main(){
	
	double tolarence = .001;
	double maxv = sqrt(pow((v[1]/v[0]),2) - 2*(v[2]/v[0]));
	double  b =  maxv ;
	double d=.1;
	int itr=0;
		int rn=0;
	
	for(double a=-maxv ; a<=maxv ; a+=.005){
	
		double e ; 
		double x2,x1; 
		
		while(x2<b){
			x1=a;
			x2=x1+d;
			double f1=hons(x1);
			double f2=hons(x2);
			double xr;
			if(f1*f2<0){
				do{
					 xr= (x1+x2)/2;
					double fr = hons(xr);
					if(fr*f1>0){
						x1=xr ; 
					}
					else{
						x2=xr;
					}
					e=fabs((x2-x1)/x2);
				}
				
				while(e>=tolarence);
				rn++;
				cout << rn << " " << xr << " "<< itr << " " << e <<endl;
				if(x2>b){
					break;
				}
			}
			itr++;
			a=x2;
		}
		
		
	}
	
	
}