#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    long long N, max = 0, s = 1, current = 0;
    string days;
    cin >> N;
    cin >> days;
    for (int i = 0; i < N; i++){
        if (days[i] == 'M'){
            current+=s;
        }
        else{
            if (N-i > s){
                s++;
            }
            else{
                current+=s;
            }
        }
    }
    cout << current;
}