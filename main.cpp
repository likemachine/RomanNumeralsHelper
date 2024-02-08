#include <iostream>
#include <string>
#include <vector>

struct NumLib {
  std::string roman;
  int  arab;
};

void splitNumber (int number, int parts[]) {
  int power = 1;
  for (int i = 0; i < 4; i++) {
    parts[i] = (number % 10) * power;
    number /=10;
    power *= 10;
  }
}

class RomanHelper{
  public:
    static constexpr int l = 7;
    NumLib num[l] {
      {"I", 1},
      {"V", 5},
      {"X", 10},
      {"L", 50},
      {"C", 100},
      {"D", 500},
      {"M", 1000}
    };

    //std::vector<NumLib> nums = {num1, num2, num3, num4, num5, num6, num7}; 
  
    std::string to_roman(unsigned int n) {
      std::string answer = "";
      int parts[4];
      splitNumber(n, parts);
      std::cout << "Разбиение числа на части" << std::endl;
      for (int c = 3; c>= 0; c--) {
        std::cout << parts[c] << " ";
      }

      for (int i = l - 1; i >= 0; i--) {
        int flag = 0;
        std::cout << "i arab is " << num[i].arab << std::endl;
        std::cout << "n is " << n << std::endl;
        std::cout << n << " = " << num[i+1].arab << " - " << num[i-1].arab << std::endl;

        if (n == num[i+1].arab - num[i-1].arab){
          n -= num[i+1].arab - num[i-1].arab;
          answer += num[i-1].roman + num[i+1].roman;
          //std::cout << "in if cycle " << n << " = " << num[i+1].arab << " - " << num[i-1].arab << std::endl;
          std::cout << "if answer now is " << answer << std::endl;
        }
        else if (n == num[i+1].arab - num[i].arab) {
          n -= num[i+1].arab - num[i].arab;
          answer += num[i].roman + num[i+1].roman;
          std::cout << "in if cycle " << n << " = " << num[i+1].arab << " - " << num[i].arab << std::endl;
          std::cout << "if answer now is " << answer << std::endl;
        }
        else {
          while (n >= num[i].arab) {
            //std::cout << "n is " << n << std::endl;
            //std::cout << "num[i].arab is " << num[i].arab << std::endl;
            n -= num[i].arab;
            answer += num[i].roman;
            flag++;
            std::cout << "while answer now is " << answer << std::endl;
            // if (flag > 3) { //очень костыльно, работает только с IIII -> IV 
            //   answer = answer.erase(1, 3);
            //   answer += num[i + 1].roman;
            //   std::cout << "flag answer now is " << answer << std::endl;
            // }
          }
        }

        //   if (n == num[i+1].arab - num[i-1].arab){
        //   n -= num[i+1].arab - num[i-1].arab;
        //   answer += num[i-1].roman + num[i+1].roman;
        //   std::cout << n << " = " << num[i+1].arab << " - " << num[i-1].arab << std::endl;
        //   std::cout << "answer now is " << answer << std::endl;
        // }

      //std::cout << "Roman: " << num[i].roman << " Arabic: " << num[i].arab << std::endl;
      }
      std::cout << "answer is " << answer << std::endl;
      return answer;
    }
    // int from_roman(std::string rn){
    //   return 0;
    // }
} RomanNumerals;