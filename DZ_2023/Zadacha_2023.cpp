#include <iostream>
int main() 
{
	setlocale(LC_ALL, "RU");
	const int TEMP = 2;
	int total = 1, arrT[TEMP] {0,0};

		for (int qq = 0; qq <= TEMP; qq++)
		{
			std::cout << "ввод числа - ";
			std::cin >> total;

//			if (TEMP>-1)
//			{
				total = arrT[qq];

//			}	
		}
		std::cout << "сведение - " << total;
			
		

}


