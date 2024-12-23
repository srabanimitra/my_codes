#include<bits/stdc++.h>
using namespace std;

int findMinParties(long long int N, vector<long long int>& seats)
{
    long long int totalSeats = 0;
 long long   int halfSeats = 0;
long long    int parties = 0;
    for(long long int i = 0; i < N; i++)
    {
        totalSeats += seats[i];
    }

    halfSeats = totalSeats / 2;

    sort(seats.rbegin(), seats.rend());

    int currentSeats = 0;
    for (long long int i = 0; i < N; i++)
    {
        currentSeats += seats[i];
        parties++;
        if (currentSeats > halfSeats)
        {
            break;
        }
    }

    return parties;
}

int main()
{
  long long  int T;
    cin >> T;

    for (long long int t = 0; t < T; t++)
    {
       long long int N;
        cin >> N;

        vector<long long int> seats(N);
        for (long long int i = 0; i < N; i++)
        {
            cin >> seats[i];
        }

        long long int result = findMinParties(N, seats);
        cout << result << endl;
    }

    return 0;
}
