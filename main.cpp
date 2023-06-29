#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include "variables.cpp"
#include "attachment.cpp"
#include "bord.cpp"
#include "move.cpp"
#include "movecomp.cpp"
#include "file.cpp"
#include "rules.cpp"
#include "extra.cpp"
#include "start.cpp"
#include "menu.cpp"

//tabe baraye chap safhe rahnama
void guide(){
	system("color F0");
	color(0, 15);
   	if(language==0) printf("\n\n\n                        << WELLCOME TO THE GAME >>                   \n\n\n");
   	if(language==1) printf("\n\n\n                        << BE BAZI KHOSH AMADID >>                   \n\n\n");
   	if(language==0) printf("      GUIDE:\n\n");
   	if(language==1) printf("      RAHNAMA:\n\n");
   	if(language==0) printf("      In each level of the game,you need to give us two coordinates.\n\n");
   	if(language==1) printf("      Dar har marhale az bazi,shoma bayad do mokhtasat az safhe ra vared konid.\n\n");
   	if(language==0) printf("      In this game:\n\n      Press <Enter> to continue.\n\n      Press <Backspace> to exit the game and return to the menu.\n\n      Press <Tab> to save the game and return to the menu.\n\n      Enjoy!");
   	if(language==1) printf("      Dar in bazi:\n\n      Baraye edame dadan <Enter> ra bezabid.\n\n      Baraye khoroj az bazi va bazgasht be menu <Backspace> ra bezanid.\n\n      Baraye zakhire bazi va khoroj az bazi va bazgasht be menu <Tan> ra bezanid.\n\n      Az bazi lezat bebarid!");
	char ch;
   	do{
		ch=getch();
	}while(ch!=13);
	system("cls");
}

//tabe asli
int main(){
	int x;
	srand(time(NULL));
	config();
	GameInformation1();
	initialization(state);
	specialeffects();
	guide();
	start();
	int check1=0,check2=0;
	system("cls");
	bord();
	printf("\n");
	while (1) {
		x=changeturn();
		if((computer==1&&turn==1)||(computer==0)){
		if(x==LeaveCampValue)specialrule();
		check1=move();//ya 1 ast ya 0 , agar 1 bashad yani harkat jump ast , agar 0 bashad yani harkat jump nist
		winner();
		EBS();
		system("cls");
		bord();
		printf("\n");
		if(check1==1){
			do{
				check2=extramovement();//ya 1 ast ya 0 , agar 1 bashad yani yes , agar 0 bashad yani no
				if(check2==1){
					jumpmove();
					winner();
					EBS();
					system("cls");
					bord();
					printf("\n");
				}
			}while(check2==1);
			printf("\n");
		}
		if(computer==1) x=changeturn();
		}
		if(computer==1&&turn==2){
			if(x==LeaveCampValue) specialrule();
			check1=movecomp();//ya 1 ast ya 0 , agar 1 bashad yani harkat jump ast , agar 0 bashad yani harkat jump nist
			winner();
			gotoxy(0,2*SizeOfBord+5);
			if(language==0) printf("      Player %d\n",turn);
			if(language==1) printf("      Bazikon %d\n",turn);
            if(language==0) printf("      Please wait for the computer to play the game!");
            if(language==1) printf("      Lotfan sabr konid ta computer bazi ra anjam dahad!");
            sleep(1000);
			system("cls");
			bord();
			printf("\n");
			if(check1==1){
				do{
					check2=extramovementcomp();//ya 1 ast ya 0 , agar 1 bashad yani yes , agar 0 bashad yani no
					if(check2==1){
						jumpmovecomp();
						winner();
						gotoxy(0,2*SizeOfBord+5);
			            if(language==0) printf("      Player %d\n",turn);
			            if(language==1) printf("      Bazikon %d\n",turn);
                        if(language==0) printf("      Please wait for the computer to play the game!");
                        if(language==1) printf("      Lotfan sabr konid ta computer bazi ra anjam dahad!");
            			sleep(2000);
						system("cls");
						bord();
						printf("\n");
					}
				}while(check2==1);
				printf("\n");
			}
		}
	}
	return 0;
}
