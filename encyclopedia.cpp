#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> words(n), pages(q);
    for(int i = 0; i<n; i++) cin >> words[i];
    for(int i = 0; i<q; i++) cin >> pages[i];
    for(int i = 0; i<q; i++) cout << words[pages[i]-1] << endl;
    return 0;
}