#include <Windows.h>

namespace DISPLAY {


	void displayTextColor(int color) {

		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)(color));
	}

	void displaySize(int x, int y) {

		COORD crd = { x, y };
		SMALL_RECT src = { 0, 0, crd.X, crd.Y };
		SetConsoleScreenBufferSize(GetStdHandle(STD_OUTPUT_HANDLE), crd);
		SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &src);

	}

}