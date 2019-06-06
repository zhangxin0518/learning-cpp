#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
  //定义输出文件流对象
  std::ofstream outfile;
  //打开文件
  std::string file1 = "hello.txt";
  outfile.open("c:/users/zhangxin/Desktop/" + file1, std::ofstream::out | std::ofstream::app );
  //打开文件成功与否判断
  if( outfile.is_open() ){
    std::cout<< "open file successfully."<< std::endl;
  }else{
    std::cout<< "open file failed."<< std::endl;
  }
  //文件输出操作
  outfile<<"hello world"<< "\n"<<"I am zhangxin"<< "\n"<<"and you?"<< "\n";
  //关闭文件
  outfile.close();
  
  system("pause");
  return 0;
}
