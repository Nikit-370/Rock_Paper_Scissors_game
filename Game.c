#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
int R=1;
int P=2;
int S=3;

int i;

int Pscore=0;
int Cscore=0;

int ch,t;
int com;
clrscr();

printf("Enter number of times you want to play:-\t\n");
scanf("%d",&t);

printf("Rock=1, Paper=2, and Scissors=3\n");

for(i=0;i<t;i++)
{
printf("Enter your choice:-\t");
scanf("%d",&ch);
com=rand()%3+1;

if(ch==R)
{
if(com==1)
{
printf("Draw.\n");
}
if(com==2)
{
printf("Computer Wins!.\n");
Cscore=Cscore+1;
}
if(com==3)
{
printf("Player Wins.\n");
Pscore=Pscore+1;
}
}

else if(ch==P)
{
if(com==2)
{
printf("Draw.\n");
}
if(com==3)
{
printf("Player Wins!.\n");
Pscore=Pscore+1;
}
if(com==1)
{
printf("Computer Wins!.\n");
Cscore=Cscore+1;
}
}

else if(ch==S)
{
if(com==3)
{
printf("Draw.\n");
}
if(com==2)
{
printf("Computer Wins!.\n");
Cscore=Cscore+1;
}
if(com==1)
{
printf("Player Wins!.\n");
Pscore=Pscore+1;
}
}
else
{
printf("Wrong Choice, Try again.\n");
}
}

if(Cscore>Pscore)
{
printf("Computer wins %d to %d.\n",Cscore,Pscore);
}
else if(Cscore<Pscore)
{
printf("Player wins %d to %d.\n",Pscore,Cscore);
}
else if(Cscore==Pscore)
{
printf("No winner! It's a draw.\n");
}
getch();
}
