#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, c;
    cin >> n >> c;
    vector<int> prediction(n);
    int contain = 0;
    for(int i = 0; i < n; i++) cin >> prediction[i];
    int days = 0;
    while(contain < c){
        contain += prediction[days];
        days++;
    }
    cout << days;
}