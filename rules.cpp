//tabe baraye ejaze harcat mohre
int displacement(int i,int j,int m,int n){
    // 1 be manaye " harcat addy va harcat super " va 2 be manaye " paresh " va 0 be manaye " harcat nadorost "
    int a,b,k;
    int count1=0;//shemordan khone haye por
    int count2=0;//shemordan kh0ne haye khali
    //harcat addy
    if(abs(i-m)<=1&&abs(j-n)<=1){
        return 1;
    }
    else{
    	//harcat super va paresh
    	//harcat super ghotry
    	if((i-m)!=0&&(j-n)!=0){
        	//harcat roye ghotr asly
        	if((n-j)/(m-i)==-1){
            	if((i+m)%2==0&&(j+n)%2==0){//harcat , khone vasat darad
                	if(state[((i+m)/2)][((j+n)/2)]!=0){//khone vasat mohre por hast ya na 
                    	if(i<m){//harcat az bala be payin
                        	a=i;
                        	b=j;
                        	for(;a<m;a++,b--){
                            	if(state[a][b]!=0)
                            	count1++;//shemordan khone haye por (ham player1 ham player2)
                            	if(state[a][b]==0)
                            	count2++;//shemordan khone haye khali
                        	}
                    	}
                    	else{//harcat az payin be bala
                        	a=i;
                        	b=j;
                        	for(;a>m;a--,b++){
                            	if(state[a][b]!=0)
                            	count1++;//shemordan khone haye por (ham player1 ham player2)
                            	if(state[a][b]==0)
                            	count2++;//shemordan khone haye khali
                        	}
                    	}
                	}
            	}
        	}
        	//harcat roye ghotr faree
        	else if((n-j)/(m-i)==1){
            	if((i+m)%2==0&&(j+n)%2==0){//harcat , khone vasat darad
                	if(state[((i+m)/2)][((j+n)/2)]!=0){//khone vasat mohre harif ast
                    	if(i<m){//harcat az bala be payin
                        	a=i;
                        	b=j;
                        	for(;a<m;a++,b++){
                            	if(state[a][b]!=0)
                            	count1++;//shemordan khone haye por (ham player1 ham player2)
                            	if(state[a][b]==0)
                            	count2++;//shemordan khone haye khali
                        	}
                    	}
                    	else{//harcat az payin be bala
                        	a=i;
                        	b=j;
                        	for(;a>m;a--,b--){
                            	if(state[a][b]!=0)
                            	count1++;//shemordan khone haye por (ham player1 ham player2)
                            	if(state[a][b]==0)
                            	count2++;//shemordan khone haye khali
                        	}
                    	}
                	}
            	}
        	}
    	}
    	//harcat ofoghi
    	else if((i-m)==0){
        	if((j+n)%2==0){//harcat , khone vasat darad
            	if(state[i][(j+n)/2]!=0){//khone vasat mohre harif ast
                	if(j<n){
                    	b=j;
                    	for(;b<n;b++){
							if(state[i][b]!=0)
                        	count1++;//shemordan khone haye por (ham player1 ham player2)
                        	if(state[i][b]==0)
                        	count2++;//shemordan khone haye khali
                    	}
                	}
                	else{
                    	b=j;
                    	for(;b>n;b--){
                        	if(state[i][b]!=0)
                        	count1++;//shemordan khone haye por (ham player1 ham player2)
                        	if(state[i][b]==0)
                        	count2++;//shemordan khone haye khali
                    	}
                	}
            	}
        	}
    	}
    	//harcat amodi
    	else if((j-n)==0){
        	if((i+m)%2==0){//harcat , khone vasat darad
            	if(state[(i+m)/2][j]!=0){//khone vasat mohre harif ast
                	if(i<m){
                    	a=i;
                    	for(;a<m;a++){
                        	if(state[a][j]!=0)
                        	count1++;//shemordan khone haye por (ham player1 ham player2)
                        	if(state[a][j]==0)
                        	count2++;//shemordan khone haye khali
                    	}
                	}
                	else{
                    	a=i;
                    	for(;a>m;a--){
                        	if(state[a][j]!=0)
                        	count1++;//shemordan khone haye por (ham player1 ham player2)
                        	if(state[a][j]==0)
                        	count2++;//shemordan khone haye khali
                    	}
                	}
            	}
        	}
    	}
    }
    if(count1==2){
        if(count2>0) return 1;// harcat addy ya super
        else if(count2==0) return 2;// paresh
    }
    else return 0;
}

