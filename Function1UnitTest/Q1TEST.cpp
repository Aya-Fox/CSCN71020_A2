#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Q1TEST
{
	TEST_CLASS(Q1TEST)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionality)
		{
			//Testing the perimeter function to make sure it is calculating the perimeter properly using 2 + 2 + 4 + 4 = 12
			int Result = 0;
			int a = 2;
			int b = 4;
			Result = getPerimeter(&a, &b);
			Assert::AreEqual(12, Result);
		}

		TEST_METHOD(AreaFunctionality)
		{
			//Testing the area function to make sure it is calculating the area properly using 2 * 4 = 8
			int Result = 0;
			int a = 2;
			int b = 4;
			Result = getArea(&a, &b);
			Assert::AreEqual(8, Result);
		}
	};
}
