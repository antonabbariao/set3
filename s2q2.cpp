#include <iostream>
#include <string>


int main(){
    std::string name;
    std::cout << "please enter ur name: " << std::endl;
    std::cin >> name;

    int gradYear, currentYear;
    std::cout << "please enter ur grad year: " << std::endl;
    std::cin >> gradYear;

    std::cout << "please enter ur current year: " << std::endl;
    std::cin >> currentYear;

    if (currentYear > gradYear){
        std::cout << name << " you already graduated" << std::endl;
    }
    else if (gradYear - currentYear > 4){
        std::cout << name << " ur not in college yet" << std::endl;
    }
    else if ((gradYear - currentYear) == 4){
        std::cout << name << " is a freshman" << std::endl;
    }
    else if ((gradYear - currentYear) == 3){
        std::cout << name << " is a sophomore" << std::endl;
    }
    else if ((gradYear - currentYear) == 2){
        std::cout << name << " is a junior" << std::endl;
    }
    else{
        std::cout << name << " is a senior" << std::endl;
    }
}