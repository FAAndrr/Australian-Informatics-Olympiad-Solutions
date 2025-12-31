#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> heights(N);
    vector<int> differences(N-1);
    vector<int> uglinesses(N);
    int answer = 0;
    int ugliestBuilding = 0;
    int uglyIndex = 0;
    for(int i = 0; i<N; i++) cin >> heights[i];
    for(int i = 0; i<N-1; i++) differences[i] = abs(heights[i+1] - heights[i]);
    for(int i = 1; i<N-1; i++) uglinesses[i] = differences[i-1] + differences[i];
    uglinesses[0] = differences[0];
    *uglinesses.end() = *differences.end();
    for(int i = 0; i<N; i++){
        ugliestBuilding = max(ugliestBuilding, uglinesses[i]);
        if(ugliestBuilding == uglinesses[i]) uglyIndex = i;
    }
    for(int i = 0; i<N; i++){
        ugliestBuilding += uglinesses[i];
    }
    cout << max(abs(ugliestBuilding - differences[uglyIndex+1]), abs(ugliestBuilding - differences[uglyIndex-1]));
    return 0;
}