////////////////////////////////////////////////////////////////////////Binary Search///////////////
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// int main()
// {
// FAST;
// int n=8,flg=1,target;
// cin>>target;
// int arr[n]={3,4,6,7,9,12,16,17};
// int low=0,mid;
// int high=n-1;
// while(low<=high){
//     mid=(low+high)/2;
//     if(arr[mid]==target)
//     {
//         cout<<mid+1<<endl;
//         flg=0;
//         break;
//     }
//     else if(arr[mid]<target)
//         low=mid+1;
//     else
//         high=mid-1;
// }
// if(flg)
//     cout<<"NOT PRESENT"<<endl;
// return 0;
// }
///////////////////////////////////////////////////////Selection Sort//////////////////////////////
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// int main()
// {
// FAST;
// int n=10;
// int arr[n]={5,1,3,4,2,10,9,7,6,8};
// for(int i=0;i<n-1;i++){
//     int min=i;
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[min])
//             min=j;
//     }
//     if(min!=i)
//         swap(arr[min],arr[i]);
// }
// for(auto i:arr)
//     cout<<i<<" ";
// return 0;
// }
//////////////////////////////////////////Merge Sort///////////////////////////
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>A;
// void Merge(int low,int mid,int hi){
//     int m=mid-low+1;
//     int n=hi-mid;
//     vector<int>v,v1;
//     for(int i=0;i<m;i++)
//         v.push_back(A[low+i]);
//     for(int i=0;i<n;i++)
//         v1.push_back(A[mid+1+i]);
//     v.push_back(INT_MAX);
//     v1.push_back(INT_MAX);
//     int i=0,j=0;
//     for(int k=low;k<=hi;k++){
//         if(v[i]<=v1[j]){
//             A[k]=v[i];
//             i++;
//         }
//         else{
//             A[k]=v1[j];
//             j++;
//         }
//     }
// }
// void MergeSort(int low,int hi){
//     if(low<hi){
//         int mid=(low+hi)/2;
//         MergeSort(low,mid);
//         MergeSort(mid+1,hi);
//         Merge(low,mid,hi);
//     }
// }
// int main(){
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         A.push_back(x);
//     }
//     MergeSort(0,4);
//     for(auto i:A)
//         cout<<i<<" ";
// return 0;
// }
/////////////////////////////////////////Selection Sort////////////////////
// #include<bits/stdc++.h>
// using namespace std;
// void SelectionSort(vector<int>v,int n){
//     int min,pos;
//     for(int i=0;i<n-1;i++){
//         min=v[i];
//         pos=i;
//         for(int j=i+1;j<n;j++){
//             if(v[j]<min){
//                 min=v[j];
//                 pos=j;
//             }
//         }
//         swap(v[i],v[pos]);
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main()
// {
//     vector<int>v;
//     for(int i=0;i<8;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     SelectionSort(v,v.size());
// return 0;
// }
////////////////////////////////QuickSort//////////////////////
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// vector<int>v;
// int part(int low,int hi){
//     int p=v[low];
//     int i=low,j=hi;
//     while(i<j){
//         while(v[i]<=p)
//             i++;
//         while(v[j]>p)
//             j--;
//         if(i<j)
//             swap(v[i],v[j]);
//     }
//     swap(v[low],v[j]);
//     return j;
// }
// void QuickSort(int low,int hi){
//     if(low<hi){
//         int p=part(low,hi);
//         QuickSort(low,p-1);
//         QuickSort(p+1,hi);
//     }
// }
// int main()
// {
//     for(int i=0;i<8;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     QuickSort(0,7);
//     for(auto i:v)
//         cout<<i<<" ";
// return 0;
// }
//////////////////////////////////Circular linked list
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// struct node
// {
//     int data;
//     node *next;
// };

// node *last=NULL;

// int cnt=0;
// void insert_first(int val){
//     node *temp;
//     temp=new node();
//     temp->data=val;
//     temp->next=NULL;
//     if(last==NULL){
//         last=temp;
//         last->next=last;
//     }
//     else{
//         temp->next=last->next;
//         last->next=temp;
//     }
// }
// void insert_last(int val){
//     node *temp;
//     temp=new node();
//     temp->data=val;
//     temp->next=NULL;
//     if(last==NULL){
//         last=temp;
//         last->next=last;
//     }
//     else{
//         temp->next=last->next;
//         last->next=temp;
//         last=temp;
//     }
// }

