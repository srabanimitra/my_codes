
#include<bits/stdc++.h>
using namespace std;

struct student
{
    int id;
    string name;
    double cgpa;
}stu;

vector<student> A;

void NameSort(int n){
    for(int i=0; i<n;i++)
    {
        int j=i+1;
        while((j<n) && (A[i].cgpa==A[j].cgpa)){
            if(A[i].name>A[j].name)
                swap(A[i],A[j]);
            j++;
        }
    }
}

int Partition(int low, int hi)
{
    double pivot=A[low].cgpa;
    int i=low;
    int j=hi;
    while(i<j)
    {
        while(A[i].cgpa<=pivot){
            i++;
            if(i>=hi)break;
        }
        while(A[j].cgpa>pivot){
            j--;
            if(j<=low)break;
        }
        if(i<j)
            swap(A[i],A[j]);
    }
    swap(A[low],A[j]);
    return j;
}

void QuickSort(int low,int hi){
    if(low<hi){
        int pos=Partition(low,hi);
        QuickSort(low,pos-1);
        QuickSort(pos+1,hi);
    }
}

int main()
{
    int size;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        cin>>stu.id>>stu.name>>stu.cgpa;
        A.push_back(stu);
    }
    QuickSort(0,size-1);
    NameSort(size);
    cout<<"After Sorting***************"<<endl;
    for(int i=0; i<size; i++)
        cout<<A[i].id<<" "<<A[i].name<<" "<<A[i].cgpa<<endl;
    return 0;
}



