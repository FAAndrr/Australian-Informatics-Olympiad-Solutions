#include <iostream>
#include <algorithm>
#include <cmath>

int main(){
    double coordx1, coordy1, r1;
    double coordx2, coordy2, r2;
    std::cin >> coordx1 >> coordy1 >> r1;
    std::cin >> coordx2 >> coordy2 >> r2;
    int biggerrad = r1;
    int smallerrad = r2;
    double distance = sqrt(pow((coordx2 - coordx1),2) + pow((coordy2-coordy1),2));
    if(r2 > r1){
        biggerrad = r2;
        smallerrad = r1;
    }
    if(r1 + r2 >= distance && (distance + smallerrad >= biggerrad)){
        std::cout << "yes";
    }else{
        std::cout << "no";
    }
}