// void insert_anywhere(int pos,int val){
//     node *temp;
//     temp=new node();
//     temp->data=val;
//     temp->next=NULL;
//     if(pos==1)
//         insert_first(500);
//     else{
//         node *curr_node=last->next;
//         node *curr_node1=last->next;
//         node *curr_node2=last->next;
//         while(pos--){
//             curr_node2=curr_node1;
//             curr_node1=curr_node;
//             curr_node=curr_node->next;
//         }
//         curr_node2->next=temp;;
//         temp->next=curr_node1;
//         curr_node1->next=curr_node;

//     }
// }

// void print(){
//     node *curr_node=last->next;
//     do{
//         cout<<curr_node->data<<" ";
//         curr_node=curr_node->next;
//     }while(curr_node!=last->next);
//     cout<<endl;
// }

// void Search(int val){
//     node *curr_node=last->next;
//     do{
//         if(curr_node->data==val){
//             cout<<"Found"<<endl;
//             return;
//         }
//         curr_node=curr_node->next;
//     }while(curr_node!=last->next);
//     cout<<"Not Found"<<endl;
// }

// void delete_first(){
//     last->next=last->next->next;
// }

// void delete_last(){
//     node *curr_node=last->next;
//     node *curr_node1=last->next;
//     node *curr_node2=last->next;
//     do{
//         curr_node2=curr_node1;
//         curr_node1=curr_node;
//         curr_node=curr_node->next;
//     }while(curr_node!=last->next);
//     curr_node2->next=curr_node;
//     last=curr_node2;
//     curr_node1->next=NULL;
// }

// void del_anywhere(int pos){
//         node *curr_node=last->next;
//         node *curr_node1=last->next;
//         node *curr_node2=last->next;
//         while(pos--){
//             curr_node2=curr_node1;
//             curr_node1=curr_node;
//             curr_node=curr_node->next;
//         }
//         curr_node2->next=curr_node;
//         curr_node1->next=NULL;
// }
// int main()
// {
//     insert_first(40);
//     insert_first(30);
//     insert_first(20);
//     insert_first(10);

//     insert_last(50);
//     insert_last(60);
//     insert_last(70);

//     insert_anywhere(4,1000);


//     print();
//     Search(50);
//     cout<<"------------------------------------------------"<<endl;
//     delete_first();
//     delete_last();
//     del_anywhere(3);
//     print();

// return 0;
// }
///////////////////////////////////////Singly Linked List
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// struct node{
//     int val;
//     node *next;
// };
// node *root;

// void insert_last(int k){
//     node *temp;
//     temp =new node();
//     temp->val=k;
//     temp->next=NULL;
//     if(root==NULL)
//         root=temp;
//     else{
//         node *curr_node=root;
//         node *curr_node1=root;
//         while(curr_node!=NULL){
//             curr_node1=curr_node;
//             curr_node=curr_node->next;
//         }
//         curr_node1->next=temp;
//     }
// }

// void print(){
//     node *curr_node=root;
//     while(curr_node!=NULL){
//         cout<<curr_node->val<<" ";
//         curr_node=curr_node->next;
//     }
// }

// void insert_first(int val){
//     node *temp;
//     temp=new node();
//     temp->val=val;
//     temp->next=NULL;
//     if(root==NULL)
//         root=temp;
//     else{
//         temp->next=root;
//         root=temp;
//     }
// }

// void Search(int k){
//     node *curr_node=root;
//     while(curr_node!=NULL){
//         if(curr_node->val==k){
//             cout<<"FOUND"<<endl;
//             return;
//         }
//         curr_node=curr_node->next;
//     }
//     cout<<"NOT FOUND"<<endl;
// }

// void last_node(){
//     node *curr_node=root;
//     node *curr_node1=root;
//     while(curr_node!=NULL){
//         curr_node1=curr_node;
//         curr_node=curr_node->next;
//     }
//     cout<<curr_node1->val<<endl;
// }

// void size(){
//     int cnt=0;
//     node *curr_node=root;
//     while(curr_node!=NULL){
//         cnt++;
//         curr_node=curr_node->next;
//     }
//     cout<<cnt<<endl;
// }

