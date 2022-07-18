#include "ButtonFactory.h"


void ButtonFactory::CreateButtons(wxFrame* Parent)
{
	Button1 = new wxButton(Parent, 1, "1", wxPoint(10, 315), wxSize(110, 75));
	Button2 = new wxButton(Parent, 2, "2", wxPoint(10, 400), wxSize(110, 75));
	Button3 = new wxButton(Parent, 3, "3", wxPoint(10, 485), wxSize(110, 75));
	Button4 = new wxButton(Parent, 4, "4", wxPoint(130, 315), wxSize(110, 75));
	Button5 = new wxButton(Parent, 5, "5", wxPoint(130, 400), wxSize(110, 75));
	Button6 = new wxButton(Parent, 6, "6", wxPoint(130, 485), wxSize(110, 75));
	Button7 = new wxButton(Parent, 7, "7", wxPoint(250, 315), wxSize(110, 75));
	Button8 = new wxButton(Parent, 8, "8", wxPoint(250, 400), wxSize(110, 75));
	Button9 = new wxButton(Parent, 9, "9", wxPoint(250, 485), wxSize(110, 75));
	Button10 = new wxButton(Parent, 10, "0", wxPoint(130, 570), wxSize(110, 75));
	Button11 = new wxButton(Parent, 11, "-", wxPoint(370, 570), wxSize(150, 75));
	Button12 = new wxButton(Parent, 12, "/", wxPoint(130, 230), wxSize(110, 75));
	Button13 = new wxButton(Parent, 13, "*", wxPoint(10, 230), wxSize(110, 75));
	Button14 = new wxButton(Parent, 14, "Clear", wxPoint(250, 230), wxSize(110, 75));
	Button15 = new wxButton(Parent, 15, "=", wxPoint(370, 420), wxSize(150, 140));
	Button16 = new wxButton(Parent, 16, "Binary", wxPoint(10, 145), wxSize(110, 75));
	Button17 = new wxButton(Parent, 17, "Hex", wxPoint(130, 145), wxSize(110, 75));
	Button18 = new wxButton(Parent, 18, "Decimal", wxPoint(250, 145), wxSize(110, 75));
	Button19 = new wxButton(Parent, 19, "+ / -", wxPoint(10, 570), wxSize(110, 75));
	Button20 = new wxButton(Parent, 20, "+", wxPoint(250, 570), wxSize(110, 75));
}
