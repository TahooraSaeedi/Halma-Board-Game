void LogIn();
void SignUp();

//tabe baraye sign up ya login yek player
void start(){
    char ch;
    if(language==0) printf("\n\n\n      Press <1>\n\n      If you want to sign up.\n\n      _________________________\n\n      Press <2>\n\n      If you want to login.\n\n      ");
    if(language==1) printf("\n\n\n      <1> ra vared konid\n\n      Agar ghasd darid sabt nam konid.\n\n      _________________________\n\n      <2> ra vared konid\n\n      Agar ghasd darid vared shavid.\n\n      ");
    do{
        ch=getch();
    }while(ch!='1'&&ch!='2');
    if(ch=='1'){
        system("cls");
        SignUp();
    }
    if(ch=='2'){
        system("cls");
        LogIn();
    }
}

//tabe baraye sign up
void SignUp(){
    int i,j,sw;
    char ch,save[10],passwordcheck[101];
    for(i=0,sw=0;i<100&&sw==0;i++){
        if(Playerslist[i].username[0]=='\0'){
        //daryaft esm
            do{
            	if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
            	if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
                if(language==0) printf("      Please enter your username : ");
                if(language==1) printf("      Lotfan namkarbari khod ra vared konid : ");
                gets(Playerslist[i].username);
                strcpy(CurrentPlayer.username,Playerslist[i].username);
                system("cls");
                do{
                	if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
                	if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
                    if(language==0) printf("      Did you enter your username correctly?\n\n");
                    if(language==1) printf("      Aya az sehhat namkarbari khod etminan darid?\n\n");
                    if(language==0) printf("      Please answer yes or no.\n\n      ");
                    if(language==1) printf("      Lotfan ba bale ya kheyr pasokh dahid.\n\n      ");
                    gets(save);
                    if(strcmp(save,"yes")!=0&&strcmp(save,"no")!=0&&strcmp(save,"bale")!=0&&strcmp(save,"kheyr")!=0)
                        system("cls");
                }while(strcmp(save,"yes")!=0&&strcmp(save,"no")!=0&&strcmp(save,"bale")!=0&&strcmp(save,"kheyr")!=0);
                    system("cls");
            }while(strcmp(save,"no")==0||strcmp(save,"kheyr")==0);
        //daryaft ramz
            do{
                do{
                    do{
                	    if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
                	    if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
                        if(language==0)printf("      Please enter your password (Password must be at least 8 characters long) : ");
                        if(language==1)printf("      Lotfan ramzvorod khod ra vared konid (Tool ramzvorod bayad hadaghal 8 harf ya adad bashad) : ");
                        j=0;
                        do{
                            ch=getch();
                            if(ch!=13&&ch!='\b'){
                                printf("*");
                                Playerslist[i].password[j]=ch;
                                j++;
                            }
                            if(j>0){
                                if(ch=='\b'){
                                    printf("\b \b");//agar pak kard bebare aghab
                                    Playerslist[i].password[j]='\0';
                                    j--;
                                }
                            }
                        }while(ch!=13);
                        Playerslist[i].password[j]='\0';
                        if(strlen(Playerslist[i].password)<8){
                            system("cls");
                	        if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
                	        if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
                            if(language==0) printf("      Password must be at least 8 characters long.\n\n      Please wait for 3 secondes and enter your password again!");
                            if(language==1) printf("      Tool ramzvorod bayad hadaghal 8 harf ya adad bashad.\n\n      Lotfan 3 saniye sabr konid va ramzvorod khod ra dobare vared konid!");
                            sleep(3000);
                            system("cls");
                        }
                    }while(strlen(Playerslist[i].password)<8);
                    strcpy(CurrentPlayer.password,Playerslist[i].password);
                    system("cls");
                    do{
                	    if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
                	    if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
                        if(language==0) printf("      Did you enter your password correctly?\n\n");
                        if(language==1) printf("      Aya az sehhat ramzvorod khod etminan darid?\n\n");
                        if(language==0) printf("      Please answer yes or no.\n\n      ");
                        if(language==1) printf("      Lotfan ba bale ya kheyr pasokh dahid.\n\n      ");
                        gets(save);
                        if(strcmp(save,"yes")!=0&&strcmp(save,"no")!=0&&strcmp(save,"bale")!=0&&strcmp(save,"kheyr")!=0)
                            system("cls");
                    }while(strcmp(save,"yes")!=0&&strcmp(save,"no")!=0&&strcmp(save,"bale")!=0&&strcmp(save,"kheyr")!=0);
                    system("cls");
                }while(strcmp(save,"no")==0||strcmp(save,"kheyr")==0);
                if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
                if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
                if(language==0) printf("      Please enter your password again : ");
                if(language==1) printf("      Lotfan ramzvorod khod ra dobare vared konid : ");
                j=0;
                do{
                    ch=getch();
                    if(ch!=13&&ch!='\b'){
                        printf("*");
                        passwordcheck[j]=ch;
                        j++;
                    }
                    if(j>0){
                        if(ch=='\b'){
                            printf("\b \b");//agar pak kard beyare aghab
                            passwordcheck[j]='\0';
                            j--;
                        }
                    }
                    passwordcheck[j]='\0';
                }while(ch!=13);
                if(strcmp(passwordcheck,CurrentPlayer.password)!=0){
                    system("cls");
                    if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
                    if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
                    if(language==0) printf("      Wrong password entered.\n\n\n      Please wait ...");
                    if(language==1) printf("      Ramzvorod vared shode eshtebah ast.\n\n\n      Lotfan sabr konid ...");
                    Sleep(3000);
                    system("cls");
                }
            }while(strcmp(passwordcheck,Playerslist[i].password)!=0);
            sw=1;
        }
    }
    if(sw==0){
        if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
        if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
        if(language==0) printf("      Sorry!There is no free space for the new player!\n\n\n      Please wait ...");
        if(language==1) printf("      Motasefane fazaye khali baraye sabtnam bazikon jadid vojod nadarad!\n\n\n      Lotfan sabr konid ...");
        sleep(3000);
    }
    if(sw==1){
    	system("cls");
        if(language==0) printf("\n\n\n                        <<SIGN UP>>                        \n\n\n");
        if(language==1) printf("\n\n\n                        <<SABT NAM>>                        \n\n\n");
        if(language==0)printf("      You are signed up successfuly!\n\n\n      Please wait ...");
        if(language==1)printf("      Shoma ba movafaghiyat sabtnam shodid!\n\n\n      Lotfan sabr konid ...");
        sleep(3000);
        system("cls");
        GameInformation2();
        GameInformation1();
        LogIn();
    }
}