// void insert_anywhere(int pos,int k){
//     node *temp;
//     temp=new node();
//     temp->val=k;
//     temp->next=NULL;
//     if(root==NULL)
//         root=temp;
//     else{
//         node *curr_node=root;
//         node *curr_node1=root;
//         while(--pos){
//             curr_node1=curr_node;
//             curr_node=curr_node->next;
//         }
//         curr_node1->next=temp;
//         temp->next=curr_node;
//     }
// }

// void del_first(){
//     root=root->next;
// }

// void del_last(){
//     node *curr_node=root;
//     node *curr_node1=root;
//     node *curr_node2=root;
//     while(curr_node!=NULL){
//         curr_node2=curr_node1;
//         curr_node1=curr_node;
//         curr_node=curr_node->next;
//     }
//     curr_node2->next=NULL;
// }

// void del_anywhere(int pos){
//     node *curr_node=root;
//     node *curr_node1=root;
//     node *curr_node2=root;
//     while(pos--){
//         curr_node2=curr_node1;
//         curr_node1=curr_node;
//         curr_node=curr_node->next;
//     }
//     curr_node2->next=curr_node;
// }


// int main()
// {
//     int x;
//     cin>>x;
//     for(int i=0;i<x;i++){
//         int m;
//         cin>>m;
//         insert_last(m);
//     }
//     print();
//     cout<<endl;
//     insert_first(50);
//     print();
//     cout<<endl;
//     Search(50);
//     last_node();
//     size();
//     insert_anywhere(3,800);
//     print();
//     cout<<endl;
//     del_first();
//     print();
//     cout<<endl;
//     del_last();
//     print();
//     cout<<endl;
//     del_anywhere(2);
//     print();
//     cout<<endl;

// return 0;
// }
/////////////////////////////////////////////Doubly Linked List
// #include<bits/stdc++.h>
// using namespace std;

// struct node{
//     int data;
//     node *next;
//     node *prev;
// };

// node *root=NULL;
// node *tail=NULL;

// void print(){
//     node *curr_node=tail;
//     while(curr_node!=NULL){
//         cout<<curr_node->data<<" ";
//         curr_node=curr_node->prev;
//     }
// }

// void Search(int k){
//     node *curr_node=root;
//     while(curr_node!=NULL){
//        if(curr_node->data==k){
//             cout<<"VALUE FOUND"<<endl;
//             return ;
//        }
//         curr_node=curr_node->next;
//     }
//     cout<<"NOT FOUND"<<endl;
// }

// int size(){
//     node *curr_node=root;
//     int cnt=0;
//     while(curr_node!=NULL){
//         cnt++;
//         curr_node=curr_node->next;
//     }
//     return cnt;
// }

// void last_node(){
//     node *curr_node=tail;
//     cout<<curr_node->data<<endl;
// }

// void prev_of_last(){
//      node *curr_node=tail;
//      curr_node=curr_node->prev;
//      cout<<curr_node->data<<endl;
// }

// void insert_last(int val){
//     node *temp;
//     temp=new node();
//     temp->data=val;
//     temp->next=NULL;
//     temp->prev=NULL;
//     if(root==NULL)
//         root=temp;
//     if(tail==NULL)
//         tail=temp;
//     else{
//         temp->prev=tail;
//         tail->next=temp;
//         tail=temp;
//     }
// }

// void del_last(){
//     tail=tail->prev;
//     tail->next=NULL;
// }

// void del_first(){
//     root=root->next;
//     root->prev=NULL;
// }

// void insert_first(int val){
//     node *temp;
//     temp=new node();
//     temp->data=val;
//     temp->next=NULL;
//     temp->prev=NULL;
//     if(root==NULL)
//         root=temp;
//     if(tail==NULL)
//         tail=temp;
//     else{
//         temp->next=root;
//         root->prev=temp;
//         root=temp;
//     }
// }

// void insert_anywhere(int pos,int val){
//     node *temp;
//     temp=new node();
//     temp->data=val;
//     temp->next=NULL;
//     if(root==NULL)
//         root=temp;
//     if(tail==NULL)
//         tail=temp;
//     else{
//         node *curr_node=root;
//         node *curr_node1=root;
//         while(--pos){
//             curr_node1=curr_node;
//             curr_node=curr_node->next;
//         }
//         curr_node1->next=temp;
//         temp->prev=curr_node1;
//         temp->next=curr_node;
//         curr_node->prev=temp;
//     }
// }

