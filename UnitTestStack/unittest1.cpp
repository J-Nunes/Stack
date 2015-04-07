#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Stack/Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestStack
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Stack<int> stack;

			stack.pushBack(1);
			stack.pushBack(2);
			stack.pushBack(3);

			Assert::AreEqual((int)stack.getCapacity(), DYN_ARRAY_BLOCK_SIZE);
			Assert::AreEqual((int)stack.count(), 3);
		}

	};
}