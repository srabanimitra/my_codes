#include<bits/stdc++.h>
using namespace std;

void bubble(int a[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
search(int a[], int n, int key){
int low=0;
int high=n-1;
while(low<=high){
    int mid=(low+high)/2;
    if(a[mid]<key)
        low=mid+1;
        else if(a[mid]>key)
        high=mid-1;
        else
            return mid;

}
return -1;
}
int main() {
    int a[6];
    for(int i = 0; i < 6; i++) {
        cin >> a[i];
    }

    bubble(a, 6);

    for(int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
//search(a,6,5);
int result=search(a,6,5);
if(result!=-1)
    cout<<"found";
else
    cout<<"not found";
    return 0;
}