// void del_anywhere(int pos){
//     node *curr_node=root;
//     node *curr_node1=root;
//     node *curr_node2=root;
//         while(pos--){
//             curr_node2=curr_node1;
//             curr_node1=curr_node;
//             curr_node=curr_node->next;
//         }
//     curr_node2->next=curr_node;
//     curr_node->prev=curr_node2;
//     curr_node1->next=NULL;
//     curr_node1->prev=NULL;
// }
// void print1(){
//     node *curr_node=root;
//     while(curr_node!=NULL){
//         cout<<curr_node->data<<" ";
//         curr_node=curr_node->next;
//     }
//     cout<<endl;
// }

// int main(){
// for(int i=1;i<=5;i++){
//     int x;
//     cin>>x;
//     insert_last(x);
// }
//     print();
//     cout<<endl;
//     Search(20);
//     int x=size();
//     cout<<x<<endl;
//     last_node();
//     prev_of_last();
//     insert_last(80);
//     print();
//     del_last();
//     cout<<endl;
//     print();
//     insert_first(2);
//     cout<<endl;
//     print();
//     del_first();
//     cout<<endl;
//     print();
//     insert_anywhere(3,800);
//     cout<<endl;
//     print();
//     del_anywhere(3);
//     cout<<endl;
//     print();
//     cout<<endl;
//     print1();
//     return 0;
// }
///////////////////////////////////////BFS(Breadth First Search)
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>Node[11];
// int level[11];
// int parent[11];
// void BFS(int source){
//     level[source]=0;
//     queue<int>q;
//     q.push(source);
//     while(!q.empty()){
//         int u=q.front();
//         q.pop();
//         for(int j=0;j<Node[u].size();j++){
//             int v=Node[u][j];
//             if(level[v]==-1){
//                 parent[v]=u;
//                 level[v]=level[u]+1;
//                 q.push(v);
//             }
//         }
//     }
// }
// void path(int node){
//     if(node!=parent[node])
//         path(parent[node]);
//     cout<<node<<" ";
// }
// int main(){
//     int no_node,no_edge;
//     cin>>no_node>>no_edge;
//     for(int i=1;i<=no_edge;i++){
//         int nodeA,nodeB;
//         cin>>nodeA>>nodeB;
//         Node[nodeA].push_back(nodeB);
//         Node[nodeB].push_back(nodeA);
//     }
//     for(int i=1;i<=no_node;i++){
//         cout<<i<<"->";
//         for(int j=0;j<Node[i].size();j++){
//             cout<<Node[i][j]<<",";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=no_node;i++){
//         level[i]=-1;
//         parent[i]=i;
//     }
//     BFS(1);
//     for(int i=1;i<=no_node;i++)
//         cout<<i<<"="<<level[i]<<endl;
//     path(5);
//     cout<<endl;
//     return 0;
// }
// ///////////////////////////////////////////DFS(Depth First Search)
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// vector<llu>v_node[30000000];
// char color[3000000];

// void DFS(int source){
//     int u = source;
//     color[source] = 'g';
//     cout<<u<<endl;
//     for(auto v : v_node[u]){
//         if(color[v] == 'w')
//             DFS(v);
//     }
//     color[u]='b';
// }

// int main(){
//     int node,edge;
//     cin>>node>>edge;

//     for(int i=0;i<edge;i++){
//         int a,b;
//         cin>>a>>b;
//         v_node[a].push_back(b);
//         v_node[b].push_back(a);
//     }

