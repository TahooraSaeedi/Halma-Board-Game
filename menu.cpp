//tabe baraye gozine amar bazi
void GameStatistics(){
    char ch;
    int i;
    system("cls");
    if(language==0) printf("\n\n\n                        <<GAME STATISTICS>>                        \n\n      _________________________________________________\n\n");
    if(language==1) printf("\n\n\n                        <<AMAR BAZI>>                        \n\n      _________________________________________________\n\n");
    if(language==0) printf("      Total number of games played : %d\n\n",game.total);
    if(language==1) printf("      Tedad kol bazi haye anjam shode : %d\n\n",game.total);
    if(language==0) printf("      Total number of wins : %d\n\n",game.wins);
    if(language==1) printf("      Tedad kol bord ha : %d\n\n",game.wins);
    if(language==0) printf("      Total number of losses : %d\n\n",game.losses);
    if(language==1) printf("      Tedad kol bakht ha : %d\n\n",game.losses);
    if(language==0) printf("      Total number of draws : %d\n\n      _________________________________________________\n\n",game.draws);
    if(language==1) printf("      Tedad kol tasavi ha : %d\n\n      _________________________________________________\n\n",game.draws);
    //meghdardahi avalie
    strcpy(BestPlayer.username,Playerslist[0].username);
    BestPlayer.wins=Playerslist[0].wins;
    BestPlayer.losses=Playerslist[0].losses;
    BestPlayer.draws=Playerslist[0].draws;
    strcpy(WorstPlayer.username,Playerslist[0].username);
    WorstPlayer.wins=Playerslist[0].wins;
    WorstPlayer.losses=Playerslist[0].losses;
    WorstPlayer.draws=Playerslist[0].draws;

    for(i=0;i<100;i++){
    	if(Playerslist[i].username[0]!='\0'){
        if(Playerslist[i].wins>BestPlayer.wins){
            strcpy(BestPlayer.username,Playerslist[i].username);
            BestPlayer.wins=Playerslist[i].wins;
            BestPlayer.losses=Playerslist[i].losses;
            BestPlayer.draws=Playerslist[i].draws;
        }
        if(Playerslist[i].wins==BestPlayer.wins){
            if(Playerslist[i].draws>WorstPlayer.draws){
                strcpy(BestPlayer.username,Playerslist[i].username);
                BestPlayer.wins=Playerslist[i].wins;
                BestPlayer.losses=Playerslist[i].losses;
                BestPlayer.draws=Playerslist[i].draws;
            }
            if(Playerslist[i].draws==BestPlayer.draws){
                if(Playerslist[i].losses<WorstPlayer.losses){
                    strcpy(WorstPlayer.username,Playerslist[i].username);
                    BestPlayer.wins=Playerslist[i].wins;
                    BestPlayer.losses=Playerslist[i].losses;
                    BestPlayer.draws=Playerslist[i].draws;
                }
            }
        }
    }
	}
    if(language==0) printf("      The best Player is : %s\n\n      Number of wins : %d\n\n      Number of losses : %d\n\n      Number of draws : %d\n\n      _________________________________________________\n\n",BestPlayer.username,BestPlayer.wins,BestPlayer.losses,BestPlayer.draws);
    if(language==1) printf("      Behtarin bazikon : %s\n\n      Tedad bord ha : %d\n\n      Tedad bakht ha : %d\n\n      Tedad tasavi ha : %d\n\n      _________________________________________________\n\n",BestPlayer.username,BestPlayer.wins,BestPlayer.losses,BestPlayer.draws);
    for(i=0;i<100;i++){
    	if(Playerslist[i].username[0]!='\0'){
        if(Playerslist[i].wins<WorstPlayer.wins){
            strcpy(WorstPlayer.username,Playerslist[i].username);
            WorstPlayer.wins=Playerslist[i].wins;
            WorstPlayer.losses=Playerslist[i].losses;
            WorstPlayer.draws=Playerslist[i].draws;
        }
        if(Playerslist[i].wins==WorstPlayer.wins){
            if(Playerslist[i].draws<WorstPlayer.draws){
                strcpy(WorstPlayer.username,Playerslist[i].username);
                WorstPlayer.wins=Playerslist[i].wins;
                WorstPlayer.losses=Playerslist[i].losses;
                WorstPlayer.draws=Playerslist[i].draws;
            }
            if(Playerslist[i].draws==WorstPlayer.draws){
                if(Playerslist[i].losses>WorstPlayer.losses){
                    strcpy(WorstPlayer.username,Playerslist[i].username);
                    WorstPlayer.wins=Playerslist[i].wins;
                    WorstPlayer.losses=Playerslist[i].losses;
                    WorstPlayer.draws=Playerslist[i].draws;
                }
            }
        }
    }
	}
    if(language==0) printf("      The worst Player is : %s\n\n      Number of wins : %d\n\n      Number of losses : %d\n\n      Number of draws : %d\n\n      _________________________________________________\n\n      Please <Press Backspace> to return to the menu.",WorstPlayer.username,WorstPlayer.wins,WorstPlayer.losses,WorstPlayer.draws);
    if(language==1) printf("      Zaiftarin bazikon : %s\n\n      Tedad bord ha : %d\n\n      Tedad bakht ha : %d\n\n      Tedad tasavi ha : %d\n\n      _________________________________________________\n\n      Baraye bazgasht be menu <Backspace> ra bezanid.",WorstPlayer.username,WorstPlayer.wins,WorstPlayer.losses,WorstPlayer.draws);
    do{
       ch=getch();
    }while(ch!='\b');
    system("cls");
    menu();
}

