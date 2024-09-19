#include <iostream>
#include <clocale>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	std::cout << "Fala um nomero: ";
	std::cin >> num;
	if (num >= 0)
	{
		int teste = num - 3;
		std::cout << "Seu nomero menos " << teste << " é 3 !" << "\n";
	}
	else
	{
		int num2 = num * (-1) + 3;
		std::cout << "Seu nomero mais " << num2 << " é 3 !" << "\n";

	}
}
