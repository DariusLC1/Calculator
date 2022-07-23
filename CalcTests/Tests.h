#pragma once
#include "../Calculator/ButtonFactory.h"
#include "wx/wx.h"
#include "../Calculator/Processes.h"

namespace CalcTests {
	class Tests
	{
	public:
		static bool Idcheck1(ButtonFactory *a);

		static bool math();
	};

}

