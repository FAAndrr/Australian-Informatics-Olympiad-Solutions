#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int N;
    int count = 1;
    cin >> N;
    vector<int> minimum(N);
    vector<int> maximum(N);

    for(int i = 0; i<N; i++)cin >> minimum[i];
    for(int i = 0; i<N; i++)cin >> maximum[i];
    int current = minimum[0];
    for(int i = 0; i<N-1; i++){
        if(maximum[i+1] >= current){
            current = max(current, minimum[i+1]);
            count++;
        }
    }
    if(N!=count) cout << "NO";
    else cout << "YES";
} 