//     for(int i=1;i<=node;i++)
//         color[i]='w';
//     int source;
//     cout<<"insert source node"<<endl;
//     cin>>source;
//     cout<<"Path for DFS"<<endl;
//     DFS(source);
//     return 0;
// }
//////////////////////////////////////////////////DFS-----(Number of unconnected graphs)
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// void DFS(int source,vector<int>v_node[],char color[]){
//     int u = source;
//     color[source] = 'g';
//     cout<<u<<endl;
//     for(auto v : v_node[u]){
//         if(color[v] == 'w')
//             DFS(v,v_node,color);
//     }
//     color[u]='b';
// }
// int main(){
//     int node,edge;
//     cin>>node>>edge;
//     vector<int>v_node[node+1];
//     int visited[node+1];
//     char color[node+1];
//     for(int i=0;i<edge;i++){
//         int a,b;
//         cin>>a>>b;
//         v_node[a].push_back(b);
//         v_node[b].push_back(a);
//     }
//     for(int i=1;i<=node;i++)
//         color[i]='w';
//     cout<<"Path for DFS"<<endl;
//    int cnt=0;
//     for(int i=1;i<=node;i++){
//         if(color[i]!='b'){
//             cnt++;
//             DFS(i,v_node,color);
//         }
//     }
//     cout<<"THe number of provinces are: "<<cnt<<endl;
//     return 0;
// }
///////////////////////////////////////////BFS cycle detection
// #include<bits/stdc++.h>
// using namespace std;
// vector<int>Node[11];
// int visited[11]={0};
// int flg=0;
// bool BFS(int source){
//     visited[source]=1;
//     queue<pair<int,int>>q;
//     q.push({source,-1});
//     while(!q.empty()){
//         int node=q.front().first;
//         int parent=q.front().second;
//         q.pop();
//         for(auto adj:Node[node]){
//              if(!visited[adj]){
//                 visited[adj]=1;
//                 q.push({adj,node});
//             }
//             else if(parent!=adj)
//                 return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int no_node,no_edge;
//     cin>>no_node>>no_edge;
//     for(int i=1;i<=no_edge;i++){
//         int nodeA,nodeB;
//         cin>>nodeA>>nodeB;
//         Node[nodeA].push_back(nodeB);
//         Node[nodeB].push_back(nodeA);
//     }
// for(int i=1;i<=no_node;i++){
//     if(!visited[i])
//        if(BFS(i)==true)
//             flg=1;
// }
//     if(flg)
//         cout<<"CYCLE present"<<endl;
//     else
//         cout<<"NO cycle"<<endl;
//     return 0;
// }
/////////////////////////////////////Cycle detection--using DFS
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// vector<llu>v_node[30000000];
// char color[3000000];
// int flg=0;
// bool DFS(int source,int parent){
//     int father = source;
//     color[source] = 'b';
//     cout<<father<<endl;
//     for(auto child: v_node[father]){
//         if(color[child] == 'w'){
//             if(DFS(child,father)==true)
//                 return true;
//         }
//         else if(child != parent)
//             return true;
//     }
//     return false;
// }
// int main(){
//     int node,edge;
//     cin>>node>>edge;

//     for(int i=0;i<edge;i++){
//         int a,b;
//         cin>>a>>b;
//         v_node[a].push_back(b);
//         v_node[b].push_back(a);
//     }
//     for(int i=1;i<=node;i++)
//         color[i]='w';
//     for(int i=1;i<=node;i++)
//     {
//         if(color[i]!='b')
//             if(DFS(i,-1)==true)
//                 flg=1;
//     }
//     if(flg)
//         cout<<"Cycle"<<endl;
//     else
//         cout<<"No Cycle"<<endl;
//     return 0;
// }
//////////////////////////////////Infix to Postfix
// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// stack<char> s;
// stack<int> res;
// vector<string> s1;
// int priority(char s){
//     if(s=='^')
//         return 100;
//     else if(s=='*' || s=='/')
//         return 50;
//     else if(s=='+' || s=='-')
//         return 10;
//     else
//         return 0;
// }
// void multival(string x){
//     string s2="";
//     string t="";
//     string postfix1="";
//     for(int i=0;i<x.size();i++){
//         if(x[i]>='0'&& x[i]<='9'){
//             s2+=x[i];
//         }
//         else if(x[i]=='('){
//             s.push(x[i]);
//         }
//         else if(x[i] == ')'){
//             postfix1 += s2;
//             s1.push_back(s2);
//             s2 = "";
//             while(!s.empty() && s.top()!='('){
//                 postfix1+=s.top();
//                 t+=s.top();
//                 s1.push_back(t);
//                 t="";
//                 s.pop();
//             }
//             s.pop();
//         }
//         else{
//             s1.push_back(s2);
//             postfix1+=s2;
//             s2="";
//             while(!s.empty() && priority(s.top())>=priority(x[i])){
//                 postfix1+=s.top();
//                 t+=s.top();
//                 s1.push_back(t);
//                 t="";
//                 s.pop();
//             }
//             s.push(x[i]);
//         }
//     }
//     postfix1+=s2;
//     t+=s2;
//     s1.push_back(t);
//     t="";
//     while(!s.empty()){
//         postfix1+=s.top();
//         t+=s.top();
//         s1.push_back(t);
//         t="";
//         s.pop();
//     }
//     cout <<"Postfix Expression: "<<postfix1 << endl;
// }
// bool isNumber(string& str) {
//     return all_of(str.begin(),str.end(),::isdigit);
// }
// void evaluate(){
//     for(int i=0;i<s1.size();i++){
//         string symbol=s1[i];
//         if(!symbol.empty()){
//             if (isNumber(symbol)) {
//             int x=stoi(symbol);
//             res.push(x);
//         } else {
//             int a=res.top();
//             res.pop();
//             int b=res.top();
//             res.pop();
//             int c=0;
//             if(symbol == "+")
//                 c=a+b;
//             else if(symbol == "-")
//                 c=b-a;
//             else if(symbol == "*")
//                 c=a*b;
//             else if(symbol=="/")
//                 c=b/a;
//             else
//                 c=pow(b,a);
//             res.push(c);
//             }
//         }
//         else
//             continue;
//     }
//     cout<<"Result :"<<res.top()<< endl;
// }
// int main(){
//     string infix, postfix = "";
//     getline(cin, infix);
//     multival(infix);
//     evaluate();
//     return 0;
// }
////////////////////////////////////////Postfix to prefix
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// stack<string>s;
// stack<int>res;

