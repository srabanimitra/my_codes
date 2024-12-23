//bfs chara normal
#include<bits/stdc++.h>
using namespace std;
vector<int>v[11];
// jto gulo node toto gulo vector
int main()
{
   int n,e;
   cin>>n>>e;
   for(int i=0; i<e; i++)
   {
       int nodeA,nodeB;
       cin>>nodeA>>nodeB;
       v[nodeA].push_back(nodeB);
       v[nodeB].push_back(nodeA);

   }
   for(int i=1; i<=n; i++)
   {
       cout<<i<<"-> ";
       for(int j=0; j<v[i].size(); j++)
       {
           cout<<v[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}

//level print
#include<bits/stdc++.h>
using namespace std;
vector<int>v[11];
int level[11];
// jto gulo node toto gulo vector
void BFS(int source)
{
   level[source]=0;
   queue<int>q;
   q.push(source);//source ke push kora q
   while(!q.empty())
   {
       int u=q.front();
       q.pop();

       for(int j=0; j<v[u].size(); j++) // 1 er adjacent->2,4,3
       {
           int x=v[u][j];//j hocche node
           if(level[x]==-1)
           {
               level[x]=level[u]+1;
               q.push(x);
           }
       }
   }
}
int main()
{
   int n,e;
   cin>>n>>e;
   for(int i=0; i<e; i++)
   {
       int nodeA,nodeB;
       cin>>nodeA>>nodeB;
       v[nodeA].push_back(nodeB);
       v[nodeB].push_back(nodeA);

   }
   for(int i=1; i<=n; i++) //jtoo loop likhbo niche sob 1 theke shuru
   {

       level[i]=-1;
   }
   BFS(1);
   for(int i=1; i<=n; i++)
   {
       cout<<i<<"="<<level[i]<<endl;
   }
   return 0;
}



//shortest path from source to distance print or parent finding

#include<bits/stdc++.h>
using namespace std;
vector<int>v[11];
int level[11];
int parent[11];
//// jto gulo node toto gulo vector
void BFS(int source)
{
 level[source]=0;
 queue<int>q;
   q.push(source);//source ke push kora q
   while(!q.empty())
   {
     int u;
     u=q.front();
     q.pop();

       for(int j=0; j<v[u].size(); j++) // 1 er adjacent->2,4,3
       {
          int x=v[u][j];//j hocche node
          if(level[x]==-1)
          {
              parent[x]=u;
              level[x]=level[u]+1;
              q.push(x);
          }
      }
  }
}
//shortest path
void PATH(int node){
if(node!=parent[node]){//des==parent[des]
 PATH(parent[node]);
}
cout<<node<<endl;
}
int main()
{
   int n,e;
   cin>>n>>e;
   for(int i=0; i<e; i++)
   {
     int nodeA,nodeB;
     cin>>nodeA>>nodeB;
     v[nodeA].push_back(nodeB);
     v[nodeB].push_back(nodeA);

 }
   for(int i=1; i<=n; i++) //jtoo loop likhbo niche sob 1 theke shuru
   {

      level[i]=-1;
      parent[i]=i;
  }
  BFS(1);
  for(int i=1; i<=n; i++)
  {
      cout<<i<<"="<<level[i]<<endl;
  }
  PATH(10);//n=10 tai

  return 0;
}
