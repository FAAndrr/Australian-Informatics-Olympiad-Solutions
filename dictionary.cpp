#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    int d, w;
    cin >> d >> w;
    unordered_map<int, int> dictionary;
    vector<int> translations(w);
    for(int i = 0; i<d; i++){
        int a, b;
        cin >> a >> b;
        dictionary.insert({a,b});
    }
    for(int i = 0; i<w; i++){
        cin >> translations[i];
    }
    for(int i = 0; i<w; i++){
        if(dictionary.count(translations[i])){
            cout << dictionary[translations[i]] << endl;
        } else { 
            cout << "C?" << endl;
        }
    }
    return 0;
}