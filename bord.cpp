//tabe baraye chap safhe
void bord(){
	system("color F0");
	color(0, 15);
	int i = -3, j = -5, n = 1, m = 1;
	//chap khat -3 ta 0
	for (i = -3; i <= 0; i++) {
		if (i == 0 || i == -2 || i == -3) {
			for (j = -5; j <= SizeOfBord*4+1 ; j++) {
				printf(" ");
			}
		}
		else {
			for (j = -5, n = 1; j <= SizeOfBord*4+1 ; j++) {
				if(j==-5){
					printf("        ");
				}
				if(j%4==3&&j>=0&&j<39){
					printf("%d   ",n);
					n++;
				}
				if(j%4==3&&j>=0&&j>=39){
					printf("%d  ",n);
					n++;
				}
			}
		}
		printf("\n");
	}
	//chap khat 1
	if (i == 1) {
		color(0, 15);
		for (j = -5; j <= 0; j++) {
			printf(" ");
		}
		for (j = 1; j <= SizeOfBord*4+1 ; j++) {
			if (j == 1) {
				printf("%c", 201);
			}
			else if (j == SizeOfBord*4+1 ) {
				printf("%c", 187);
			}
			else if (j % 4 == 1) {
				printf("%c", 203);
			}
			else {
				printf("%c", 205);
			}
		}
	}
	printf("\n");
	//chap khat 2 ta khat yeki moonde be akhar
	for (i = 2; i <= SizeOfBord*2 ; i++) {
		if (i % 2 == 1) {//in satr haye joda konnande ro chap mikone
			for (j = -5; j <= 0; j++) {
				printf(" ");
			}
			for (j = 1; j <= SizeOfBord*4+1 ; j++) {
				if (j == 1) {
					printf("%c", 204);
				}
				else if (j == SizeOfBord*4+1 ) {
					printf("%c", 185);
				}
				else if (j % 4 == 1) {
					printf("%c", 206);
				}
				else {
					printf("%c", 205);
				}
			}
		}
		else if (i % 2 == 0) {//in satr hayii ke gharare dar un ha mohre chap beshe ro chap mikone ( ba tavajoh be araye state )
			if (i >= 20) {
				for (j = -5; j < 0; j++) {
					if (j == -2) {
						printf("%d", m);
						m++;
					}
					else {
						printf(" ");
					}
				}
				for (j = 1; j <= SizeOfBord*4+1 ; j++) {
					if (j % 4 == 3) {
						if (state[i/2-1][j / 4] == 1) {
							color(FirstColor, 15);
							printf("%c", 4);
							color(0, 15);
						}
						else if (state[i/2-1][j / 4] == 2) {
							color(SecondColor, 15);
							printf("%c", 4);
							color(0, 15);
						}
						else {
							color(0, 15);
							printf(" ");
						}
					}
					else if (j % 4 == 1) {
						printf("%c", 186);
					}
					else {
						printf(" ");
					}
				}
			}
			else {
				for (j = -5; j <= 0; j++) {
					if (j == -2) {
						printf("%d", m);
						m++;
					}
					else {
						printf(" ");
					}
				}
				for (j = 1; j <= SizeOfBord*4+1 ; j++) {
					if (j % 4 == 3) {
						if (state[i / 2-1][j / 4] == 1) {
							color(FirstColor, 15);
							printf("%c", 4);
							color(0, 15);
						}
						else if (state[i / 2-1][j / 4] == 2) {
							color(SecondColor, 15);
							printf("%c", 4);
							color(0, 15);
						}
						else {
							printf(" ");
						}
					}
					else if (j % 4 == 1) {
						printf("%c", 186);
					}
					else {
						printf(" ");
					}
				}
			}
		}
		printf("\n");
	}
	//chap khat akhar
	if (i == SizeOfBord*2+1 ) {
		for (j = -5; j <= 0; j++) {
			color(0, 15);
			printf(" ");
		}
		for (j = 1; j <= SizeOfBord*4+1 ; j++) {
			if (j == 1) {
				printf("%c", 200);
			}
			else if (j == SizeOfBord*4+1 ) {
				printf("%c", 188);
			}
			else if (j % 4 == 1) {
				printf("%c", 202);
			}
			else {
				printf("%c", 205);
			}
		}
	}
}

//tabe baraye meghdar dahi avaliye
void initialization(int state[][20]){
  	int i, j, k;
  	for(i=0;i<20;i++){
    	for(j=0;j<20;j++){
      		state[i][j]=0;
    	}
  	}
  	k=-2;
  	for (i = 0; i < BeadsOrder; i++) {
        k++;
    	for (j = 0; j < BeadsOrder; j++) {
     		if (i == 0 || i == 1)state[i][j] = 1;
            if ( i > 1) {
                for( ; j < BeadsOrder-k; j++){
                    state[i][j] = 1;
                }
            }
      	}
  	}
  	k=-3;
  	for (i = SizeOfBord-1; i > SizeOfBord-BeadsOrder-1; i--) {
        k++;
    	for (j = SizeOfBord-1; j > SizeOfBord-BeadsOrder-1; j--) {
      		if (i == SizeOfBord-1 || i == SizeOfBord-2)state[i][j] = 2;
      		if ( i < SizeOfBord-2) {
                for( ; j > SizeOfBord-BeadsOrder+k; j--) {
                    state[i][j] = 2;
                }
      		}
    	}
  	}
}
