#include <iostream>
using namespace std;

int main(){
    int N;
    int d = 0;
    cin >> N;
    while(N%2 == 0){
        N/=2;
        d++;
    }
    cout << N << ' ' << d;
}