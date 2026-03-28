#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N;
    string steps;
    cin >> N;
    cin >> steps;
    int current = 0, min = 0, max = 0;
    for(int i = 0; i<N; i++){
        if(steps[i] == 'L') current--;
        if(steps[i] == 'R') current++;
        if(steps[i] == 'T') current = 0;
        if(min > current) min = current;
        if(current > max) max = current;
    }
    cout << abs(min) + abs(max) + 1;
    return 0;
}