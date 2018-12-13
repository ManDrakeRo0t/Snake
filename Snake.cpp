#include <stdio.h>
#include <conio.h>
#include <windows.h>


bool GameOver;
int x,y,w = 30,h = 15,FruitX,FruitY;


int setup(){
	GameOver = false;
	FruitX = rand() % w;
	FruitY = rand() % h;
}



int display(){
	system("cls");
	for(int i = 0;i < w + 1;i++){
		printf("#");
	}
	printf("\n");


	for(int i = 0;i < h;i++){
		for(int j = 0;j < w;j++){
			if(j == 0 ||j == w - 1){
				printf("#");
			}
			printf(" ");
		}
		printf("\n");
	}


	for(int i = 0;i < w + 1;i++){
			printf("#");
		}
	printf("\n");
	
}

int logic(){
	
}


int input(){
	
}




int main(){
	setup();
	while(!GameOver){
		input();
		logic();
		display();
	}
}
