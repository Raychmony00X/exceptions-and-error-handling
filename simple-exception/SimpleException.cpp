#include <iostream>
#include <string>
#include <Windows.h>

#include "BadLength.h"

int function(std::string str, int forbiddenLength)
{
	if (str.length() == forbiddenLength) throw BadLength();
	return str.length();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int forbiddenLenght;
	std::string word;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbiddenLenght;
	try
	{
		while(word.length() != forbiddenLenght)
		{
			std::cout << "Введите слово: ";
			std::cin >> word;
			std::cout << "Длина слова \"" << word << "\"" << " равна " 
				<< function(word, forbiddenLenght) << std::endl;
		}
	}
	catch (const BadLength& length) { std::cout << length.what() << std::endl; }


	return 0;
}