#include <cassert>
#include <iostream>
#include "main.cpp"

int main() {
    
    //Тест 1
    unsigned int n1 = 1000;
    assert(RomanNumerals.to_roman(n1) == "M");
    std::cout << n1 << " = M" << std::endl;
    
    //Тест 2
    unsigned int n2 = 4;
    assert(RomanNumerals.to_roman(n2) == "IV");
    std::cout << n2 << " = IV" << std::endl;

    // Тест 3
    unsigned int n3 = 1;
    assert(RomanNumerals.to_roman(n3) == "I");
    std::cout << n3 << " = I" << std::endl;

    // Тест 4
    unsigned int n4 = 9;
    assert(RomanNumerals.to_roman(n4) == "IX");
    std::cout << n4 << " = IX" << std::endl;

    // Тест 5
    unsigned int n5 = 1990;
    assert(RomanNumerals.to_roman(n5) == "MCMXC");
    std::cout << n5 << " = MCMXC" << std::endl;

    // Тест 6
    unsigned int n6 = 2008;
    assert(RomanNumerals.to_roman(n6) == "MMVIII");
    std::cout << n6 << " = MMVIII" << std::endl;

    // Тест 7
    unsigned int n7 = 3999;
    assert(RomanNumerals.to_roman(n7) == "MMMCMXCIX");
    std::cout << n7 << " = MMMCMXCIX" << std::endl;

    // Тест 8
    unsigned int n8 = 3560;
    assert(RomanNumerals.to_roman(n8) == "MMMDLX");
    std::cout << n8 << " = MMMDLX" << std::endl;

    //Тесты from_roman

    //Тест 1
    std::string rn1 = "I";
    assert(RomanNumerals.from_roman(rn1) == 1);

    //Тест 2
    std::string rn2 = "XXI";
    assert(RomanNumerals.from_roman(rn2) == 21);

    //Тест 3
    std::string rn3 = "IX";
    assert(RomanNumerals.from_roman(rn3) == 9);

    //Тест 4
    std::string rn4 = "IV";
    assert(RomanNumerals.from_roman(rn4) == 4);

    //Тест 5
    std::string rn5 = "MMVIII";
    assert(RomanNumerals.from_roman(rn5) == 2008);

    //Тест 6
    std::string rn6 = "MDCLXVI";
    assert(RomanNumerals.from_roman(rn6) == 1666);

    //Тест 7
    std::string rn7 = "MMMCMXCIX";
    assert(RomanNumerals.from_roman(rn7) == 3999);

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}