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
    number /= 10;
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
  
    std::string to_roman(unsigned int n) {
      std::string answer = "";
      int parts[4];

      splitNumber(n, parts);

      for (int c = 3; c>= 0; c--) {
        for (int i = l - 1; i >= 0; i--) {
          int flag = 0;

          if (parts[c] == num[i+1].arab - num[i-1].arab){
            parts[c] -= num[i+1].arab - num[i-1].arab;
            answer += num[i-1].roman + num[i+1].roman;
          }
          else if (parts[c] == num[i+1].arab - num[i].arab) {
            parts[c] -= num[i+1].arab - num[i].arab;
            answer += num[i].roman + num[i+1].roman;
          }
          else {
            while (parts[c] >= num[i].arab) {
              parts[c] -= num[i].arab;
              answer += num[i].roman;
              flag++;
            }
          }
        }        
      }

      std::cout << "answer is " << answer << std::endl;
      return answer;
    }

    // int from_roman(std::string rn){
    //   return 0;
    // }
} RomanNumerals;