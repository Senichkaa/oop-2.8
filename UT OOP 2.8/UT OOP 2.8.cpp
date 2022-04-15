#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 2.8/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP28
{
	TEST_CLASS(UTOOP28)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction::LongLong g(6, 6), g1(4, 4);
			Assert::AreEqual(operator==(g, g1), false);
		}
	};
}
