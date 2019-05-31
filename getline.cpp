#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void getline(int num)
{
  std::ifstream ifs("./test_matrix.csv");
  std::string str;
  int    line  = 0;
  int    count = 0;
  double hoge[10];
  while(std::getline(ifs,str)) {
    std::string tmp;
    std::istringstream iss(str);
    if(line==num) {
      while(std::getline(iss,str,',')) {
        hoge[count] = std::stoi(str);
        //        std::cout << str << std::endl;
        count++;
      }
    }
    line++;
  }
  for(int i=0;i<3;i++) {
  std::cout << hoge[i] << std::endl;
  }
}

int main(int argc, char* argv[])
{
  getline(std::stoi(argv[1]));
  return 0;
}
