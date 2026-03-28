#include <iostream>
#include <vector>

int main(){
    int N, M;
    std::cin >> N >> M;
    std::vector<int> team(N+1,0);
    team[1] = 1;
    team[2] = 2;
    for(int i = 0; i<M; i++){
        int a, b;
        std::cin >> a >> b;
        team[b] = team[a];
    }
    int red = 0;
    int blue = 0;
    for(int i = 1; i<=N; i++){
        if(team[i] == 1){red++;}
        else if(team[i] == 2){blue++;}
    }
    std::cout << red << ' ' << blue;
}   