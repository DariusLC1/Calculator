#pragma once
#include "wx\wx.h"
#include "ButtonFactory.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
public:
	wxListBox* List = nullptr;
	wxTextCtrl* Text = nullptr;
	ButtonFactory button;
	double a = NULL;
	double b = NULL;
	std::string sym;
	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};