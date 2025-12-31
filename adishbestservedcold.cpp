#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> set(n);
    for(int i = 0; i<n; i++) cin >> set[i];
    int min = 0, max = 0, mean = 0;
    min = *min_element(set.begin(), set.end());
    max = *max_element(set.begin(), set.end());
    for(int i = 0; i<n; i++){
        mean += set[i];
    }
    mean /= n;

    cout << min << ' ' << max << ' ' << mean;
    return 0;
}