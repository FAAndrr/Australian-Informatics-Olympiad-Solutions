#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for(int i = 0; i < N; i++) cin >> x[i] >> y[i];
    int base = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
    int height = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end());
    cout << base * height << endl;
    return 0;
}