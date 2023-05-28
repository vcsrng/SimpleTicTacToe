#include<stdio.h>
#include<conio.h>
//#include<windows.h>
#include<stdlib.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int CW();
void Board();

int main(){
	int player = 1, i, choice;
	char mark;
	do{
		Board();
		player=(player%2)? 1:2;
		printf("\n\n\t\t     Player %d\n\t\tenter the choice: ", player);
		scanf("%d",&choice);
		mark=(player==1) ? 'x' : '0';
		if(choice==1 && square[1]=='1'){
			square[1]=mark;
		}else if(choice==2 && square[2]=='2'){
			square[2]=mark;
		}else if(choice==3 && square[3]=='3'){
			square[3]=mark;
		}else if(choice==4 && square[4]=='4'){
			square[4]=mark;
		}else if(choice==5 && square[5]=='5'){
			square[5]=mark;
		}else if(choice==6 && square[6]=='6'){
			square[6]=mark;
		}else if(choice==7 && square[7]=='7'){
			square[7]=mark;
		}else if(choice==8 && square[8]=='8'){
			square[8]=mark;
		}else if(choice==9 && square[9]=='9'){
			square[9]=mark;
		}else{
			printf("\t\tInvalid option hey!");
			player--;
			getch();
		}
		i=CW();
		player++;
	}while(i==-1);
	if(i==1){
		printf("\t    Player %d won the Tic Tac Toe", --player);
	}else{
		printf("\t\t Tic Tac Toe Draw");
	}
		getch();
		return 0;
}
int CW(){
	if(square[1]==square[2] && square[2]==square[3]){
		return 1;
	}else if(square[4]==square[5] && square[5]==square[6]){
		return 1;
	}else if(square[7]==square[8] && square[8]==square[9]){
		return 1;
	}else if(square[1]==square[4] && square[4]==square[7]){
		return 1;
	}else if(square[2]==square[5] && square[5]==square[8]){
		return 1;
	}else if(square[3]==square[6] && square[6]==square[9]){
		return 1;
	}else if(square[1]==square[5] && square[5]==square[9]){
		return 1;
	}else if(square[3]==square[5] && square[5]==square[7]){
		return 1;
	}else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9'){
		return 0;
	}else{
		return -1;
	}
}
void Board(){
	system("cls");
	printf(" _____ _ _____ _____ _____ _____ _____ _____ _____ \n");
	printf("|_   _| |  ___|_   _|  _  |  ___|_   _|  _  |  ___|\n");
	printf("  | | | | |     | | | | | | |     | | | | | | |___\n");
	printf("  | | | | |     | | | |_| | |     | | | | | |  ___|\n");
	printf("  | | | | |___  | | |  _  | |___  | | | |_| | |___\n");
	printf("  |_| |_|_____| |_| |_| |_|_____| |_| |_____|_____|\n");
	printf("\n\t    Player 1 (X) - Player 2 (O) \n\n\n");
	printf("\t        _________________ \n");
	printf("\t       |     |     |     |\n");
	printf("\t       |  %c  |  %c  |  %c  |\n", square[1], square[2], square[3]);
	printf("\t       |_____|_____|_____|\n");
	printf("\t       |     |     |     |\n");
	printf("\t       |  %c  |  %c  |  %c  |\n", square[4], square[5], square[6]);
	printf("\t       |_____|_____|_____|\n");
	printf("\t       |     |     |     |\n");
	printf("\t       |  %c  |  %c  |  %c  |\n", square[7], square[8], square[9]);
	printf("\t       |_____|_____|_____|\n");
}
