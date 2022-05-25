#include "pch.h"
#include "CppUnitTest.h"
#include "../PKR6.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT61
{
	TEST_CLASS(UT61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Elem* t = new Elem;

			t->info = 1;

			Assert::AreEqual(t->info, 1);
		}
	};
}