// void evaluate(string prefix){
//     for(int i=0;i<prefix.size();i++){
//         if(prefix[i]>='0' && prefix[i]<='9'){
//             res.push(prefix[i]-'0');
//         }
//         else{
//             int a=res.top();
//             res.pop();
//             int b=res.top();
//             res.pop();
//             if(prefix[i]=='+'){
//                 int c=a+b;
//                 res.push(c);
//             }
//             else if(prefix[i]=='-'){
//                 int c=a-b;
//                 res.push(c);
//             }
//             else if(prefix[i]=='*'){
//                 int c=a*b;
//                 res.push(c);
//             }
//             else if(prefix[i]=='/'){
//                 int c=a/b;
//                 res.push(c);
//             }
//             else{
//                 int c=pow(a,b);
//                 res.push(c);
//             }
//         }
//     }
//     cout<<"Result: "<<res.top()<<endl;
// }

// void conversion(string postfix){
//     string prefix="";
//     string t="";
//     string a="";
//     string b="";
//     for(int i=0;i<postfix.size();i++){
//         if(postfix[i]>='0' && postfix[i]<='9'){
//             t+=postfix[i];
//             s.push(t);
//             t="";
//         }
//         else{
//             a+=s.top();
//             s.pop();
//             b+=s.top();
//             s.pop();
//             t+=postfix[i];
//             prefix+=t;
//             t="";
//             prefix+=b;
//             prefix+=a;
//             s.push(prefix);
//             a="";
//             b="";
//             prefix="";
//         }
//     }
//     cout<<"Prefix : "<<s.top()<<endl;
//     string val=s.top();
//     reverse(val.begin(),val.end());
//     evaluate(val);
// }

// int main()
// {
//     string postfix;
//     getline(cin, postfix);
//     conversion(postfix);
// return 0;
// }
//////////////////////////////////////////Queue using stack
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// stack<int>s,s1;
// int main()
// {
//     for(int i=1;i<=5;i++){
//         int x;
//         cin>>x;
//         s.push(x);
//     }
//     while(!s.empty()){
//         s1.push(s.top());
//         s.pop();
//     }
//     while(!s1.empty()){
//         cout<<s1.top()<<" ";
//         s1.pop();
//     }
// return 0;
// }
//////////////////Stack using queue
// #include<bits/stdc++.h>
// using namespace std;
// typedef unsigned long long int llu;
// typedef double db;
// typedef float ft;
// #define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// queue<int>q1,q2;
// int main()
// {
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         q1.push(x);
//         while(!q2.empty()){
//             q1.push(q2.front());
//             q2.pop();
//         }
//         swap(q1,q2);
//     }
//     for(int i=0;i<5;i++){
//         cout<<q2.front()<<" ";
//         q2.pop();
//     }
// return 0;
// }


