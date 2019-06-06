#include <iostream>
#include <sstream>
#include <string>
#include <vector>

//电话薄
//zhangxin 17610082725 
//liming 15864715848 5181831
//xiaohong 13814172725 13916782279

struct PersonInfo {
	std::string name;
	std::vector<std::string> phones;
};

int main(int argc, char **argv)
{
	int i = 0;
	std::string line, word;
	std::vector<PersonInfo> people;

	while (std::getline(std::cin, line))
	{
		PersonInfo info;
		std::istringstream record(line);
		record >> info.name;
		while (record >> word)
		{
			info.phones.push_back(word);
		}
		people.push_back(info);

		std::cout << people[i].name << std::endl;
		i++;
	}

	system("pause");
	return 0;
}
