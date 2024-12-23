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
bool binarySearch(const vector<int>& arr, int t) {
    return binary_search(arr.begin(), arr.end(), target);
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
	}
	    int t;
    cout << "Enter a value to search in the vector: ";
    cin >> t;

    // Step 4: Perform binary search
    bool found = binarySearch(v, t);

    if (found) {
        cout << t << " found in the vector" << endl;
    } else {
        cout << t << " not found in the vector" << endl;
    }



	return 0;

}
