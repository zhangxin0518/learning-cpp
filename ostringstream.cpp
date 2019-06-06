#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>


int main(int argc, char **argv)
{
	//打开文件操作
	std::string path = "c:/users/zhangxin/Desktop/world.txt";
	std::ifstream infile;
	infile.open(path, std::ifstream::in);
	if (infile.is_open()) {
		std::cout << "open file successfully." << std::endl;
	}else {
		std::cout << "open file failed." << std::endl;
	}

	//字符串输出流操作
	while (1)
	{
		std::string ss;
		std::getline(infile, ss);
		std::ostringstream st(ss);
		if ( infile.eof() )
		{
			break;
		}
		std::cout << st.str() << std::endl;
	}

	//关闭文件操作
	infile.close();

	system("pause");
	return 0;
}
