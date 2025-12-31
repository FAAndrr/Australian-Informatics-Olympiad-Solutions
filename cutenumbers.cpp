#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> number(n);
    int count = 0;
    for(int i = 0; i < n; i++) cin >> number[i];
    for(int i = n-1; i >= 0; i--){
        if(number[i] == 0){
            count++;
        }
        else break;
    }
    cout << count;
    return 0;
}