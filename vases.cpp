#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    if(N >= 6){
        int a = 0, b = 0;
        if((N-1)%2 == 0){
            a = (N-1)/2 + 1;
            b = N-a-1;
            cout << 1 << ' '<< a << ' ' << b;
        }
        else{
            a = (N-1)/2;
            b = N-a-1;
            cout << 1 << ' ' << a << ' ' << b;
        }
    }
    else{
        cout << 0 << ' ' << 0 << ' ' << 0;
    }
}