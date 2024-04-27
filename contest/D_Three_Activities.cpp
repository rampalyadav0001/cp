#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int numDays;
    cin >> numDays;

    vector<int> skiingFriendsCount(numDays), movieFriendsCount(numDays), gamesFriendsCount(numDays);

    for (int i = 0; i < numDays; i++) {
        cin >> skiingFriendsCount[i];
    }

    for (int i = 0; i < numDays; i++) {
        cin >> movieFriendsCount[i];
    }

    for (int i = 0; i < numDays; i++) {
        cin >> gamesFriendsCount[i];
    }

    vector<pair<int, int>> skiingFriends, movieFriends, gamesFriends;

    // Store the number of friends along with the day index for each activity
    for (int i = 0; i < numDays; i++) {
        skiingFriends.push_back({skiingFriendsCount[i], i});
        movieFriends.push_back({movieFriendsCount[i], i});
        gamesFriends.push_back({gamesFriendsCount[i], i});
    }

    // Sort the activities in descending order based on the number of friends
    sort(skiingFriends.rbegin(), skiingFriends.rend());
    sort(movieFriends.rbegin(), movieFriends.rend());
    sort(gamesFriends.rbegin(), gamesFriends.rend());

    ll maxFriends = 0;

    // Iterate through the top three activities on each day
    for (int i = 0; i < min(numDays, 3); i++) {
        for (int j = 0; j < min(numDays, 3); j++) {
            for (int k = 0; k < min(numDays, 3); k++) {
                // Check if the selected days are distinct
                if (skiingFriends[i].second != movieFriends[j].second &&
                    skiingFriends[i].second != gamesFriends[k].second &&
                    movieFriends[j].second != gamesFriends[k].second) {
                    // Calculate the total friends for the selected days
                    ll totalFriends = skiingFriends[i].first + movieFriends[j].first + gamesFriends[k].first;
                    maxFriends = max(maxFriends, totalFriends);
                }
            }
        }
    }

    cout << maxFriends << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases--) {
        solve();
    }

    return 0;
}
