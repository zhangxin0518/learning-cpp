#include <iostream>
#include <string>
#include <vector>

struct person {
	std::string name;
	int age;
};

int main(int argc, char **argv)
{
	std::vector<int> v7 = { 1,2,3,4,5 };	
	std::vector<person> v8 = { {"LiMing", 25}, {"ZhangXin", 24} };
	std::vector<int> v9(v7.begin(), v7.end()-2);								//迭代器的范围拷贝初始化，不要求容器类型必须相同

	//1-迭代器基本操作
	for (auto it = v9.cbegin(); it != v9.cend(); it++)							//利用迭代器遍历容器
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for (auto &it = v8.begin(); it != v8.end(); it++)							//迭代器的iterator类型，可读可写
	{
		std::cout << it->name <<" "<< (*it).age<< "\n";
		it->name = "Zhao yun";
		std::cout << it->name << " " << it->age << "\n";
	}

	for (auto it = v7.cbegin(); it != v7.cend(); it++)							//迭代器的const_iterator类型，只读
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for (auto it = v7.begin(); it != v7.begin() + v7.size() / 2; it++)	//迭代器的运算
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	for (auto it = v7.crbegin(); it != v7.crend(); it++)						//反向迭代器，const_reverse_iterator类型
	{
		std::cout<< *it<<" ";
	}
	std::cout<< std::endl;

	system("pause");
	return 0;
}


