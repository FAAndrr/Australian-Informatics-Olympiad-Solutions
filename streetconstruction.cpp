#include <iostream>
using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k;
    x = (n-n%(k+1))/(k+1);
    cout << x << endl;
}
