#include <iostream>
#include <cmath>

int main(){
    int a, b, c;
    std::cout << "pls enter your a: " << std::endl;
    std::cin >> a;
    std::cout << "pls enter your b: " << std::endl;
    std::cin >> b;
    std::cout << "pls enter your c: " << std::endl;
    std::cin >> c;

    double dis = (pow(b, 2) - (4 * (a * c)));
    std::cout << dis << std::endl;
    int check = b * -1;
    std::cout << check << std::endl;
    if (a == 0 && b == 0){
        if (c == 0){
            std::cout << "inf solutions" << std::endl;
        }
        else{
            std::cout << "no solutions" << std::endl;
        }
    }
    else if (dis < 0){
        std::cout << "there are no real solutions" << std::endl;
    }
    else if (dis == 0){
        double result = (b * -1) / (a * 2);
        std::cout << "this equation has a single real solution x = " << result << std::endl;
    }
    else{
        double result1 = ((b * -1) + std::sqrt(dis)) / (2 * a);
        double result2 = ((b * -1) - std::sqrt(dis)) / (2 * a);

        std::cout << "this equation has two solutions x = " << result1 << " and " << result2 << std::endl;
    }

    return 0;
}