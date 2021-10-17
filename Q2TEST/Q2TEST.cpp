#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Q2TEST
{
	TEST_CLASS(Q2TEST)
	{
	public:
		
		TEST_METHOD(LengthLowerBoundsFunctionality)
		{
			//Testing the lower bounds of the set length function by passing the value 0
			int length;
			setLength(0, &length);
			Assert::AreNotEqual(0, length);
		}

		TEST_METHOD(LengthUpperBoundsFunctionality)
		{
			//Testing the upper bounds of the set length function by passing the value 100
			int length;
			setLength(100, &length);
			Assert::AreNotEqual(100, length);
		}

		TEST_METHOD(WidthLowerBoundsFunctionality)
		{
			//Testing the lower bounds of the set width function by passing the value 0
			int width;
			setWidth(0, &width);
			Assert::AreNotEqual(0, width);
		}

		TEST_METHOD(WidthUpperBoundsFunctionality)
		{
			//Testing the upper bounds of the set length function by passing the value 100
			int width;
			setWidth(100, &width);
			Assert::AreNotEqual(100, width);
		}

		TEST_METHOD(LengthOutputFunctionality)
		{
			//Testing the output of the length function by passing the value 10 and making sure the output is 10
			int length;
			setLength(10, &length);
			Assert::AreEqual(10, length);
		}

		TEST_METHOD(WidthOutputFunctionality)
		{
			//Testing the output of the width function by passing the value 10 and making sure the output is 10
			int width;
			setWidth(10, &width);
			Assert::AreEqual(10, width);
		}
	};
}
