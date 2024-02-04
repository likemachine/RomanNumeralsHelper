#include <cassert>
#include <iostream>
#include "main.cpp"  // Замените на имя вашего заголовочного файла с кодом

int main() {
    // Тест 1
    unsigned int n1 = 1000;
    assert(RomanNumerals.to_roman(n1) == "M");

    // Тест 2
    unsigned int n2 = 4;
    assert(RomanNumerals.to_roman(n2) == "IV");

    // Добавьте другие тесты, как необходимо
    // Тест 3
    // unsigned int rn1 = "M";
    // assert(RomanNumerals.to_roman(rn1) == 1000);

    // // Тест 4
    // unsigned int rn2 = "IV";
    // assert(RomanNumerals.to_roman(rn2) == 4);
    // std::cout << "All tests passed successfully." << std::endl;

    return 0;
}