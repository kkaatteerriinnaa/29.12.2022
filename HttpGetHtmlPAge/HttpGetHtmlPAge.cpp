#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#pragma comment(lib, "urlmon.lib")
using namespace std;

int main()
{
	setlocale(0, "ru");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// the URL to download from 
	string srcURL = "https://bank.gov.ua/NBUStatService/v1/statdirectory/exchange?json";
	// the destination file 
	string destFile = "file.txt";
	//// URLDownloadToFile returns S_OK on success 
	if (S_OK == URLDownloadToFileA(NULL, srcURL.c_str(), destFile.c_str(), 0, NULL))
	{
		cout << "Saved to " << destFile << "\n";
	}
	else cout << "Fail!\n";
   
}