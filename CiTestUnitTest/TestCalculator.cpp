#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CiTest/Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CiTestUnitTest
{		
	TEST_CLASS(CalculatorTest)
	{
	public:
		
		TEST_METHOD(Add)
		{
			Calculator cal;
			Assert::AreEqual(3,cal.add(1,2));
		}

		TEST_METHOD(Sub)
		{
			Calculator cal;
			Assert::AreEqual(1, cal.sub(2, 1));
		}

	};
}