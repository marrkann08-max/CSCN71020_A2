#include "pch.h"
#include "CppUnitTest.h"
#include "..\BCSRec\main.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestGetPerimeter_ValidValues)
		{
			int length = 5;
			int width = 4;

			int result = getPerimeter(&length, &width);

			Assert::AreEqual(18, result);  // 2*(5+4)
		}

		TEST_METHOD(TestGetArea_ValidValues)
		{
			int length = 5;
			int width = 4;

			int result = getArea(&length, &width);

			Assert::AreEqual(20, result);  // 5*4
		}

		TEST_METHOD(TestSetLength_ValidInput)
		{
			int length = 10;

			setLength(25, &length);

			Assert::AreEqual(25, length);
		}

		TEST_METHOD(TestSetLength_MinBoundary)
		{
			int length = 10;

			setLength(1, &length);

			Assert::AreEqual(1, length);
		}

		TEST_METHOD(TestSetLength_InvalidInput)
		{
			int length = 10;

			setLength(120, &length);

			Assert::AreEqual(10, length);
		}

		TEST_METHOD(TestSetWidth_ValidInput)
		{
			int width = 10;

			setWidth(30, &width);

			Assert::AreEqual(30, width);
		}

		TEST_METHOD(TestSetWidth_MaxBoundary)
		{
			int width = 10;

			setWidth(99, &width);

			Assert::AreEqual(99, width);
		}

		TEST_METHOD(TestSetWidth_InvalidInput)
		{
			int width = 10;

			setWidth(0, &width);

			Assert::AreEqual(10, width);
		}

	};

}
