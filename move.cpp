int displacement(int i,int j,int m,int n);

//tabe baraye taghir nobat
int changeturn(){
	if(turn==1){
		turn=2;
	}
	else{
		turn=1;
	}
	checkLeaveCampValue++;
	return checkLeaveCampValue;
}

//tabe baraye jabejayi mohre tavasot karbar
int move() {
    int check=0;
    int count=0;
    do {
    	if(count>0){
    		EBS();
    	    system("cls");
            bord();
        	printf("\n");
		}
		gotoxy(0,2*SizeOfBord+5);
        if(language==0) printf("      Player %d\n", turn);
        if(language==1) printf("      Bzikon %d\n", turn);
        if(language==0) printf("      Enter the origin coordinates:(  ,  )");
        if(language==1) printf("      Lotfan mokhtasat noghte mabda ra vared konid:(  ,  )");
        if(language==0) gotoxy(36,2*SizeOfBord+6);
        if(language==1) gotoxy(52,2*SizeOfBord+6);
        scanf("%d",&i5);
        if(language==0) gotoxy(39,2*SizeOfBord+6);
        if(language==1) gotoxy(55,2*SizeOfBord+6);
        scanf("%d",&j5);
        gotoxy(0,2*SizeOfBord+7);
        if(language==0) printf("      Enter the destination coordinates:(  ,  )");
        if(language==1) printf("      Lotfan mokhtasat noghte maghsad ra vared konid:(  ,  )");
        if(language==0) gotoxy(41,2*SizeOfBord+7);
        if(language==1) gotoxy(54,2*SizeOfBord+7);
        scanf("%d",&m5);
        if(language==0) gotoxy(44,2*SizeOfBord+7);
        if(language==1) gotoxy(57,2*SizeOfBord+7);
        scanf("%d",&n5);
        i5--;
        j5--;
        m5--;
        n5--;
        count++;
    }while (i5 < 0 || i5>SizeOfBord || j5 < 0 || j5>SizeOfBord || state[i5][j5] != turn || m5 < 0 || m5>SizeOfBord || n5 < 0 || n5>SizeOfBord || state[m5][n5] !=0||displacement(i5,j5,m5,n5)==0);
    check=displacement(i5,j5,m5,n5);
	state[i5][j5] = 0;
    state[m5][n5] = turn;
    if(check==2){
        return 1;
    }
    else return 0;
}

//tabe baraye jabejayi mohre faghat be soorat jump tavasot karbar
int jumpmove() {
    int i, j, m, n;
    int check=0;
    int count=0;
    do {
    	if(count>0){
    		system("cls");
        	bord();
        	printf("\n");
		}
		gotoxy(0,2*SizeOfBord+5);
        if(language==0) printf("      Player %d\n", turn);
        if(language==1) printf("      Bzikon %d\n", turn);
        if(language==0) printf("      Enter the origin coordinates:(  ,  )");
        if(language==1) printf("      Lotfan mokhtasat noghte mabda ra vared konid:(  ,  )");
        if(language==0) gotoxy(36,2*SizeOfBord+6);
        if(language==1) gotoxy(52,2*SizeOfBord+6);
        scanf("%d",&i);
        if(language==0) gotoxy(39,2*SizeOfBord+6);
        if(language==1) gotoxy(55,2*SizeOfBord+6);
        scanf("%d",&j);
        gotoxy(0,2*SizeOfBord+7);
        if(language==0) printf("      Enter the destination coordinates:(  ,  )");
        if(language==1) printf("      Lotfan mokhtasat noghte maghsad ra vared konid:(  ,  )");
        if(language==0) gotoxy(41,2*SizeOfBord+7);
        if(language==1) gotoxy(54,2*SizeOfBord+7);
        scanf("%d",&m);
        if(language==0) gotoxy(44,2*SizeOfBord+7);
        if(language==1) gotoxy(57,2*SizeOfBord+7);
        scanf("%d",&n);
        i--;
        j--;
        m--;
        n--;
        count++;
    } while (i < 0 || i>SizeOfBord || j < 0 || j>SizeOfBord || state[i][j] != turn || m < 0 || m>SizeOfBord || n < 0 || n>SizeOfBord || state[m][n] !=0||displacement(i,j,m,n)!=2||i!=m5||j!=n5);
    i5=i;j5=j;m5=m;n5=n;
	state[i5][j5] = 0;
    state[m5][n5] = turn;
}

//tabe baraye paresh haye mojadad tavasot karbar
int extramovement(){
    char str[100];
    gotoxy(0,2*SizeOfBord+5);
    if(language==0) printf("      Player%d",turn);
    if(language==1) printf("      Bazikon%d",turn);
    if(language==0) printf("\n      Do you want to jump again?");
    if(language==1) printf("\n      Aya mikhahid dobare beparid?");
    if(language==0){
    	do{
        	printf("\n      Please answer yes or no.\n      ");
        	scanf("%s",str);
        	if(strcmp(str,"yes")!=0&&strcmp(str,"no")!=0){
        		system("cls");
        		bord();
        		if(language==0) printf("\n      Player %d", turn);
        		if(language==0) printf("\n      Do you want to jump again?");
        	}
    	}while(strcmp(str,"yes")!=0&&strcmp(str,"no")!=0);
	}
	if(language==1){
    	do{
        	printf("\n      Lotfan ba bale ya kheyr pasokh dahid.\n      ");
        	scanf("%s",str);
        	if(strcmp(str,"yes")!=0&&strcmp(str,"no")!=0){
        		system("cls");
        		bord();
        		if(language==1) printf("\n      Bzikon %d", turn);
        		if(language==1) printf("\n      Aya mikhahid dobare beparid?");
        	}
    	}while(strcmp(str,"bale")!=0&&strcmp(str,"kheyr")!=0);
	}
    system("cls");
    bord();
    if(strcmp(str,"yes")==0||strcmp(str,"bale")==0){
   		printf("\n");
	}
    if(strcmp(str,"yes")==0||strcmp(str,"bale")==0) return 1;
    else return 0;
}
