//가위바위보 게임을 해보자!

#include <stdio.h>

int main(void)
{
int p1;
int p2;

printf("가위바위보 게임\n");
printf("가위: 0\n");
printf("바위: 1\n");
printf("보: 2\n");

printf("player1님 0,1,2중 하나를 입력해주세요: ");
scanf("%d", &p1);

printf("player2님 0,1,2중 하나를 입력해주세요: ");
scanf("%d", &p2); 

if (p1 == 0)
 if (p2 == 0)
  printf("무승부.");

if (p1 == 0)
 if (p2 == 1)
  printf("player2님 승리");

if (p1 == 0)
 if (p2 == 2)
  printf("player1님 승리");

if (p1 == 1)
 if (p2 == 0)
  printf("player2님 승리");

if (p1 == 1)
 if (p2 == 1)
  printf("무승부");

if (p1 == 1)
 if (p2 == 2)
  printf("player2님 승리");

if (p1 == 2)
 if (p2 == 1)
  printf("player2님 승리");

if (p1 == 2)
 if (p2 == 2)
  printf("무승부");

return 0;
}