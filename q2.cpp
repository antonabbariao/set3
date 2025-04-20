#include <iostream>
#include <string>

int main(){
    std::string userInput;
    std::cout << "pls enter your amount, seperate by space" << std::endl;
    std::getline(std::cin, userInput); 

    // for space seperated inputs

    // std::cin >> dollars >> cents;
    std::cout << "" << std::endl;
    std::string space = " ";
    int spacePos = userInput.find(space);
    
    std::string dollars = userInput.substr(0, spacePos);
    std::string coins = userInput.substr(spacePos+1);

    

    int dollarInt = std::stoi(dollars);
    int coinsInt = std::stoi(coins);

 

    int totalCents = dollarInt*100 + coinsInt;
    
   
    int quarters = totalCents / 25;
    totalCents %= 25;

    int dimes = totalCents / 10;
    totalCents %= 10;

    int nickels = totalCents / 5;

    int pennies = totalCents % 5;

    std::cout << "4 dollars and 37 cents are: " << std::endl;
    std::cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies" << std::endl;
    
   


    return 0;
}