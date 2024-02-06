#include <cassert>
#include <iostream>
#include "main.cpp"  // Замените на имя вашего заголовочного файла с кодом

int main() {
    
    //Тест 1
    unsigned int n1 = 1000;
    assert(RomanNumerals.to_roman(n1) == "M");

    //Тест 2
    unsigned int n2 = 4;
    assert(RomanNumerals.to_roman(n2) == "IV");

    // Тест 3
    unsigned int rn3 = 1;
    assert(RomanNumerals.to_roman(rn3) == "I");

    // Тест 4
    unsigned int rn4 = 9;
    assert(RomanNumerals.to_roman(rn4) == "IX");
    
    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}