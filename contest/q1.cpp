#include <bits/stdc++.h>

using namespace std;

int findMinimumClicks(unordered_map<int, vector<int>>& webPages, int startPage, int endPage) {
    if (startPage == endPage) {
        return 0;
    }

    queue<int> q;
    unordered_map<int, int> distance;

    q.push(startPage);
    distance[startPage] = 0;

    while (!q.empty()) {
        int currentPage = q.front();
        q.pop();

        for (int linkedPage : webPages[currentPage]) {
            if (linkedPage == endPage) {
                return distance[currentPage] + 1;
            }
            if (distance.find(linkedPage) == distance.end()) {
                distance[linkedPage] = distance[currentPage] + 1;
                q.push(linkedPage);
            }
        }
    }

    return -1; // End page cannot be reached
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Consume the newline character

    unordered_map<int, vector<int>> webPages;

    for (int i = 1; i <= N; i++) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        int linkedPage;

        while (iss >> linkedPage) {
            webPages[i].push_back(linkedPage);
        }
    }

    int startPage, endPage;
    cin >> startPage >> endPage;

    int minClicks = findMinimumClicks(webPages, startPage, endPage);

    cout << minClicks ;

    return 0;
}