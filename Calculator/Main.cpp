#include "Main.h"
#include "ButtonFactory.h"
#include "Processes.h"
#include <string>


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
	button.CreateButtons(this);
	//end of buttons needed
	//end of buttons needed
	//end of buttons needed
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
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("1");
			}
			break;
		case 2:
			Text->AppendText("2");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("2");
			}
			break;
		case 3:
			Text->AppendText("3");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("3");
			}
			break;
		case 4:
			Text->AppendText("4");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("4");
			}
			break;
		case 5:
			Text->AppendText("5");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("5");
			}
			break;
		case 6:
			Text->AppendText("6");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("6");
			}
			break;
		case 7:
			Text->AppendText("7");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("7");
			}
			break;
		case 8:
			Text->AppendText("8");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("8");
			}
			break;
		case 9:
			Text->AppendText("9");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("9");
			}
			break;
		case 10:
			Text->AppendText("0");
			if (a != NULL && b != NULL)
			{
				Text->Clear();
				b = NULL;
				Text->AppendText("0");
			}
			break;
		case 11:
			sym = "-";
			if (a == NULL)
			{
				a = std::stod(Text->GetValue().ToStdString());
				Text->Clear();
			}
			else 
			{
				b = std::stod(Text->GetValue().ToStdString());
				Text->SetValue(std::to_string(Processes::GetInstance()->calculation(a, b, sym)));
				a = std::stod(Text->GetValue().ToStdString());
				List->Append(std::to_string(a));
			}
			b = 1;
			break;
		case 12:
			sym = "/";
			if (a == NULL)
			{
				a = std::stod(Text->GetValue().ToStdString());
				Text->Clear();
			}
			else if (a != NULL)
			{
				Text->Clear();
				
			}
			else
			{
				b = std::stod(Text->GetValue().ToStdString());
					Text->SetValue(std::to_string(Processes::GetInstance()->calculation(a, b, "/")));
					a = std::stod(Text->GetValue().ToStdString());
					List->Append(std::to_string(a));
			}

			break;
		case 13:
			sym = "*";
			if (a == NULL)
			{
				a = std::stod(Text->GetValue().ToStdString());
				Text->Clear();
			}
			else
			{
				b = std::stod(Text->GetValue().ToStdString());
				Text->SetValue(std::to_string(Processes::GetInstance()->calculation(a, b, sym)));
				a = std::stod(Text->GetValue().ToStdString());
				List->Append(std::to_string(a));
			}
			b = 1;
			break;
		case 14:
			Text->Clear();
			List->Clear();
			a = NULL;
			b = NULL;
			break;
		case 15:
			if (a == NULL)
			{
				a = std::stod(Text->GetValue().ToStdString());
				Text->Clear();
			}
			else
			{
				b = std::stod(Text->GetValue().ToStdString());
				Text->SetValue(std::to_string(Processes::GetInstance()->calculation(a, b, sym)));
				a = std::stod(Text->GetValue().ToStdString());
				List->Append(std::to_string(a));
			}
			b = 1;
			break;
		case 16:
			a = std::stod(Text->GetValue().ToStdString());
			Text->Clear();
			List->Append(Processes::Binary(a));
			Text->AppendText(Processes::Binary(a));
			break;
		case 17:
			a = std::stod(Text->GetValue().ToStdString());
			Text->Clear();
			List->Append(Processes::Hex(a));
			Text->AppendText(Processes::Hex(a));
			break;
		case 18:
			if (a == NULL)
			{
				a = std::stod(Text->GetValue().ToStdString());
				Text->Clear();
				List->Append(std::to_string(a));
				Text->AppendText(std::to_string(a));
			}
			else
			{
				Text->Clear();
				List->Append(std::to_string(a));
				Text->AppendText(std::to_string(a));
			}
			break;
		case 19:
			sym = " ";
			if (a == NULL)
			{
				a = std::stod(Text->GetValue().ToStdString());
				Text->Clear();
			}
			else
			{
				b = std::stod(Text->GetValue().ToStdString());
				Text->SetValue(std::to_string(Processes::GetInstance()->calculation(a, b, " ")));
				a = std::stod(Text->GetValue().ToStdString());
				List->Append(std::to_string(a));
			}
			b = 1;
			break;
		case 20:
			sym = "+";
			if (a == NULL)
			{
				a = std::stod(Text->GetValue().ToStdString());
				Text->Clear();
			}
			else
			{
				b = std::stod(Text->GetValue().ToStdString());
				Text->SetValue(std::to_string(Processes::GetInstance()->calculation(a, b, sym)));
				a = std::stod(Text->GetValue().ToStdString());
				List->Append(std::to_string(a));
			}
			b = 1;
			break;

	}
}