#include <iostream>
#include <string>
#include <cctype>

char *a = "love";

int main(int argc, char **argv)
{
	//1-定义与初始化sring对象
	std::string s1;								//默认初始化，s1是一个空字符串
	std::string s2(s1);							//s2是s1的副本, 或者拷贝初始化： string s2 = s1;
	std::string s3("zhangxin");			//s3是该字符串字面值的副本，或者拷贝初始化： string s3 = "zhangxin";
	std::string s4(10, 'c');					//s4内容是 ：cccccccccc
	std::string s5(s3, 2, 2);					//s5是s3从下标2开始的2个字符的拷贝
	std::string s6(s3, 2);						//s5是s3从下标2开始的字符的拷贝
	std::string s7(a, 3);						//s7是数组地址a中的前3个字符的拷贝

	//2-string对象的基本操作
	std::cout << "s3 is: "<< s3 << std::endl;										//打印字符串
	std::cout << "s4 is: " << s4 << std::endl;
	std::cout << "s5 is: " << s5 << std::endl;
	std::cout << "s6 is: " << s6 << std::endl;
	std::cout << "s7 is: " << s7 << std::endl;
	std::cout << "please enter a line of string." << std::endl;
	std::getline(std::cin, s1);																//从输入流获取一行字符串
	std::cout << "s1 is: "<<  s1 << std::endl;
	if (s2.empty()) {																			//判断是否是空字符串
		std::cout << "s2 is: empty." << std::endl;
	}
	std::cout << "s3's size is: " << s3.size() << std::endl;					//字符串字符的数量
	std::cout << "s3's zero: " << s3[0] << std::endl;							//字符串字符的索引
	std::cout << "s1 + s3: " << s1 + s3 << std::endl;						//字符串的拼接
	s3 = s1;																						//字符串对象的赋值
	std::cout << "new s3 is: " << s3 << std::endl;
	if (s1 == s3){																				//字符串的比较
		std::cout << "s1 == s3." << std::endl;
	}
	s1 = s1 + ",zhangxin.";																//字面值和string对象相加
	std::cout << "new s1 is: " << s1 << std::endl;							

	//3-处理string对象中的字符( 涉及语言和库的很多方面 )
	decltype(s1.size()) punct_cnt = 0;												//C++11类型的自动推导
	for (auto c : s1) {																			//C++11基于范围的for循环遍历
		if (ispunct(c))																			//cctype函数，统计标点符号字符的个数
		{
			++punct_cnt;
		}
	}
	std::cout <<"punctuation's number is: "<< punct_cnt<<  std::endl;

	s1[0] = toupper(s1[0]);																//cctype函数，将s1首字母大写表示
	std::cout << "s1 is: " << s1 << std::endl;

	for (auto &c : s1) {																	   //更改字符需要是引用形式
		c = toupper(c);																		   //cctype函数，将全部小写字母改为大写字母
	}
	std::cout << "s1 is: " << s1 << std::endl;

	//4-string库函数的操作
	s3 = s1.substr(2, 5);																	   //取s1的索引2开始的连续5个字符
	std::cout << "s3 is: " << s3 << std::endl;
	s1.erase(11);																				   //删除s1索引11及其后面的所有字符
	std::cout << "s1 is: " << s1 << std::endl;
	s1.insert(11,"XIN.");																	   //在s1索引11处植入字符
	std::cout << "s1 is: " << s1 << std::endl;
	s1.assign("Good morning.");													   //替换掉s1的全部内容
	std::cout << "s1 is: " << s1 << std::endl;
	s1.append("I am zhangxin.");												       //在s1的末尾追加字符串
	std::cout << "s1 is: " << s1 << std::endl;
	s1.replace(s1.size() - 9, 9, "liming.");										   //替换s1在索引处的后面9个字符
	std::cout << "s1 is: " << s1 << std::endl;

	auto pos1 = s1.find("liming", 2);											      //查找s1中liming第一次出现位置，返回搜索的string::size_type类型的索引值
	std::cout << "pos1 is: " << pos1 << std::endl;
	
	int i = 42;
	std::string s = std::to_string(i);													  //将数值类型转换为字符类型
	double d = std::stod(s);															  //将字符类型转换为数值类型
	
	system("pause");
	return 0;
}
