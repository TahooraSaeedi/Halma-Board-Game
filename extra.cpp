//tabe baraye jelve haye Vizhe
void specialeffects(){
    system("color F0");
    sleep(500);
    int i;
    for(i=0;i<200;i++){
    printf("   \n\n\n\n\n\n\n");
    if(i%5==4) color(8,15);
    else color(15,15);
    printf("             /            ");
    printf("                                                               \\   \n");
    if(i%5==3) color(8,15);
    else color(15,15);
    printf("            \\             ");
    printf("                                                                /  \n");
    if(i%5==2) color(8,15);
    else color(15,15);
    printf("             /            ");
    printf("                                                               \\  \n");//2
    if(i%5==1) color(8,15);
    else color(15,15);
    printf("            \\             ");
    color(0,15);
    printf("   %c%c%c   %c%c%c           %c%c%c",218,196,191,218,196,191,218,196,191);//8
    if(i%5==1) color(8,15);
    else color(15,15);
    printf("                                      /                 \n");//2
    if(i%5==0) color(8,15);
    else color(15,15);
    printf("             /            ");
    color(0,15);
    printf("   %c %c   %c %c %c%c%c%c%c%c%c%c%c %c %c             %c%c%c%c%c%c%c%c%c",179,179,179,179,218,196,196,196,196,196,196,196,191,179,179,218,196,196,196,196,196,196,196,191);//7
    if(i%5==0) color(8,15);
    else color(15,15);
    printf("               \\                 \n");//2
    color(4,15);
    printf("           \\  /           ");
    color(0,15);//
    printf("   %c %c   %c %c %c%c%c%c%c%c%c %c %c %c %c%c%c         %c%c%c%c%c%c%c %c",179,179,179,179,192,196,196,196,196,196,191,179,179,179,218,196,191,192,196,196,196,196,196,191,179);//6
    color(4,15);
    printf("              \\");//2
    printf("  /               \n");//2
    printf("          \\");
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" /\\");
    color(4,15);
    printf(" /          ");
    color(0,15);
    printf("   %c %c%c%c%c%c %c %c%c%c%c%c%c%c %c %c %c %c %c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c %c",179,192,196,196,196,217,179,218,196,196,196,196,196,217,179,179,179,179,192,196,196,196,196,196,196,196,191,218,196,196,196,196,196,217,179);//5
    color(4,15);
    printf("             \\");//2
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" /\\ ");//2
    color(4,15);
    printf("/              \n");//2
    color(4,15);
    printf("         \\");
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" //\\\\ ");
    color(4,15);
    printf("/         ");
    color(0,15);
    printf("   %c %c%c%c%c%c %c %c %c%c%c%c%c %c %c %c %c %c%c%c %c%c%c %c %c %c%c%c%c%c %c",179,218,196,196,196,191,179,179,218,196,196,196,191,179,179,179,179,218,196,191,218,196,191,179,179,218,196,196,196,191,179);//4
    color(4,15);
    printf("            \\");//2
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" //\\\\ ");//2
    color(4,15);
    printf("/             \n");//2
    color(4,15);
    printf("        \\");
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" ///\\\\\\ ");
    color(4,15);
    printf("/        ");
    color(0,15);
    printf("   %c %c   %c %c %c %c   %c %c %c %c %c %c %c %c %c %c %c %c   %c %c",179,179,179,179,179,179,179,179,179,179,179,179,179,179,179,179,179,179,179,179);//3
    color(4,15);
    printf("           \\");//2
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" ///\\\\\\");//2
    color(4,15);
    printf(" /            \n");//2
    color(4,15);
    printf("       \\");
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" ////\\\\\\\\ ");
    color(4,15);
    printf("/       ");
    color(0,15);
    printf("   %c %c   %c %c %c %c%c%c%c%c %c %c %c %c %c %c %c %c %c %c %c%c%c%c%c %c",179,179,179,179,179,192,196,196,196,217,179,179,179,179,179,179,179,179,179,179,192,196,196,196,217,179);//2
    color(4,15);
    printf("          \\");//2
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" ////\\\\\\\\ ");//2
    color(4,15);
    printf("/           \n");//2
    color(4,15);
    printf("      \\");
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" /////\\\\\\\\\\ ");
    color(4,15);
    printf("/      ");
    color(0,15);
    printf("   %c%c%c   %c%c%c %c%c%c%c%c%c%c%c%c %c%c%c %c%c%c %c%c%c %c%c%c %c%c%c%c%c%c%c%c%c",192,196,217,192,196,217,192,196,196,196,196,196,196,196,217,192,196,217,192,196,217,192,196,217,192,196,217,192,196,196,196,196,196,196,196,217);//1
    color(4,15);
    printf("         \\");//2
    if(i%2==0) color(14,15);
    else color(12,15);
    printf(" /////\\\\\\\\\\ ");//2
    color(4,15);
    printf("/          \n");//2

    sleep(60);

    if(i<=20){
        color(2,15);
        printf("          \n\n\n");
        printf("                          %c%c%c%c%c 10%%",219,219,219,219,219);
    }
    else if (i>20&&i<=80){
        color(2,15);
        printf("          \n\n\n");
        printf("                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c 40%%",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    }
    else if (i>80&&i<=120){
        color(2,15);
        printf("          \n\n\n");
        printf("                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c 60%%",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    }
    else if (i>120&&i<=180){
        color(2,15);
        printf("          \n\n\n");
        printf("                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c 90%%",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    }
    else if (i>180&&i<=190) {
        color(2,15);
        printf("          \n\n\n");
        printf("                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c 95%%",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    }
    else if(i>=199){
        color(2,15);
        printf("          \n\n\n");
        printf("                          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c 100%%",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    }


    gotoxy(0,0);


    }
    sleep(500);
    system("cls");
}

//tabe baraye avaz kardan zaban bazi
void GameLanguage(){
	if(language==0) printf("\n\n\n                        <<CHANGE LANGUAGE>>                        \n\n\n");
	if(language==1) printf("\n\n\n                        <<TAGHIR ZABAN>>                        \n\n\n");
	if(language==0) printf("      <PRESS 1>\n\n      English\n\n      ________________________\n\n      <PRESS 2>\n\n      Persian\n\n      ________________________\n\n");
	if(language==1) printf("      <1>\n\n      Englisy\n\n      ________________________\n\n      <2>\n\n      Farsi\n\n      ________________________\n\n");
    char ch;
    do{
    	ch=getch();
	}while(ch!='1'&&ch!='2');
	if(ch=='1'){
		language=0;
		if(language==0) printf("      The language of the game is English!\n\n\n      Please wait ...");
		if(language==1) printf("      Zaban bazi englisy ast!\n\n\n      Lotfan sabr konid ...");
		sleep(3000);
		system("cls");
		menu();
	}
	if(ch=='2'){
	language=1;
	if(language==0) printf("      The language of the game is Persian!\n\n\n      Please wait ...");
	if(language==1) printf("      Zaban bazi farsi ast!\n\n\n      Lotfan sabr konid ...");
	sleep(3000);
	system("cls");
	menu();
	}
}

//tabe baraye ghesmat tahiyekonandegan
void directors(){
	if(language==0)printf("\n\n\n                        <<COMMUNICATION WITH DIRECTORS>>                        \n\n\n");
	if(language==1)printf("\n\n\n                        <<ERTEBAT BA TAHIYEKONANDEGAN>>                        \n\n\n");
	if(language==0)printf("      You can connect us through the following ways and share your ideas!\n\n\n\n\n");
	if(language==1)printf("      Shoma mitavanid az tarigh rah haye zir ba ma dar ertebat boode va nazarat khod ra be eshterak begozarid!\n\n\n\n\n");
    printf("      Mohammadreza Rasi                                              Tahoora Saeedi\n\n");
	printf("      ____________________                                           ____________________\n\n");
	if(language==0)printf("      Email address : www.mhmdrzrasi@gmail.com                       Email address : www.tahoora.saeedi@gmail.com\n\n");
	if(language==1)printf("      Adres email : www.mhmdrzrasi@gmail.com                         Adres email : www.tahoora.saeedi@gmail.com\n\n");
	printf("      Telegram : @mhmdrzrs                                           Telegram : @ltahooral\n\n");
	printf("      Inestagram : mhmdrz___rs                                     Inestagram : _ltahooral_");
	if(language==0)printf("\n\n\n\n\n      Please <Press Backspace> to return to the menu.");
	if(language==1)printf("\n\n\n\n\n      Lotfan <Backspace> ra bezanid ta be menu bazgardid.");
	char ch;
	do{
		ch=getch();
	}while(ch!='\b');
	system("cls");
	menu();
}
