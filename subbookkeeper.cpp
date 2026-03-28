#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string word;
    cin >> n;
    cin >> word;

    int maxScore = 0;
    int qIndex = -1;

    for (int i = 0; i < n; i++) {
        if (word[i] == '?') {
            qIndex = i;
            break;
        }
    }
    for (char c = 'A'; c <= 'Z'; c++) {
        word[qIndex] = c;

        int score = 0;
        for (int i = 1; i < n; i++) {
            if (word[i] == word[i - 1]) {
                score++;
            }
        }
        maxScore = max(maxScore, score);
    }

    cout << maxScore << endl;
    return 0;
}
