int i5,j5,m5,n5;
int turn=2;
int computer=0;
int BeadsOrder=5;
int SizeOfBord=20;
int PlayerNum=2;
int FirstColor=1;
int SecondColor=4;
int LeaveCampValue=40;
int checkLeaveCampValue=-1;
int language=0;
int state[20][20];
void EBS();
void menu();

//struct PLAYER
struct PLAYER{
    char username[101];
    char password[101];
    int wins;
    int losses;
    int draws;
    int mode;
    int save;
    int PreviousGame[20][20];
    int player_turn;
    int player_LeaveCampValue;
}Playerslist[100],CurrentPlayer;

//struct GAME
struct GAME{
	int total;
	int wins;
	int losses;
	int draws;
}game;

//struct baraye behtarin va badtarin bazicon
struct STATISTICS{
    char username [101];
    int wins;
    int losses;
    int draws;
}BestPlayer,WorstPlayer;
