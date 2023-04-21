#include "Key Logger.h"
using namespace std;

int main()
{
	//Path For Input : User Will Enter Where This File You Want To Be
	string path;
	cout << "Enter Path : ";
	getline(cin, path); //Get Path
	ofstream keyLog(path); //Create A File There
	string text;
	bool working = keyLog.is_open(); //Check If File Opened
	if (!working) //If Does Not Work
	{
		setColour("red");
		cout << "\nGiven Path Or Name Is Not Valid \n"; //Give This Error
		setColour("white");
		return 0; //End Program
	}
	else //If File Opened
	{
		while (true) //Loop Forever Until ESC Is Pressed
		{
			if (_kbhit()) //If A Key Is Pressed
			{
				int a = getch(); //Get Symbol's ASCII Code As Integer
				char symbol = a; //Attach Int To Charachter 
				keyLog << symbol; //Write This Char On File
				text += symbol; // Text For HTML
				if (a == 13) //Enter
				{
					cout << endl; //Skip To Next Line
				}
				else if (a == 27)//ESC
				{
					break; //Stop Repeating
				}
				else if (a == 9) //TAB
				{
					cout << "   [TAB]"; 
					keyLog << "[TAB]";
				}
				cout << symbol; //Show Symbol On Console
			}
		}
	}

	ofstream style("C:\\style.css"); //css File
	ofstream html("C:\\index.html"); //html File
	//css Code
	style << "body{background: linear-gradient(black,darkgreen,green);background-repeat: no-repeat;background-attachment: fixed;}#Welcome{border-style: solid;border-color: rgb(46, 98, 28);border-radius: 10px;text-align: center;color:darkgreen}.texts{border-style: solid;border-color: rgb(46, 98, 28);border-radius: 10px;text-align: center;color:rgb(70, 216, 116)}";
	//html Code
	html << "<!DOCTYPE html><html lang=en><head><meta charset=UTF-8><meta http-equiv=X-UA-Compatible content=IE=edge>   <meta name=viewport content=width=device-width, initial-scale=1.0><title>Key Logger</title><link rel=stylesheet href=style.css></head><body><div id=Welcome><h1 id=start> Welcome To KeyLogger Site!</h1><h2 id=start> This Is All The Information From Keylogger</h2></div><div class=texts><h1>" + text + "</h1></div></body></html>";
	return 0; //Stop Program
}
