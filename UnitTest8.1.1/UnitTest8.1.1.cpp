#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool c;
			int k = 0;
			int j = 0;
			int i = 0;
			char q1[] = "abc";
			char q[] = "abc";
			char str[] = "dasjasabc";
			c = Contain(q, q1, str);
			Assert::AreEqual(c, false);
		}
	};
}
