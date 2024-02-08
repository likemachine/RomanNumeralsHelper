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
    unsigned int n3 = 1;
    assert(RomanNumerals.to_roman(n3) == "I");

    // Тест 4
    unsigned int n4 = 9;
    assert(RomanNumerals.to_roman(n4) == "IX");

    // Тест 5
    unsigned int n5 = 1990;
    assert(RomanNumerals.to_roman(n5) == "MCMXC");

    // Тест 6
    unsigned int n6 = 2008;
    assert(RomanNumerals.to_roman(n6) == "MMVIII");

    // Тест 7
    unsigned int n7 = 3999;
    assert(RomanNumerals.to_roman(n7) == "MMMCMXCIX");
    
    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}