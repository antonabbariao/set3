#include <iostream>
#include <string>



int main(){
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0, 
    userTotal = 0, userTotalDollars, userTotalCoins;
    std::cout << "please input your quarters: ";
    std::cin >> quarters;

    std::cout << "" << std::endl;

    std::cout << "please input your dimes: ";
    std::cin >> dimes;

    std::cout << "" << std::endl;   

    std::cout << "please input your nickels: ";
    std::cin >> nickels;

    std::cout << "" << std::endl;

    std::cout << "please input your pennies: ";
    std::cin >> pennies;

    userTotal = (quarters * 25) + (dimes * 10) + (nickels * 5) + (pennies);

    userTotalDollars = userTotal / 100;

    userTotalCoins = userTotal % 100;

    std::cout << "the total is " << userTotalDollars << "dollars and " << userTotalCoins << " cents" << std::endl;
    
    return 0;
}