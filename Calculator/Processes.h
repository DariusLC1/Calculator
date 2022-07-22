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
		{
			if (a == 0 && b == 0)
			{
				return 0;
			}
			else
				return a / b;
		}
		else if (sym == "-")
			return a - b;
		else
			return (int)(a) % (int)(b);
	}

	static std::string Binary(double number)
	{
		std::string results = "";
		for (int i = 0; i < 16; i++)
		{
			results = std::to_string((int)number % 2) + results;
			number = number / 2;
		}

		return results;
	}

	static std::string Hex(double number)
	{
		std::string result = "";

		while ((int)number > 0)
		{
			int remainder = (int)number % 16;

			if (remainder < 10) {
				result = std::to_string(remainder) + result;
			}
			else if (remainder == 10)
			{
				result = "A" + result;
			}
			else if (remainder == 11)
			{
				result = "B" + result;
			}
			else if (remainder == 12)
			{
				result = "C" + result;
			}
			else if (remainder == 13)
			{
				result = "D" + result;
			}
			else if (remainder == 14)
			{
				result = "E" + result;
			}
			else if (remainder == 15)
			{
				result = "F" + result;
			}

			number = number / 16;
		}

		return "0x" + result;
	}
};