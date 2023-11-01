#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int evenArray[] = { 2, 4, 6, 8, 10 };
			int evenArraySize = 5;
			Assert:(arithmeticmean(evenArray, evenArraySize) == 0.0);
		}
	};
}
