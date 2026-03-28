#include <iostream>

int main(){
    int targetx, targety;
    int currentx = 0, currenty = 0;
    int position = 0;
    bool state = true;
    std::cin >> targetx >> targety;

    while(currentx != targetx || currenty != targety){
        if(state == true){
            if(currentx < targetx){
                currentx++;
                if(position == 2){
                    std::cout<<"L";
                }else if(position == 0){
                    std::cout<<"R";
                }
                position = 1;
            }
            else if(currentx >= targetx){
                currentx--;
                if(position == 0){
                    std::cout<<"L";
                }else if(position == 2){
                    std::cout<<"R";
                }
                position = 3;
            }
            state = false;
        }else{
            if(currenty < targety){
                currenty++;
                if(position == 1){
                    std::cout<<"L";
                }else if(position == 3){
                    std::cout<<"R";
                }
                position = 0;
            }
            else if(currenty >= targety){
                currenty--;
                if(position == 3){
                    std::cout<<"L";
                }else if(position == 1){
                    std::cout<<"R";
                }
                position = 2;
            }
            state = true;
        }
    }
}  