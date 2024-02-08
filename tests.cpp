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

    // Тест 5
    unsigned int rn5 = 1990;
    assert(RomanNumerals.to_roman(rn5) == "MCMXC");

    // Тест 6
    unsigned int rn6 = 2008;
    assert(RomanNumerals.to_roman(rn6) == "MMVIII");

    // Тест 7
    unsigned int rn7 = 3999;
    assert(RomanNumerals.to_roman(rn7) == "MMMCMXCIX");
    
    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}