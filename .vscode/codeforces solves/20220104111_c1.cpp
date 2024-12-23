#include<bits/stdc++.h>
 using namespace std;
 const int N= 1e5;
 int  pre[6][6]=
 {
     {N,N,N,N,N,N},
     {N,0,1,1,0,1},
     {N,0,0,0,2,2},
     {N,0,3,0,0,0},
     {N,4,1,4,0,0},
       {N,0,0,0,5,0},
 };
int  dis[6][6]=
 {
     {N,N,N,N,N,N},
     {0,0,3,8,N,-4},
     {0,N,0,N,1,7},
     {0,N,4,0,N,N},
     {0,2,5,-5,0,-2},
       {0,N,N,N,6,0},
 };
int  dis2[6][6]=
 {
     {N,N,N,N,N,N},
     {0,0,3,8,N,-4},
     {0,N,0,N,1,7},
     {0,N,4,0,N,N},
     {0,2,5,-5,0,-2},
       {0,N,N,N,6,0},
 };

 void flo(){

 for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=5; j++)
            {
               // if(dist[i][k] != INF && dist[k][j] != INF)
                dis2[i][j]=min(dis2[i][j],dis2[i][2]+dis2[2][j]);
            }
        }
 }


 int main(){
 flo();
 cout<<"cost matrix"<<endl;
   for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(dis2[i][j]>=N){
                cout<<"INF"<<" \t";
            }
                else{
                    cout<<dis2[i][j]<<"\t ";
            }
        }
cout<<endl;
    }

    cout<<"pre matrix"<<endl;
   for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(dis2[i][j]!=dis[i][j]){
               pre[i][j]=pre[2][j];
            }
        }

    }



        for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=5; j++)
            {
                if(dis2[i][j]==-1)
               cout<<"NIL";
               else
                cout<<pre[i][j]<<"\t";
            }
             cout<<endl;
        }

    }





