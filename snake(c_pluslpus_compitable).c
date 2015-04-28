#include <stdio.h>
#include <stdlib.h>

typedef enum 
{
	DOWN = 0,
	LEFT,
	UP,
	RIGHT
} Direction;
typedef struct 
{
	int head_x;
	int head_y;
	Direction move_drt;
	int* body;
}Snake;

void change_drt(Snake*);
void grown_up(Snake* , int,int);

int main(int argc, char const *argv[])
{
	int N;
	Snake my_sk;
	scanf("%d",&N);
	getchar();
	// init snake
	my_sk.head_x=N-1;
	my_sk.head_y=0;
	my_sk.move_drt=DOWN;
	my_sk.body=(int*) malloc(sizeof(int)*N*N);
	for(int i=0;i<N*N;i++)
		my_sk.body[i]=0;
	my_sk.body[my_sk.head_y*N+my_sk.head_x]=1;
	// grow snake
	for(int i=2;i<=N*N;i++)
		grown_up(&my_sk,i,N);
	// print snake
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
			printf("%d\t",my_sk.body[i*N+j]);
		printf("\n");
	}

	return 0;
}




void change_drt(Snake* ps)
{
	switch(ps->move_drt){
		case DOWN:ps->move_drt=LEFT;break;
		case LEFT:ps->move_drt=UP;break;
		case UP:ps->move_drt=RIGHT;break;
		case RIGHT:ps->move_drt=DOWN;break;
	}
}

void grown_up(Snake* ps,int num,int N)
{
	switch(ps->move_drt){
		case DOWN:
			if( ps->head_y+1<N && (!ps->body[(ps->head_y+1)*N+ps->head_x]) ){
				ps->head_y++;
				ps->body[ps->head_y*N+ps->head_x]=num;
				break;
			}
			else
				change_drt(ps);
		case LEFT:
			if( ps->head_x-1>=0 && (!ps->body[ps->head_y*N+ps->head_x-1]) ){
				ps->head_x--;
				ps->body[ps->head_y*N+ps->head_x]=num;
				break;
			}
			else
				change_drt(ps);
		case UP:
			if( ps->head_y-1>=0 && (!ps->body[(ps->head_y-1)*N+ps->head_x]) ){
				ps->head_y--;
				ps->body[ps->head_y*N+ps->head_x]=num;
				break;
			}
			else
				change_drt(ps);
		case RIGHT:
			if( ps->head_x+1<N && (!ps->body[ps->head_y*N+ps->head_x+1]) ){
				ps->head_x++;
				ps->body[ps->head_y*N+ps->head_x]=num;
				break;
			}
			else
				change_drt(ps);
		default:
				ps->head_y++;
				ps->body[ps->head_y*N+ps->head_x]=num;
				break;
	}
}