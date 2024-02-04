#include <iostream>
#include <string>
#include <vector>

struct NumLib {
  std::string roman;
  int  arab;
};

class RomanHelper{
  public:
    NumLib num1 = {"I", 1};
    NumLib num2 = {"V", 5};
    NumLib num3 = {"X", 10};
    NumLib num4 = {"L", 50};
    NumLib num5 = {"C", 100};
    NumLib num6 = {"D", 500};
    NumLib num7 = {"M", 1000};
  
    std::vector<NumLib> nums = {num1, num2, num3, num4, num5, num6, num7};
    std::string answer;  
  
    std::string to_roman(unsigned int n){
      for (auto &num : nums) {
       std::cout << "Roman: " << num.roman << " Arabic: " << num.arab << std::endl;
        if (n / num.arab == 1)
          return num.roman;
      }
      std::cout << n << std::endl;
      return answer;
    }
    // int from_roman(std::string rn){
    //   return 0;
    // }
} RomanNumerals;