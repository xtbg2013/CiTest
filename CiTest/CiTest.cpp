// CiTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Calculator.h"
#include <iostream>
int main()
{
	Calculator cal;
	std::cout << "1+2 = " << cal.add(1, 2) << std::endl;
	std::cout << "2-1 = " << cal.sub(2, 1) << std::endl;
	int i = 0;
	std::cin >> i;
    return 0;
}

