#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> altitudes(N);
    for (int i = 0; i < N; i++) cin >> altitudes[i];

    int max_intensity = 0;
    int count = 1;

    for (int i = 1; i <= N; i++) {
        if (i < N && altitudes[i] == altitudes[i - 1]) {
            count++;
        } else {
            int intensity = altitudes[i - 1] * count;
            max_intensity = max(max_intensity, intensity);
            count = 1; 
        }
    }

    cout << max_intensity;
    return 0;
}
