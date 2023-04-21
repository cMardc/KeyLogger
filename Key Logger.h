#pragma once

//Libraries
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include <string>
using namespace std;

//A Function That Will Help Us To Change Colour According To Situation
void setColour(string color)
{
	HANDLE col;
	col = GetStdHandle(STD_OUTPUT_HANDLE);
	int col_code = 7;
	if (color == "blue")
	{
		col_code = 1;
	}
	else if (color == "green")
	{
		col_code = 2;
	}
	else if (color == "cyan")
	{
		col_code = 3;
	}
	else if (color == "red")
	{
		col_code = 4;
	}
	else if (color == "purple")
	{
		col_code = 5;
	}
	else if (color == "darkYellow")
	{
		col_code = 6;
	}
	else if (color == "white")
	{
		col_code = 7;
	}
	else if (color == "grey")
	{
		col_code = 8;
	}
	else if (color == "brightBlue")
	{
		col_code = 9;
	}
	else if (color == "brightGreen")
	{
		col_code = 10;
	}
	else if (color == "brightCyan")
	{
		col_code = 11;
	}
	else if (color == "brightRed")
	{
		col_code = 12;
	}
	else if (color == "pink")
	{
		col_code = 13;
	}
	else if (color == "yellow")
	{
		col_code = 14;
	}
	else if (color == "brightWhite")
	{
		col_code = 15;
	}
	else
	{
		col_code = 7;
	}
	SetConsoleTextAttribute(col, col_code);
}
