#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> submitted(N);
    unordered_map<int, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> submitted[i];
        freq[submitted[i]]++;
    }

    int answer = INT_MAX;
    for (auto &p : freq) {
        if (p.second == 1)
            answer = min(answer, p.first);
    }

    if (answer == INT_MAX)
        cout << -1;
    else
        cout << answer;
}
