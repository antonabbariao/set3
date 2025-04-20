#include <iostream>
#include <cmath>

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main(){
    double input;
    std::cout << "pls input a real number: " << std::endl;
    std::cin >> input;

    int choice;
    std::cout << "choose your rounding method: \n 1. floor \n 2. ceiling \n 3. nearest whole" << std::endl;
    std::cin >> choice;

    
    switch (choice){
        case FLOOR_ROUND:
        {
            int result = input;
            std::cout << input << " rounds to " << result << " based on floor round" << std::endl;
            break;
        }
        case CEILING_ROUND:
        {
            int result = input + 1;
            std::cout << input << " rounds to " << result << " based on ceiling round" << std::endl;
            break;
        }
        default: // redo for next sesh
            int result = round(input);
            std::cout << input << " rounds to " << result << " based on regular round" << std::endl;
    }
    
    return 0;
}  