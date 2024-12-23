#include <bits/stdc++.h>
using namespace std;
int minimum(vector<int>&v,int k,int n){
	int min=k;
	  for(int j=k;j<n;j++){
		if(v[min]>v[j]){
			min=j;
		}
	}
	return min;
}
void selection(vector<int>&v,int n){
	for(int i=0;i<n-1;i++){
		int minindex=minimum(v,i,n);
	if(minindex!=i){
		swap(v[i],v[minindex]);
       }
	}
}

int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	selection(v,n);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<"\n";
	}return 0;

}
