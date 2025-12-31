#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    int smallclue = 0, bigclue = L;
    vector<vector<int>> clues(N, vector<int>(2));
    for(int i = 0; i < N; i++){
        for (int j = 0; j<2; j++) cin >> clues[i][j];
    }
    for(int i = 0; i<N; i++){
        if(clues[i][0] > smallclue){
            smallclue = clues[i][0];
        }
        if(clues[i][1] < bigclue){
            bigclue = clues[i][1];
        }
    }
    if(bigclue < smallclue) cout << 0;
    else cout << bigclue - smallclue + 1;
    return 0; 
}