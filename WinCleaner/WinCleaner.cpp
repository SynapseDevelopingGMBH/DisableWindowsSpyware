#include <iostream>
#include <string>
#include <fstream>
#include <conio.h>
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <cstdio>
#include <urlmon.h>
#include <io.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fstream>
#include <tchar.h>
#include <iostream>
#include <string>
#include <tchar.h> 
#include <urlmon.h>
#include <fstream>
#include <winuser.h>
#include <windows.h>
#include <chrono>
#include <ctime>


#pragma comment (lib,"urlmon.lib")

using namespace std;


void DisableDiag();

void Disable_ClipLogging();

void DisableSystemLog();

void DisableWinUPD();




int main()
{


	SetConsoleTitleA("SynapseDeveloping WindowsCleaner");
	system("color 6");
	system("cls");

	cout << "\nPlease Select one of this Options: \n";
	cout << "\n[1] Disable Windows Telemetry";
	cout << "\n[2] Disable Windows Clipboard logging";
	cout << "\n[3] Disable Windows File Logs";
	cout << "\n[4] Disable Windows Cosmetic Updates";
	cout << "\n[5] Enable Windows Enterprise ( Better Customer Privacy )";

	cout << "\n\n>>> ";

	string input;
	input = _getch();


	if (input == "1") {

		DisableDiag();

	}
	else if (input == "2") {

		Disable_ClipLogging();

	}
	else if (input == "3") {

		DisableSystemLog();

	}
	else if (input == "4") {

		DisableWinUPD();

	}
	else if (input == "5") {

		system("reg add HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\System\\ /v PrivacyMode /t REG_DWORD /d 1");
		system("cls");
		main();

		MessageBoxA(0, //Besitzer des Fensters 0 = kein Besitzer
			"Activated Windows Enterprise", //Text
			"Success", //Überschrift
			MB_OKCANCEL | MB_ICONINFORMATION); //Buttons und Icons

		main();

	}

	main();

}


void DisableDiag() {

	system("cls");
	system("python PY\\DiagTrack.py");
	system("cls");
	main();

}

void Disable_ClipLogging() {

	system("reg add HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\System\\ /v AllowClipboardHistory /t REG_DWORD /d 0");
	system("cls");
	main();

}

void DisableSystemLog() {

	system("cls");
	system("python PY\\DisSysLog.py");
	system("cls");
	main();

}


void DisableWinUPD() {


	system("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate\\Auto Update\" /v AUOptions /t REG_DWORD /d 1 /f");
	system("cls");
	main();


}