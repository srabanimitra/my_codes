#include<bits/stdc++.h>
using namespace std ;

double hons(auto v,double x){
	double p=v[0];
	for(int i=1 ; i<(int)v.size() ; i++){
		p = p*x  + v[i] ; 
	}
	return p ; 
}

double derivative(auto v,double x){
	double result=0;
	int n=v.size();
	for(int i=0;i<(int)v.size();i++){
		result += v[i]*(n-1-i)*pow(x,(n-2-i));
	}
	return result;
}

vector<double> deflation(auto v,double root){
	int n = v.size();
	vector<double> a(n-1) ;
	a[0]=v[0];
	for(int i=1;i<(int)n-1;i++){
		a[i]=v[i]+a[i-1]*root;
	}
	
	return a ; 
	
}

int main(){
	vector<double>v={1, -6, 11, -6};
	double tolarence = .001;
	double x = 1 ; 
	int rn=0;
	int it=0;
	int n=v.size();
	
	while(n>1){
		double e ; 
		do{
			it++;
			double f1=hons(v,x);
			double f2=derivative(v,x);
			double x1= x-(f1/f2);
			e = fabs(x1-x);
			x=x1;
		}
		while(e>tolarence);
		rn++;
		
		cout<<"Iteration:"<<it<<" Root-"<<rn<<":" << x<<endl;
		
		v = deflation(v,x);
		n = v.size()-1;
	}
	
	cout<<"Iteration:"<<it<<" Final Root-"<<rn+1<<":" << -v[1]/v[0]<<endl;
}