//tabe baraye login
void LogIn(){
    int i,k,j,sw;
    char ch;
    char string1[100] , string2[100];
    if(language==0) printf("\n\n\n                        <<LOGIN>>                        \n\n\n");
    if(language==1) printf("\n\n\n                        <<VOROD>>                        \n\n\n");
    if(language==0) printf("      Please enter your username : ");
    if(language==1) printf("      Lotfan namkarbari khod ra vared konid : ");
    gets(string1);
    system("cls");
    do{
        if(language==0) printf("\n\n\n                        <<LOGIN>>                        \n\n\n");
        if(language==1) printf("\n\n\n                        <<VOROD>>                        \n\n\n");
        if(language==0) printf("      Please enter your password : ");
        if(language==1) printf("      Lotfan ramzvorod khod ra vared konid : ");
        i=0;
        do{
            ch=getch();
            if(ch!=13&&ch!='\b'){
                printf("*");
                string2[i]=ch;
                i++;
            }
            if(i>0){
                if(ch=='\b'){
                    printf("\b \b");
                    string2[i]='\0';
                    i--;
                }
            }
        }while(ch!=13);
        if(strlen(string2)<8){
            system("cls");
            if(language==0) printf("\n\n\n                        <<LOGIN>>                        \n\n\n");
            if(language==1) printf("\n\n\n                        <<VOROD>>                        \n\n\n");
            if(language==0) printf("      Password must be at least 8 characters long.\n\n      Please wait for 3 secondes and enter your password again!");
            if(language==1) printf("      Tool ramzvorod bayad hadaghal 8 harf ya adad bashad.\n\n      Lotfan 3 saniye sabr konid va ramzvorod khod ra dobare vared konid!");
            sleep(3000);
            system("cls");
        }
    }while(strlen(string2)<8);
    string2[i]='\0';
    for(j=0,sw=0;j<100&&sw==0;j++){
        if(strcmp(Playerslist[j].username,string1)==0&&strcmp(Playerslist[j].password,string2)==0){
            strcpy(CurrentPlayer.username,Playerslist[j].username);
            strcpy(CurrentPlayer.password,Playerslist[j].password);
            CurrentPlayer.wins=Playerslist[j].wins;
            CurrentPlayer.losses=Playerslist[j].losses;
            CurrentPlayer.draws=Playerslist[j].draws;
            CurrentPlayer.mode=Playerslist[j].mode;
            CurrentPlayer.save=Playerslist[j].save;
            for(i=0;i<20;i++){
                for(k=0;k<20;k++){
                    CurrentPlayer.PreviousGame[i][k]=Playerslist[j].PreviousGame[i][k];
                }
            }
            CurrentPlayer.player_turn=Playerslist[j].player_turn;
            CurrentPlayer.player_LeaveCampValue=Playerslist[j].player_LeaveCampValue;
            sw=1;
            system("cls");
            if(language==0) printf("\n\n\n                        <<LOGIN>>                        \n\n\n");
            if(language==1) printf("\n\n\n                        <<VOROD>>                        \n\n\n");
            if(language==0) printf("      You are logged in successfuly!\n\n\n      Please wait ...");
            if(language==1) printf("      Shoma ba movafaghiyat vared shodid!\n\n\n      Lotfan sabr konid ...");
            sleep(3000);
            system("cls");
            menu();
        }
    }
    if(sw==0){
    	system("cls");
        if(language==0) printf("\n\n\n                        <<LOGIN>>                        \n\n\n");
        if(language==1) printf("\n\n\n                        <<VOROD>>                        \n\n\n");
        if(language==0) printf("      Wrong username or password!\n\n\n      Please wait ...");
        if(language==1) printf("      Namkarbari ya ramzvorod eshtenah ast!\n\n\n      Lotfan sabr konid ...");
        sleep(3000);
        system("cls");
        if(language==0) printf("\n\n\n      Press <1>\n\n      If you want to sign up.\n\n      ________________________\n\n      Press <2>\n\n      If you want to login.\n\n      ");
        if(language==1) printf("\n\n\n      <1> ra vared konid\n\n      Agar ghasd darid sabt nam konid.\n\n      ________________________\n\n      <2> ra vared konid\n\n      Agar ghasd darid vared shavid.\n\n      ");
        do{
            ch=getch();
        }while(ch!='1'&&ch!='2');
        if(ch=='1'){
        	system("cls");
            SignUp();
        }
        if(ch=='2'){
        	system("cls");
            LogIn();
        }
    }
}
