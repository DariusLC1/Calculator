#include "Tests.h"
namespace CalcTests
{
	bool Tests::Idcheck1(ButtonFactory *a)
	{
		if (a->Button1->GetId() == 1)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::math()
	{
		int a;
		a = Processes::GetInstance()->calculation(1, 2, "+");
		if (a == 3)
		{
			return true;
		}
		else
			return false;
	}
}
