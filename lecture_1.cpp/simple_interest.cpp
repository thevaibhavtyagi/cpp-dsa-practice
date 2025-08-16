// CALCULATE SIMPLE INTEREST P, R, T ---------------

#include <iostream>

int main(){
    int p, r, t;

    std::cout << "Enter the PRINCIPAL amount: ";
    std::cin >> p;

    std::cout << "Enter the RATE %: ";
    std::cin >> r;

    std::cout << "Enter the TIME (year): ";
    std::cin >> t;

    
    float interest = (p * r * t) / 100.0;
    int totalAmount = p + interest;

    std::cout << "Total interest is " << interest << "\n";
    std::cout << "Total amount after interest is " << totalAmount << "\n";

    return 0;
}