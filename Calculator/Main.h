#pragma once
#include "wx\wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
public:
	wxButton* Button = nullptr;
	wxListBox* List = nullptr;
	wxTextCtrl* Text = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};