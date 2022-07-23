#include "Tests.h"

namespace CalcTests 
{
	ButtonFactory t;
	bool Tests::IsID1()
	{
		if (t.Button1->GetId() == 1)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID2()
	{
		if (t.Button2->GetId() == 2)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID3()
	{
		if (t.Button3->GetId() == 3)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID4()
	{
		if (t.Button4->GetId() == 4)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID5()
	{
		if (t.Button5->GetId() == 5)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID6()
	{
		if (t.Button6->GetId() == 6)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID7()
	{
		if (t.Button7->GetId() == 7)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID8()
	{
		if (t.Button8->GetId() == 8)
		{
			return true;
		}
		else
			return false;
	}

	bool Tests::IsID9()
	{
		if (t.Button9->GetId() == 9)
		{
			return true;
		}
		else
			return false;
	}

	bool  Tests::ButtonSize(wxButton* x, wxSize a)
	{
		if (x->GetSize() == a)
		{
			return true;
		}
		else
			return false;
	}
}
