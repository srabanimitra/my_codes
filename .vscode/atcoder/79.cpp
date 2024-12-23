#include<bits/stdc++.h>
using namespace std;
vector<int>a;
void mergee(int low,int mid,int high)
{

    int m=mid-low+1;
    int n=high-mid;
vector<int>l;
vector<int>r;

    for(int i=0;i<m;i++){

        l.push_back(a[low+i]);

    }
     for(int j=0;j<n;j++){

      r.push_back(a[mid+j+1]);

    }

    l.push_back(99999);
    r.push_back(99999);
    int i=0,j=0;
    for(int k=low; k<=high; k++)
    {
        if(l[i]<=r[j])
        {
          a[k]=l[i];
            i=i+1;
        }
        else
        {
            a[k]=r[j];
            j=j+1;
        }
    }
}
void mergesort(int low,int high){
if(low<high)
{
   int mid=(low+high)/2;
    mergesort(low,mid);
    mergesort(mid+1,high);
    mergee(low,mid,high);
}

}
int main()
{
    int p;



    for(int i=0; i<8; i++)
    {
        cin>>p;
        a.push_back(p);
    }
    mergesort(0,7);
    for(int k=0; k<8; k++)
    {
        cout<<a[k]<<" ";
    }
}
