#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, K;
    int currentLength = 0;
    vector<int> D;
    vector<int> lengths;
    cin >> N >> K;
    for(int i = 0; i<N-1; i++){
        int temp;
        cin >> temp; 
        D.push_back(temp);
    }
    for(int i = 0; i<=N-K-1; i++){
        for(int j = 0; j<K; j++){
            currentLength += D[i+j];
        }
        lengths.push_back(currentLength);
        currentLength = 0;
        cout << lengths[i] << endl;
    }
    int ans = *min_element(lengths.begin(),lengths.end());
    return 0;
}