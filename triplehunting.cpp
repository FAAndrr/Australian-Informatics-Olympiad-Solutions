#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    int count = 0;
    cin >> N;
    vector<int> nums(N);
    vector<int> tripleindexes;
    for(int i = 0; i<N; i++) cin >> nums[i];
    for(int i = 0; i<N; i++){
        if(nums[i] % 3 == 0){
            count++;
            tripleindexes.push_back(i+1);
        }
    }
    if(count != 0){
        cout << count << endl;
        for(int i : tripleindexes) cout << i << ' ';
    }
    else cout << "Nothing here!";
    return 0;
}