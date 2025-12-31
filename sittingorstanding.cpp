#include <iostream>
using namespace std;

int main(){
    int R, S, T;
    cin >> R >> S;
    cin >> T;
    if(T >= R*S){
        cout << R*S << ' ' << T - R*S;
    }
    else{
        cout << T << ' ' << '0';
    }
}