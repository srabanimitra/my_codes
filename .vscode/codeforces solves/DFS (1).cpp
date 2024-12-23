#include <bits/stdc++.h>
using namespace std;

vector<int> v[100];
int level[100];
int parent[100];
char color[100];

void PATH(int node)
{
    if (node != parent[node])
    {
        PATH(parent[node]);
    }
    cout << node << " ";
}

void DFS(int source)
{
    int u=source;
    color[u] = 'g';
    int count=0;
    for (int i = 0; i < v[u].size(); i++)
    {
        int a = v[u][i];

        if (color[a] == 'w')
        {
            parent[a] = u;
            level[a] = level[u] + 1;
            DFS(a);
        }
        if(color[a]=='g')
        {
            count++;
        }
    }
    color[u] = 'b';
}


int main()
{
    int n, e, s, d;

    cout << "Number of nodes: ";
    cin >> n;
    cout << "Number of edges: ";
    cin >> e;

    for (int i = 1; i <= e; i++)
    {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;

        v[nodeA].push_back(nodeB);
        v[nodeB].push_back(nodeA);
    }

    cout<<"Node adjacency list :"<<endl;

    for (int i = 1; i <= n; i++)
    {
        cout << i << "--> ";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;

    }
    for (int i = 1; i <= n; i++)
    {
        level[i] = 0;
        parent[i] = i;
        color[i] = 'w';
    }

    cout <<endl<< "Source node: ";
    cin >> s;

    cout << "Destination node: ";
    cin >> d;
    cout<<endl;

    DFS(s);
    for(int i=1; i<=n; i++)
    {
        cout<<i<<"= "<<level[i];
    }

    cout <<"DFS Path from " << s << " to " << d << "--> ";

    PATH(d);


    return 0;
}

//#include <bits/stdc++.h>
// using namespace std;

// vector<int> v[100];
// int level[100];
// int parent[100];
// char color[100];
// bool cycle=false;

// void PATH(int node)
// {
//     if (node != parent[node])
//     {
//         PATH(parent[node]);
//     }
//     cout << node << " ";
// }

// void DFS(int source)
// {
//     int u=source;
//     color[u] = 'g';
//     for (int i = 0; i < v[u].size(); i++)
//     {
//         int a = v[u][i];
//         if (color[a] == 'w')
//         {
//             parent[a] = u;
//             level[a] = level[u] + 1;
//             DFS(a);
//         }
//         if(color[a]=='g'&&parent[u]!=a)
//         {
//           //cout<<"cycle detected "<<a<<" "<<par<<endl;
//           cycle=true;
//         }
//     }

//     color[u] = 'b';
// }


// int main()
// {
//     int n, e, s, d;

//     cout << "Number of nodes: ";
//     cin >> n;
//     cout << "Number of edges: ";
//     cin >> e;

//     for (int i = 1; i <= e; i++)
//     {
//         int nodeA, nodeB;
//         cin >> nodeA >> nodeB;

//         v[nodeA].push_back(nodeB);
//         v[nodeB].push_back(nodeA);
//     }

//     cout<<"Node adjacency list :"<<endl;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << "--> ";
//         for (int j = 0; j < v[i].size(); j++)
//         {
//             cout << v[i][j] << " ";
//         }
//         cout << endl;

//     }
//     for (int i = 1; i <= n; i++)
//     {
//         level[i] = 0;
//         parent[i] = i;
//         color[i] = 'w';
//     }

//     cout <<endl<< "Source node: ";
//     cin >> s;

//     cout << "Destination node: ";
//     cin >> d;
//     cout<<endl;

//     DFS(s);
//     if(cycle)
//       cout<<"found"<<endl;
//     else
//       cout<<"not found"<<endl;
//     // for(int i=1;i<=n;i++)
//     // {
//     //     cout<<i<<" l= "<<level[i]<<endl;
//     // }
//     // cout<<"parent =";
//     // for(int i=1;i<=n;i++)
//     // {
//     //     cout<<parent[i]<<" ";
//     // }
//     // cout<<endl;

//      cout <<"DFS Path from " << s << " to " << d << "--> ";

//      PATH(d);


//     return 0;
// }
