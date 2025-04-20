#include <iostream>
#include <string>
// to do
// user has to enter two prices for their respective items
// the lesser item is half off 
// does the user have a club card?
// if they have a club card they you put ten percent off the final price 
// after the half off
// add the tax


int main(){
    int firstItem, secondItem;
    std::cout << "enter the price of the first item: " << std::endl;
    std::cin >> firstItem;

    std::cout << "enter the price of the second item: " << std::endl;
    std::cin >> secondItem;

    std::string clubCardInput; 
    bool clubCard;
    std::cout << "do you have a club card? " << std::endl;
    std::cin >> clubCardInput;

    if (clubCardInput == "y" || clubCardInput == "Y"){
        clubCard = true;
    }
    else{
        clubCard = false;
    }

    double taxRate;
    std::cout << "enter the tax rate: " << std::endl;
    std::cin >> taxRate;

    double basePrice = firstItem + secondItem;
    std::cout << "base price: " << basePrice << std::endl;

    
    if (firstItem > secondItem){ // this satisfies the buy one get one
        secondItem = secondItem / 2;
    }
    else{
        firstItem = firstItem / 2;
    }

    basePrice = firstItem + secondItem; // update the baseprice

    if (clubCard){ // this satsifies if they have a clubcard
        basePrice = basePrice - (basePrice * 0.1);
    }

    basePrice = basePrice + (basePrice * (taxRate / 100));

    std::cout << "total price: " << basePrice << std::endl;

    return 0;
}