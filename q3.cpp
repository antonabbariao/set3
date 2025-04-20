#include <iostream>
#include <string>

int main(){
    int johnDays, johnHours, johnMinutes;
    std::cout << "days for john?" << std::endl;
    std::cin >> johnDays;

    std::cout << "hours for john?" << std::endl;
    std::cin >> johnHours;

    std::cout << "minutes for john?" << std::endl;
    std::cin >> johnMinutes;

    int billDays, billHours, billMinutes;
    std::cout << "days for bill?" << std::endl;
    std::cin >> billDays;

    std::cout << "hours for bill?" << std::endl;
    std::cin >> billHours;

    std::cout << "minutes for bill?" << std::endl;
    std::cin >> billMinutes;

    int totalMins;

    totalMins = (johnDays*1440) + (johnHours*60) + (johnMinutes) + (billDays*1440) + (billHours*60) + (billMinutes);

    std::cout << totalMins << std::endl;
    int days, minutes, hours;

    days = totalMins / 1440;
    totalMins = totalMins % 1440;
    
    hours = totalMins / 60;

    minutes = totalMins % 60;

    std::cout << "The total time both of them worked together is " << days << " days, " << hours << " hours, " << minutes << " minutes." << std::endl;
    

    return 0;
}