#include "pch.h"
#include "CppUnitTest.h"
#include "../TempConversion/TempConversion.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ConversionUnitTest
{
	TEST_CLASS(ConversionUnitTest)
	{
	public:
		
		TEST_METHOD(FarhToCel)
		{
			CTempConversion temp;
			
			Assert::AreEqual(
			0.0, temp.FarhToCelsius(32.0),
				0.1,
				L"Basic test failed",
				LINE_INFO());
		}
		
		TEST_METHOD(NegativeFarhToCel)
		{
			CTempConversion temp;

			Assert::AreEqual(
				-40.0, temp.FarhToCelsius(-40.0),
				0.1,
				L"Basic test failed",
				LINE_INFO());
		}
		
	};
}
