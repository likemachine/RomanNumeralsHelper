#include <iostream>
#include <string>
#include <vector>

struct NumLib {
  std::string roman;
  int  arab;
};

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
  
    std::string to_roman(unsigned int n){
      std::string answer = "";
      int b = n;

      for (int i = l - 1; i >= 0; i--) {
        int flag = 0;

      //std::cout << "Roman: " << num[i].roman << " Arabic: " << num[i].arab << std::endl;
        while (n >= num[i].arab) {
          n -= num[i].arab;
          answer += num[i].roman;
          flag++;
          if (flag > 3) {
            answer = answer.erase(1, 3);
            answer += num[i + 1].roman;
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