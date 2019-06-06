#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
  //定义输入文件流对象
  std::ifstream infile;
  //打开文件
  std::string file1 = "world.txt";
  infile.open("c:/users/zhangxin/Desktop/" + file1, std::ifstream::in );
  //打开成功与否判断
  if( infile.is_open() ){
    std::cout<< "open file successfully."<< std::endl;
  }else{
    std::cout<< "open file failed."<< std::endl;
  }
  //文件读取操作
  std::string ss;
  while( 1 )
  {
    infile >> ss;
    if( infile.eof() ){
      break;
    }
    std::cout<< ss<< std::endl;
  }
  //关闭文件
  infile.close();
  
  system("pause");
  return 0; 
}
