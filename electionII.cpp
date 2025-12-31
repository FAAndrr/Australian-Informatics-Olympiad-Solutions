#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    int N;
    string votes;
    cin >> N >> votes;
    int A = 0, B = 0, C = 0;
    vector<int> total;
    vector<char> candidates = {'A', 'B', 'C'};
    for(int i = 0; i<N; i++){
        if(votes[i] == 'A') A++;
        if(votes[i] == 'B') B++;
        if(votes[i] == 'C') C++;
    }
    total.push_back(A);
    total.push_back(B);
    total.push_back(C);

    int max = *max_element(total.begin(),total.end());
    int count = 0;
    int winnerindex = 0;
    for(int i = 0; i<total.size(); i++){
        if(total[i] == max){
            count++;
            winnerindex = i;
        }
    }

    if(count>1){
        cout << 'T';
    }
    else if(count==1){
        cout << candidates[winnerindex];
    }

    return 0;
}