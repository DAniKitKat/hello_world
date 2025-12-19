#include "pch.h"
#include "CppUnitTest.h"
#include "..\\Задание\usefulFunctions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace Тест
{
	TEST_CLASS(Тест)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p = 234;
			double v = 10;
			double expected = 2340;
			double result = round(Newton::mass(p, v) * 1000) / 1000;
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(TestMethod2)
		{
			double m = 5;
			double expected = 49.03;
			double result = round(Newton::weight(m) * 100) / 100;
			Assert::AreEqual(expected, result);
		}
		TEST_METHOD(ErrorMethod1)
		{
			Assert::ExpectException<std::invalid_argument>(newtonMassFunction1);
		}
		TEST_METHOD(ErrorMethod2)
		{
			Assert::ExpectException<std::invalid_argument>(newtonForceFunction1);
		}
	private:
		static void newtonMassFunction1() {
			double p = 0;
			double v = 0;
			Newton::mass(p, v);
		}
		static void newtonForceFunction1() {
			double m = 12547;
			double acc = 2;
			Newton::force(m, acc);
		}
	};

}
