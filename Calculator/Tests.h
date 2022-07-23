#pragma once
#include "wx\wx.h"
#include "../Calculator/Main.h"
#include "ButtonFactory.h"

namespace CalcTests {
	class Tests
	{
	public:
		static bool IsID1();
		static bool IsID2();
		static bool IsID3();
		static bool IsID4();
		static bool IsID5();
		static bool IsID6();
		static bool IsID7();
		static bool IsID8();
		static bool IsID9();
		static bool ButtonSize(wxButton* x, wxSize a);
	};
}

