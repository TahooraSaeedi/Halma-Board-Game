//tabe baraye khandan etelaat az file config
void config(){
	FILE *ConfigFile=fopen("config.txt","rt");
	int i;
	char string[100];
	fgets(string,2,ConfigFile);
	for(i=0;i<=6;i++){
		fgets(string,100,ConfigFile);
		if(strstr(string,"Size")!=0){
			int a=string[8]-'0';
			if(string[9]!=32){
				int b=string[9]-'0';
				SizeOfBord=a*10+b;
			}
			else{
				SizeOfBord=a;
			}
		}
		if(strstr(string,"Player_Num")!=0){
			PlayerNum=string[14]-'0';
			
		}
		if(strstr(string,"First_Color")!=0){
			if(string[15]=='g') FirstColor=2;
			if(string[15]=='b') FirstColor=1;
			if(string[15]=='r') FirstColor=4;
			if(string[15]=='y') FirstColor=14;
		}
		if(strstr(string,"Second_Color")!=0){
			if(string[16]=='g') SecondColor=2;
			if(string[16]=='b') SecondColor=1;
			if(string[16]=='r') SecondColor=4;
			if(string[16]=='y') SecondColor=14;
		}
		if(strstr(string,"leave_camp_value")!=0){
			int a=string[20]-'0';
			if(48<=string[21]&&string[21]<=57){
				int b=string[21]-'0';
				LeaveCampValue=a*10+b;
			}
			else{
				LeaveCampValue=a;
			}
		}
		if(strstr(string,"Beads_order")!=0){
      		BeadsOrder=string[15]-'0';
      		int i;
      		for(i=15;string[i];i++){
        		if(string[i]!=' '){
          			if((string[i]-'0')>=BeadsOrder) BeadsOrder=string[i]-'0';
        		}
      		}  
    	}
	}
}

//daryaft etelaat playerha va bazi az file
void GameInformation1(){
    int i;
    for(i=0;i<100;i++){
		Playerslist[i].username[0]='\0';
		Playerslist[i].password[0]='\0';
		Playerslist[i].wins=0;
		Playerslist[i].losses=0;
		Playerslist[i].draws=0;
		Playerslist[i].mode=0;
		Playerslist[i].save=0;
		initialization(Playerslist[i].PreviousGame);
		Playerslist[i].player_turn=2;
		Playerslist[i].player_LeaveCampValue=0;
	}
	game.total=0;
	game.wins=0;
	game.losses=0;
	game.draws=0;
	FILE *PlayersList=fopen("PlayersList.dat","rb");
	fread(Playerslist,sizeof(struct PLAYER),100,PlayersList);
	fclose(PlayersList);
	FILE *Game=fopen("Game.dat","rb");
	fread(&game,sizeof(struct GAME),1,Game);
	fclose(Game);
}

//zakhire etelaat player ha va bazi dar file
void GameInformation2(){
	for(int i=0;i<100;i++){
		if(strcmp(Playerslist[i].username,CurrentPlayer.username)==0&&strcmp(Playerslist[i].password,CurrentPlayer.password)==0){
			Playerslist[i].wins=CurrentPlayer.wins;
			Playerslist[i].losses=CurrentPlayer.losses;
			Playerslist[i].draws=CurrentPlayer.draws;
			Playerslist[i].save=CurrentPlayer.save;
			Playerslist[i].mode=CurrentPlayer.mode;
			Playerslist[i].player_turn=CurrentPlayer.player_turn;
			Playerslist[i].player_LeaveCampValue=CurrentPlayer.player_LeaveCampValue;
			for(int j=0;j<20;j++){
				for(int k=0;k<20;k++){
					Playerslist[i].PreviousGame[j][k]=CurrentPlayer.PreviousGame[j][k];
				}
			}
		}
	}
	FILE *PlayersList=fopen("PlayersList.dat","wb");
	fwrite(Playerslist,sizeof(struct PLAYER),100,PlayersList);
	fclose(PlayersList);
	FILE *Game=fopen("Game.dat","wb");
	fwrite(&game,sizeof(struct GAME),1,Game);
	fclose(Game);
}
