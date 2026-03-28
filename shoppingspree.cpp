#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int N, K;
    int output = 0;
    std::vector<int> C(2000005);
    std::cin >> N >> K;
    for(int i = 0; i<N; i++)std::cin >> C[i];
    int i = 0; int j = N-1;
    //O(K) two pointers
    while(j > i && K > 0){
        output += std::min(C[i], C[j]);
        i++;
        j--;
        K--;
    }
    //O(N/2)
    while(i <= j){
        output += std::max(C[i+1], C[i]);
        i+=2;
    }
    std::cout << output;
    //O(N/2 + K) linear
}