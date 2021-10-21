// ConsoleApplication11.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// miciek nie zda =]

#include "pch.h"
#include <iostream>
#include <vector>

int main()
{
	std::cout << "I AM GOD and Miciek is my Adam i Ewa\n";

	std::vector<int>tab = { 1, 3, 5, 7 };
	std::cout << tab[0] << ", " << tab[1] << ", " << tab[2] << ", " << tab[3] << "\n ";
	for (int i = 0; i < tab.size(); i++)
	{
		std::cout << tab[i]<< ", ";
	}




}
