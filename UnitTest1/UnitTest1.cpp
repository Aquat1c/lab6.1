#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1/lab6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[5]{ 1.4,-0.43,-1.9,1.2,1.1 };
			c = Sum(a, 5);
			Assert::AreEqual(c, 1);
		}
	};
}