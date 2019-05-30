#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main()
{
  std::ifstream ifs("./test_matrix.csv");
  std::string str;
  int iaa = 0;
  while(std::getline(ifs,str)) {
    std::string tmp;
    std::istringstream iss(str);
    if(iaa==3) {
      while(std::getline(iss,str,',')) {
        std::cout << str << std::endl;
      }
    }
    iaa++;
  }

  return 0;
}
