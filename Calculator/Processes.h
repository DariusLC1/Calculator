#pragma once
#include <string>
#include "Main.h"
#include "wx/wx.h"

class Processes
{
private:
	Processes() {}

	static Processes* Instance;
public:

	Processes(const Processes&) = delete;

	static Processes* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Processes;
		}
		return Instance;
	}
	
	Processes(Processes& other) = delete;
	void operator=(Processes& other) = delete;

	double calculation(double a, double b, std::string sym)
	{
		if (sym == "+")
			return a + b;
		else if (sym == "*")
			return a * b;
		else if (sym == "/")
			return a / b;
		else if (sym == "-")
			return a - b;
		else
			return (int)(a) % (int)(b);
	}

};