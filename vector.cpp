#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
	//1-定义与初始化vector对象
	std::vector<int> v1;								//默认初始化，不含任何元素
	std::vector<int> v2(v1);						//拷贝初始化，v2等价于v3
	std::vector<int> v3 = v1;						//v2等价于v3
	std::vector<int> v4(5, 3);						//v4包含了5个重复的元素3
	std::vector<int> v5(3);							//v5包含了3个重复地执行了值初始化的对象
	std::vector<int> v6{ 1,2,3,4,5 };			//列表初始化，每个元素被赋予相应的初始值
	std::vector<int> v7 = { 1,2,3,4,5 };		//v6等价于v7

	//2-vector对象的基本操作
	std::cout << "v4 is: ";							//打印v4元素
	for ( auto i : v4 )									//获取容器的元素数量
	{
		std::cout <<  i << " ";
	}
	std::cout << std::endl;
	std::cout << "v5 is: ";							//打印v5元素
	for ( auto i : v5 )
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	std::cout << "v6 is: ";							//打印v6元素
	for ( auto i : v6 )
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	std::cout << "v7 is: ";							//打印v7元素
	for ( auto i : v7 )
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	if (v4.empty()) {									//判断v4是否为空
		std::cout << "v4 is empty." << std::endl;
	}

	v4.push_back(20);								//向v4末尾添加一个值为20的元素
	std::cout << "v4 is: ";						
	for (auto i : v4)									
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	v4.pop_back();										//取出v4末尾的一个元素
	std::cout << "v4 is: ";						
	for (auto i : v4)									
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	std::cout << "v6[3] is: " << v6[3] << std::endl;	//返回v6第3个位置上的元素值
	
	v5 = v4;												//用v4中的元素拷贝替换v5中的元素
	std::cout << "v5 is: ";				
	for (auto i : v5)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	v5 = { 5,4,3,2,1};									 //用列表中的元素拷贝替换v5中的元素
	std::cout << "v5 is: ";
	for (auto i : v5)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	if (v6 == v7) {										//v6等于v7，它们的元素数量相同且对应位置的元素值都相同
		std::cout << "v6 is equal to v7." << std::endl;
	}

	//3-vector对象的函数操作
	std::swap(v5, v6);									//交换v5和v6的元素
	std::cout << "v5 is: ";
	for (auto i : v5)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	std::cout << "v6 is: ";
	for (auto i : v6)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;	
	
	system("pause");
	return 0;
}


