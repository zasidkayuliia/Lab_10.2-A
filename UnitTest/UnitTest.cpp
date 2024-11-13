#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.2 A/Lab_10.2 A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            const int N = 3;
            Student students[N] = {
                {"Ivanov", 2, INFORMATUKA, 85, 90, 88},
                {"Petrenko", 3, MATEMATUKA_TA_EKONOMIKA, 78, 82, 80},
                {"Shevchenko", 1, FIZUKA_TA_INFORMATUKA, 92, 89, 95}
            };
            double avgScore = 95.0;

            int result = BinSearch(students, N, "Ivanov", 2, avgScore);

            Assert::AreEqual(-1, result, L"Expected student to not be found with different average score.");
		}
	};
}
