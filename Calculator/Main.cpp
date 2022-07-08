#include "Main.h"


wxBEGIN_EVENT_TABLE(Main, wxFrame)
EVT_BUTTON(1, OnButtonClicked)
EVT_BUTTON(2, OnButtonClicked)
EVT_BUTTON(3, OnButtonClicked)
EVT_BUTTON(4, OnButtonClicked)
EVT_BUTTON(5, OnButtonClicked)
EVT_BUTTON(6, OnButtonClicked)
EVT_BUTTON(7, OnButtonClicked)
EVT_BUTTON(8, OnButtonClicked)
EVT_BUTTON(9, OnButtonClicked)
EVT_BUTTON(10, OnButtonClicked)
EVT_BUTTON(11, OnButtonClicked)
EVT_BUTTON(12, OnButtonClicked)
EVT_BUTTON(13, OnButtonClicked)
EVT_BUTTON(14, OnButtonClicked)
EVT_BUTTON(15, OnButtonClicked)
EVT_BUTTON(16, OnButtonClicked)
EVT_BUTTON(17, OnButtonClicked)
EVT_BUTTON(18, OnButtonClicked)
EVT_BUTTON(19, OnButtonClicked)
EVT_BUTTON(20, OnButtonClicked)
wxEND_EVENT_TABLE()


Main::Main() : wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(30, 30), wxSize(550, 700))
{
	Button = new wxButton(this, 1, "1", wxPoint(10, 315), wxSize(110, 75));
	Button = new wxButton(this, 2, "2", wxPoint(10, 400), wxSize(110, 75));
	Button = new wxButton(this, 3, "3", wxPoint(10, 485), wxSize(110, 75));
	Button = new wxButton(this, 4, "4", wxPoint(130, 315), wxSize(110, 75));
	Button = new wxButton(this, 5, "5", wxPoint(130, 400), wxSize(110, 75));
	Button = new wxButton(this, 6, "6", wxPoint(130, 485), wxSize(110, 75));
	Button = new wxButton(this, 7, "7", wxPoint(250, 315), wxSize(110, 75));
	Button = new wxButton(this, 8, "8", wxPoint(250, 400), wxSize(110, 75));
	Button = new wxButton(this, 9, "9", wxPoint(250, 485), wxSize(110, 75));
	Button = new wxButton(this, 10, "0", wxPoint(130, 570), wxSize(110, 75));
	Button = new wxButton(this, 11, "-", wxPoint(370, 570), wxSize(150, 75));
	Button = new wxButton(this, 12, "/", wxPoint(130, 230), wxSize(110, 75));
	Button = new wxButton(this, 13, "x", wxPoint(10, 230), wxSize(110, 75));
	Button = new wxButton(this, 14, "Clear", wxPoint(250, 230), wxSize(110, 75));
	Button = new wxButton(this, 15, "=", wxPoint(370, 420), wxSize(150, 140));
	Button = new wxButton(this, 16, "Binary", wxPoint(10, 145), wxSize(110, 75));
	Button = new wxButton(this, 17, "Hex", wxPoint(130, 145), wxSize(110, 75));
	Button = new wxButton(this, 18, "Decimal", wxPoint(250, 145), wxSize(110, 75));
	Button = new wxButton(this, 19, "+ / -", wxPoint(10, 570), wxSize(110, 75));
	Button = new wxButton(this, 20, "+", wxPoint(250, 570), wxSize(110, 75));
	List = new wxListBox(this, wxID_ANY, wxPoint(370, 10), wxSize(150, 400));
	Text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(350, 120));
}

Main::~Main()
{
	
}

void Main::OnButtonClicked(wxCommandEvent& evt)
{
	switch (evt.GetId())
	{
		case 1:
			Text->AppendText("1");
			break;
		case 2:
			Text->AppendText("2");
			break;
		case 3:
			Text->AppendText("3");
			break;
		case 4:
			Text->AppendText("4");
			break;
		case 5:
			Text->AppendText("5");
			break;
		case 6:
			Text->AppendText("6");
			break;
		case 7:
			Text->AppendText("7");
			break;
		case 8:
			Text->AppendText("8");
			break;
		case 9:
			Text->AppendText("9");
			break;
		case 10:
			Text->AppendText("0");
			break;
		case 11:
			Text->AppendText("-");
			break;
		case 12:
			Text->AppendText("/");
			break;
		case 13:
			Text->AppendText("x");
			break;
		case 14:
			Text->AppendText("Clear");
			break;
		case 15:
			Text->AppendText("=");
			break;
		case 16:
			Text->AppendText("Binary");
			break;
		case 17:
			Text->AppendText("Hex");
			break;
		case 18:
			Text->AppendText("Decimal");
			break;
		case 19:
			Text->AppendText("+ / -");
			break;
		case 20:
			Text->AppendText("+");
			break;

	}
}