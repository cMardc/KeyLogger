#include "Key Logger.h"
using namespace std;

int main()
{
	string path;
	cout << "Enter Path : ";
	getline(cin, path);
	ofstream keyLog(path);
	string text;
	bool working = keyLog.is_open();
	if (!working)
	{
		setColour("red");
		cout << "\nGiven Path Or Name Is Not Valid \n";
		setColour("white");
		return 0;
	}
	else
	{
		while (true)
		{
			if (_kbhit())
			{
				int a = getch();
				char symbol = a;
				keyLog << symbol;
				text += symbol;
				if (a == 13)
				{
					cout << endl;
				}
				else if (a == 27)
				{
					break;
				}
				else if (a == 9)
				{
					cout << "   [TAB]";
					keyLog << "[TAB]";
				}
				cout << symbol;
			}
		}
	}

	ofstream style("C:\\style.css");
	ofstream html("C:\\index.html");
	style << "body{background: linear-gradient(black,darkgreen,green);background-repeat: no-repeat;background-attachment: fixed;}#Welcome{border-style: solid;border-color: rgb(46, 98, 28);border-radius: 10px;text-align: center;color:darkgreen}.texts{border-style: solid;border-color: rgb(46, 98, 28);border-radius: 10px;text-align: center;color:rgb(70, 216, 116)}";
	html << "<!DOCTYPE html><html lang=en><head><meta charset=UTF-8><meta http-equiv=X-UA-Compatible content=IE=edge>   <meta name=viewport content=width=device-width, initial-scale=1.0><title>Key Logger</title><link rel=stylesheet href=style.css></head><body><div id=Welcome><h1 id=start> Welcome To KeyLogger Site!</h1><h2 id=start> This Is All The Information From Keylogger</h2></div><div class=texts><h1>" + text + "</h1></div></body></html>";
	return 0;
}