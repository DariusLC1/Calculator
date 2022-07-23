#include "../Calculator/Main.h"
#include "CppUnitTest.h"
#include "../Calculator/ButtonFactory.h"
#include "wx/wx.h"
#include "../Calculator/Processes.h"
#include "Tests.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalcTests
{
	TEST_CLASS(CalcTests)
	{
	public:
		TEST_METHOD(Math_Test1)
		{
			bool works;
			works = Tests::math();
			Assert::IsTrue(works);
		}
	};
}
