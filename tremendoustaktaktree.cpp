#include <iostream>
using namespace std;

int main(){
    int N, moons = 0;
    cin >> N;
    while(N%11 != 1){
        N*=2;
        moons++;
    }
    cout << moons << ' ' << N;
    return 0;
}