//tabe baraye gozine amar bazikon
void PlayerStatistics(){
    char ch;
    if(language==0) printf("\n\n\n                        <<PLAYER STATISTICS>>                        \n\n      _________________________________________________\n\n");
    if(language==1) printf("\n\n\n                        <<AMAR BAZIKON>>                        \n\n      _________________________________________________\n\n");
    if(language==0) printf("      Number of wins : %d\n\n      Number of losses : %d\n\n      Number of draws : %d\n\n      _________________________________________________\n\n      Please <Press Backspace> to return to the menu.",CurrentPlayer.wins,CurrentPlayer.losses,CurrentPlayer.draws);
    if(language==1) printf("      Tedad bord ha : %d\n\n      Tedad bakht ha : %d\n\n      Tedad tasavi ha : %d\n\n      _________________________________________________\n\n      Baraye bazgasht be menu <Backspace> ra bezanid.",CurrentPlayer.wins,CurrentPlayer.losses,CurrentPlayer.draws);
    do{
        ch=getch();
    }while(ch!='\b');
    system("cls");
    menu();
}

//tabe baraye gozine bazi ba computer
void NumberOfPlayers(){
    char ch;
    if(language==0) printf("\n\n\n                        <<PLAY WITH COMPUTER>>                        \n\n\n");
    if(language==1) printf("\n\n\n                        <<BAZI BA COMPUTER>>                        \n\n\n");
    if(language==0) printf("      The number of players is two!\n\n      If you want to play with the computer , <Press 1> otherwise <Press 2>!");
    if(language==1) printf("      Tedad bazikon ha do nafar ast!\n\n      agar ghasd darid ba computer bazi konid <1> ra vared konid , dar gheyr in soorat <2> ra vared konid!");
    do{
        ch=getch();
    }while(ch!='1'&&ch!='2');
    if(ch=='1'){
        computer=1;
    }
    if(ch=='2'){
        computer=0;
    }
}

//tabe baraye gozine bazi ghabli
void PreviousGame(){
    char ch;
    int i,j;
    if(language==0) printf("\n\n\n                        <<CONTINUE YOUR PREVIOUS GAME>>                        \n\n\n");
    if(language==1) printf("\n\n\n                        <<EDAME DADAN BAZI GHABLI>>                        \n\n\n");
    if(language==0) printf("      If you want to continue your previous game , <Press 1> Or Please <Press Backspace> to return to the menu.");
    if(language==1) printf("      Agar ghasd darid bazi zakhire shode ghabli khod ra edame dahid <1> ra vared konid , dar gheyr in soora lotfan <2> ra bezanid te be menu bazgardid.");
    do{
        ch=getch();
    }while(ch!='1'&&ch!='\b');
    if(ch=='1'){
        if(CurrentPlayer.save==1){
            for(i=0;i<20;i++){
                for(j=0;j<20;j++){
                    state[i][j]=CurrentPlayer.PreviousGame[i][j];
                }
            }
            turn=CurrentPlayer.player_turn;
            checkLeaveCampValue=CurrentPlayer.player_LeaveCampValue;
            computer=CurrentPlayer.mode;
        }
        else{
            if(language==0) printf("\n\n\n      You dont have a saved game!\n\n\n      Please wait ...");
            if(language==1) printf("\n\n\n      Shoma bazi zakhire shode nadarid!\n\n\n      Lotfan sabr konid ...");
            sleep(3000);
            system("cls");
            menu();
        }
    }
    if(ch=='\b'){
        system("cls");
        menu();
    }
}