//tabe baraye piyade sazi ghanoon khas
int specialrule(){
	int i,j;
  	int winner=0;
  	int result;
  	for(i=0;i<BeadsOrder&&winner==0;i++){ //baraye chek kardan inke aya ordoogah 1 az mohrehaye 1 khali ast ya na
    	if(i==0||i==1){
			for(j=0;j<=BeadsOrder;j++){
        		if(state[i][j]==1){
          			winner=2;
        		}
			}
    	}
    	if(i==2){
			for(j=0;j<=BeadsOrder-1;j++){
        		if(state[i][j]==1){
          			winner=2;
        		}
			}
    	}
    	if(i==3){
			for(j=0;j<=BeadsOrder-2;j++){
        		if(state[i][j]==1){
          			winner=2;
        		}	
			}
    	}
    	if(i==4){
			for(j=0;j<=BeadsOrder-3;j++){
        		if(state[i][j]==1){
            		winner=2;
            	}
        	}
    	}
    	if(i==5){
			for(j=0;j<=BeadsOrder-4;j++){
        		if(state[i][j]==1){
            		winner=2;
            	}
        	}
    	}
    	if(i==6){
			for(j=0;j<=BeadsOrder-5;j++){
        		if(state[i][j]==1){
            		winner=2;
            	}
        	}
    	}
    	if(i==7){
			for(j=0;j<=BeadsOrder-6;j++){
        		if(state[i][j]==1){
            		winner=2;
            	}
        	}
    	}
    	if(i==8){
			for(j=0;j<=BeadsOrder-7;j++){
        		if(state[i][j]==1){
            		winner=2;
            	}
        	}
    	}
 	}	
	int sw1=winner;
	winner=0;
	for(i=SizeOfBord-1;i>SizeOfBord-BeadsOrder-1&&winner==0;i--){ //baraye chek kardan inke aya ordoogah 2 az mohrehaye 2 khali ast ya na
    	if(i==SizeOfBord-1||i==SizeOfBord-2){
      		for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder-1;j--){
        		if(state[i][j]==2){
          			winner=1;
        		}
      		}
    	}
    	if(i==SizeOfBord-3){
      		for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+0;j--){
        		if(state[i][j]==2){
          			winner=1;
        		}
      		}
    	}
    	if(i==SizeOfBord-4){
			for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+1;j--){
				if(state[i][j]==2){
					winner=1;
				}
			}
		}
		if(i==SizeOfBord-5){
            for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+2;j--){
                if(state[i][j]==2){
                    winner=1;
                }
            }
    	}
    	if(i==SizeOfBord-6){
            for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+3;j--){
                if(state[i][j]==2){
                    winner=1;
                }
            }
    	}
    	if(i==SizeOfBord-7){
            for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+4;j--){
                if(state[i][j]==2){
                    winner=1;
                }
            }
    	}
    	if(i==SizeOfBord-8){
            for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+5;j--){
                if(state[i][j]==2){
                    winner=1;
                }
            }
    	}
    	if(i==SizeOfBord-9){
            for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+6;j--){
                if(state[i][j]==2){
                    winner=1;
                }
            }
    	}
	}
	int sw2=winner;
	if(sw1==0&&sw2==0)return 0;//yani bazi edame darad va har 2 ordoogah khali and
	if(sw1==0&&sw2==1)result=1;//yani ordoogah 1 khali shode vali ordoogah 2 khali nashode , pas 1 barande
	if(sw1==2&&sw2==0)result=2;//yani ordoogah 2 khali shode vali ordoogah 1 khali nashode , pas 2 barande
	if(sw1==2&&sw2==1)result=-1;//yani bazi mosavi shode va be etmam miresad
	switch(result){
        case 1:
        	sleep(1000);
			system("cls");
            if(language==0) printf("\n\n\n      The player 1 is the winner!");
            if(language==1) printf("\n\n\n      Bazikon 1 barande ast!");
            CurrentPlayer.wins++;
            game.total++;
            game.wins++;
            GameInformation2();
            sleep(5000);
            exit(0);
            break;
        case 2:
        	sleep(1000);
			system("cls");
            if(language==0) printf("\n\n\n      The player 2 is the winner!");
            if(language==1) printf("\n\n\n      Bazikon 2 barande ast!");
            CurrentPlayer.losses++;
        	game.total++;
        	game.losses++;
        	GameInformation2();
        	sleep(5000);
        	exit(0);
        	break;
        case -1:
        	sleep(1000);
		    system("cls");
        	if(language==0) printf("\n\n\n      Nobody wins!\n\n      Draw!");
        	if(language==1) printf("\n\n\n      Bazikoni barande nashod!\n\n      Tasavi!");
        	CurrentPlayer.draws++;
        	game.total++;
        	game.draws++;
        	GameInformation2();
        	sleep(5000);
        	exit(0);
        	break;
	}
}

