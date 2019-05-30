#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void getline(int num)
{
  std::ifstream ifs("./test_matrix.csv");
  std::string str;
  int iaa = 0;
  while(std::getline(ifs,str)) {
    std::string tmp;
    std::istringstream iss(str);
    if(iaa==num) {
      while(std::getline(iss,str,',')) {
        std::cout << str << std::endl;
      }
    }
    iaa++;
  }
}

int main()
{
  int num;
  num=2;
  getline(num);
  return 0;
}