//tabe baraye menu bazi
void menu(){
    int check;
    char ch;
    printf("\n\n\n                        <<MENU>>                        \n\n\n\n");
    if(language==0) printf("      <PRESS 1>                                             <PRESS 2>\n\n");
    if(language==1) printf("      <1>                                                   <2>\n\n");
    if(language==0) printf("       Start new game                                        Continue the previous game\n\n\n\n");
    if(language==1) printf("       Shoroe bazi jadid                                     Edame dadan bazi ghabli\n\n\n\n");
    if(language==0) printf("      <PRESS 3>                                             <PRESS 4>\n\n");
    if(language==1) printf("      <3>                                                   <4>\n\n");
    if(language==0) printf("       Game Statistics                                       Player Statistics\n\n\n\n");
    if(language==1) printf("       Amar bazi                                             Amar bazikon\n\n\n\n");
    if(language==0) printf("      <PRESS 5>                                             <PRESS 6>\n\n");
    if(language==1) printf("      <5>                                                   <6>\n\n");
    if(language==0) printf("       Change language                                       Communication with directors\n\n\n\n");
    if(language==1) printf("       Tghir zaban                                           Ertebat ba tahiyekonandegan\n\n\n\n");
    if(language==0) printf("      <PRESS 7>                                             \n\n");
    if(language==1) printf("      <7>                                                   \n\n");
    if(language==0) printf("       Exit                                                 \n\n\n\n");
    if(language==1) printf("       Khoroj                                               \n\n\n\n");
	do{
        ch=getch();
    }while(ch!='1'&&ch!='2'&&ch!='3'&&ch!='4'&&ch!='5'&&ch!='6'&&ch!='7');
    system("cls");
    if(ch=='3'){
        GameStatistics();
    }
    if(ch=='4'){
        PlayerStatistics();
    }
    if(ch=='2'){
        PreviousGame();
    }
    if(ch=='1'){
        NumberOfPlayers();
    }
    if(ch=='5'){
    	GameLanguage();
	}
	if(ch=='6'){
		directors();
	}
	if(ch=='7'){
		GameInformation2();
		exit(0);
	}
}

//taeb baraye edame bazi , bazgasht be menu bedoon save bazi , ba save bazi
void EBS(){
	if(language==0) printf("\n      <Enter>\n      to continue\n\n      <Backspace>\n      to exit the game and return to the menu\n\n      <Tab>\n      to save the game and return to the menu");
	if(language==1) printf("\n      <Enter>\n      Baraye edame dadan\n\n      <Backspace>\n      Barye khoroj az bazi va bazgasht be menu\n\n      <Tab>\n      Baraye zakhire bazi va khoroj az bazi va bazgasht be menu");
	char n;
	do{
		n=getch();
	}while(n!=13&&n!='\b'&&n!=9);
	if(n=='\b'){
		system("cls");
		initialization(state);
		turn=2;
		checkLeaveCampValue=-1;
		menu();
	}
	if(n==9){
		for(int i=0;i<20;i++){
			for(int j=0;j<20;j++){
				CurrentPlayer.PreviousGame[i][j]=state[i][j];
			}
		}
		CurrentPlayer.player_turn=turn;
        CurrentPlayer.player_LeaveCampValue=checkLeaveCampValue;
        CurrentPlayer.mode=computer;
        CurrentPlayer.save=1;
        GameInformation2();
		system("cls");
		initialization(state);
		turn=2;
		checkLeaveCampValue=-1;
		menu();
	}
}
