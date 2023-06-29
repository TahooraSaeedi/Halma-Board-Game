//tabe baraye jabejayi mohre tavasot computer
int movecomp() {
    int check=0;
    do {
        i5=rand()%SizeOfBord+1;
        j5=rand()%SizeOfBord+1;
        m5=rand()%SizeOfBord+1;
        n5=rand()%SizeOfBord+1;
        i5--;
        j5--;
        m5--;
        n5--;
    }while (i5 < 0 || i5>SizeOfBord || j5 < 0 || j5>SizeOfBord || state[i5][j5] != turn || m5 < 0 || m5>SizeOfBord || n5 < 0 || n5>SizeOfBord || state[m5][n5] !=0||displacement(i5,j5,m5,n5)==0);
    check=displacement(i5,j5,m5,n5);
	state[i5][j5] = 0;
    state[m5][n5] = turn;
    if(check==2){
        return 1;
    }
    else return 0;
}

//tabe baraye jabejayi mohre faghat be soorat jump tavasot computer
int jumpmovecomp() {
    int i, j, m, n;
    int check=0;
    do {
        i=rand()%SizeOfBord+1;
        j=rand()%SizeOfBord+1;
        m=rand()%SizeOfBord+1;
        n=rand()%SizeOfBord+1;
        i--;
        j--;
        m--;
        n--;
    } while (i < 0 || i>SizeOfBord || j < 0 || j>SizeOfBord || state[i][j] != turn || m < 0 || m>SizeOfBord || n < 0 || n>SizeOfBord || state[m][n] !=0||displacement(i,j,m,n)!=2||i!=m5||j!=n5);
    i5=i;j5=j;m5=m;n5=n;
	state[i5][j5] = 0;
    state[m5][n5] = turn;
}

//tabe baraye paresh haye mojadad tavasot computer
int extramovementcomp(){
	int answer=rand()%2;
	return answer;
}
