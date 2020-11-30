#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_1_iter/Lab_08_1_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[101] = { "sad.asdg.sd.asdd.sa...sd." };
			char ch = '.';
			int t;
			t = Find(str, ch);
			Assert::AreEqual(t, 19);
		}
	};
}
