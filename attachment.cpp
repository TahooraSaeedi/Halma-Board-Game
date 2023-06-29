//tabe baraye jabajaii makan nama
void gotoxy(int x, int y){
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD cursorCoord;
	cursorCoord.X = x;
	cursorCoord.Y = y;
	SetConsoleCursorPosition(consoleHandle, cursorCoord);
}

//tabe baraye ijad takhir dar ejtaye barname
void sleep(unsigned int mseconds){
	clock_t goal = mseconds + clock();
	while(goal>clock());
}

//tabe baraye taghir rang
void color(int textColor, int backColor ){
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int colorAttribute = backColor << 4 | textColor;
    SetConsoleTextAttribute(consoleHandle, colorAttribute);
}
