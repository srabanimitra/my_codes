#include<bits/stdc++.h>
using namespace std;

int x[10];                                                                                              //position
int w[10];
int m;
int sum = 0;
int sol;
bool Found_Solution;

void Sum_Of_Subsets(int s,int k,int r)                                                // s= current sum , k=active element number , r=remaining sum
{
    x[k] = 1;                                                                                                         //first element taken

    if(s+w[k]==m)                                                                                           //  sum+ current element == m
    {
        Found_Solution = true;
        for(int i=1; i<=k; i++)
        {
            if(x[i]==1)
            {
                cout<<w[i]<<"  ";
            }

        }
        ++sol;
        cout<<endl;

    }

    else if(s+w[k]+w[k+1]<=m)                                                                                   // next element \  forward tracking
    {
        Sum_Of_Subsets(s+w[k],k+1,r-w[k]);                                                      // sum =s+w[k]   , active element=k+1          remain sum=r-w[k]
    }


    if((s+r-w[k]>=m)&&(s+w[k+1]<=m))
    {
        x[k] = 0;                                                                                           //backtracking
        Sum_Of_Subsets(s,k+1,r-w[k]);
    }

}

int main()
{
    int n;
    cout<<"Enter Number of  set elements  : "<<endl;
    cin>>n;
    cout<<"Enter the Sum  "<<endl;
    cin>>m;
    cout<<"Enter the Element "<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>w[i];
        sum = sum + w[i];
    }

    Sum_Of_Subsets(0,1,sum);             //  at initial s=0  k=1 r=all element  sum

    if (Found_Solution == false)
    {
        printf("There is not proper solution\n");
    }


    else
    {
        printf("Possible solution is %d",sol);
    }

    return 0;
}
