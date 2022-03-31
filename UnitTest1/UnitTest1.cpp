#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.h"
#include "../Complex.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex j,j1;
			j.Init(1, -1);
			j1.Init(2, -2);
		
			Assert::AreEqual(j.conj(j, j1).getX(), 1);
		}
	};
}
