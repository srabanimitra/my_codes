#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
    int n,a1=0,a2=0,a3=0,a4=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];}
        for(int i=0; i<n; i++)
    {
 if(a[i]==1){
            a1++;
        }
         if(a[i]==2){
            a2++;
        }
         if(a[i]==3){
            a3++;
        }
        if(a[i]==4){
            a4++;
        }
}

    while(a3!=0){
        if(a3!=0 && a1!=0){
            a4++;
            a3--;
            a1--;
        }
        else{
                a4++;
            a3--;
        }
    }
    if(a2%2==0){
        a4=a4+(a2/2);
    }
    else
        {
          a4=a4+(a2/2);
    a2=a2%2;
            if(a1==0 && a2!=0){
            a4++;
            a2--;

        }

       if(a1>=2){
            a4++;

            a1=a1-2;
            a2--;
        }
        else{
                if(a1==1){
            a4++;
            a2--;
            a1--;
                }

        }

        }


     while(a1!=0)
        {
           if(a1>=4)
           {
            a4++;
            a1=a1-4;
           }
           else if(a1>=3)
           {
            a4++;
            a1=a1-3;
           }else if(a1>=2)
           {
            a4++;
            a1=a1-2;
           }
           else if(a1>=1)
           {
            a4++;
            a1=a1-1;
           }

}
cout<<a4<<endl;

}

