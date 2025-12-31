#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    int t1 = 0, t2 = 0, j = 0;
    cin >> N;
    vector<int> score(N);
    for(int i = 0; i<N; i++) cin >> score[i];
    while(t1 <= t2 && j<score.size()){
        if(score[j] == 1)t1++;
        else t2++;
        j++;
    }
    if(t1 > t2) cout << "YES";
    else cout << "NO";
    return 0;
}