//tabe baraye elam barande bazi
int winner(){
	int i,j;
	int winner=2;
	for(i=0;i<BeadsOrder&&winner==2;i++){ //baraye chek kardan inke aya ordoogah 1 tavasot 2 ehate shode ya na
    	if(i==0||i==1){
			for(j=0;j<=BeadsOrder;j++){
        		if(state[i][j]!=2){
          			winner=1;
        		}
      		}
    	}
    	if(i==2){
			for(j=0;j<=BeadsOrder-1;j++){
        		if(state[i][j]!=2){
          			winner=1;
        		}
      		}
    	}
    	if(i==3){
      		for(j=0;j<=BeadsOrder-2;j++){
        		if(state[i][j]!=2){
          			winner=1;
        		}
      		}
    	}
    	if(i==4){
            for(j=0;j<=BeadsOrder-3;j++){
                if(state[i][j]!=2){
                	winner=1;
                }
            }
    	}
    	if(i==5){
            for(j=0;j<=BeadsOrder-4;j++){
                if(state[i][j]!=2){
                	winner=1;
                }
            }
    	}
    	if(i==6){
            for(j=0;j<=BeadsOrder-5;j++){
                if(state[i][j]!=2){
                	winner=1;
                }
            }
    	}
    	if(i==7){
            for(j=0;j<=BeadsOrder-6;j++){
                if(state[i][j]!=2){
                	winner=1;
                }
            }
    	}
    	if(i==8){
            for(j=0;j<=BeadsOrder-7;j++){
                if(state[i][j]!=2){
                	winner=1;
                }
            }
    	}
  	}
    if(winner==2){ //agar ordoogah 1 tavasot 2 ehate shode bashad , 2 barande ast
		sleep(1000);
		system("cls");
        if(language==0) printf("\n\n\n      The player 2 is the winner!");
        if(language==1) printf("\n\n\n      Bazikon 2 barande ast!");
        CurrentPlayer.losses++;
        game.total++;
        game.losses++;
        GameInformation2();
        sleep(5000);
        exit(0);
    }
	else{ //agar ordoogah 1 tavasot 2 ehate nashode bashad , momken ast 1 barande bashad
    	for(i=SizeOfBord-1;i>SizeOfBord-BeadsOrder-1&&winner==1;i--){
        	if(i==SizeOfBord-1||i==SizeOfBord-2){
          		for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder-1;j--){
            		if(state[i][j]!=1){
              			winner=0;
            		}
          		}
        	}
        	if(i==SizeOfBord-3){
          		for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+0;j--){
            		if(state[i][j]!=1){
              			winner=0;
            		}
          		}
        	}
        	if(i==SizeOfBord-4){
          		for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+1;j--){
            		if(state[i][j]!=1){
                    	winner=0;
            		}
				}
        	}
        	if(i==SizeOfBord-5){
                for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+2;j--){
                    if(state[i][j]!=1){
                        winner=0;
                    }
                }
        	}
        	if(i==SizeOfBord-6){
                for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+3;j--){
                    if(state[i][j]!=1){
                        winner=0;
                    }
                }
        	}
        	if(i==SizeOfBord-7){
                for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+4;j--){
                    if(state[i][j]!=1){
                        winner=0;
                    }
                }
        	}
        	if(i==SizeOfBord-8){
                for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+5;j--){
                    if(state[i][j]!=1){
                        winner=0;
                    }
                }
        	}
        	if(i==SizeOfBord-9){
                for(j=SizeOfBord-1;j>=SizeOfBord-BeadsOrder+6;j--){
                    if(state[i][j]!=1){
                        winner=0;
                    }
                }
        	}
    	}
    	if(winner==1){ //agar ordoogah 2 tavasot 1 ehate shode bashad , 1 barande ast .
    		sleep(1000);
		    system("cls");
        	if(language==0) printf("\n\n\n      The player 1 is the winner!");
            if(language==1) printf("\n\n\n      Bazikon 1 barande ast!");
            CurrentPlayer.wins++;
            game.total++;
            game.wins++;
            GameInformation2();
            sleep(5000);
            exit(0);
    	}
	}
	return 0; //yani bazi edame darad
}
