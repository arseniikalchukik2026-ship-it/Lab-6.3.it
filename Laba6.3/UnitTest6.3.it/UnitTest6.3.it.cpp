#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Arseniy\Desktop\Project6\Laba6.3\Laba6.3\Laba6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab63Iterative
{
	TEST_CLASS(UnitTestLab63Iterative)
	{
	public:

		TEST_METHOD(TestSumOfIntArray)
		{
			const int n = 5;
			int a[n] = { 1, 2, 3, 4, 5 };

			int expected = 15; // 1 + 2 + 3 + 4 + 5
			int actual = Sum(a, n);

			Assert::AreEqual(expected, actual);
		}
	};
}