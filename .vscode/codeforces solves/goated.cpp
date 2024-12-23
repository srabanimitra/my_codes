#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> seats(N);

        for (int i = 0; i < N; ++i) {
            cin >> seats[i];
        }

        // Sort the seats in descending order
        sort(seats.rbegin(), seats.rend());

        int totalSeats = 0;
        int rulingPartySeats = 0;
        int partiesNeeded = 0;

        for (int i = 0; i < N; ++i) {
            totalSeats += seats[i];
            rulingPartySeats += seats[i];

            if (rulingPartySeats > totalSeats / 2) {
                break;
            } else {
                partiesNeeded++;
            }
        }

        cout << partiesNeeded + 1 << endl; // Add 1 for the ruling party itself
    }

    return 0;
}
