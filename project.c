#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FASTPLOD (3)
#define SLIP (-6)
#define SLOWPLOD (1)

#define SLEEP (0)
#define BIGHOP (9)
#define BIGSLIP (-12)
#define SMALLHOP (1)
#define SMALLSLIP (-2)


int main()
{
srand((unsigned)time(NULL));  
int tortoise=1, hare=1;
int tortoise_prob, hare_prob;
int tortoise_movement, hare_movement;
int i;
    
printf("BANG!!!\nAND THEY'RE OFF!!!\n\n");
    
while (1)
{  
    tortoise_prob=rand() % 10;
    if (tortoise_prob<=5)
        {tortoise_movement=FASTPLOD;}
    else if (tortoise_prob==6 || tortoise_prob==7)
        {tortoise_movement=SLIP;}
    else if (tortoise_prob>=8 && tortoise_prob<=10)
        {tortoise_movement=SLOWPLOD;}
    else
        {printf("%d", tortoise_prob);}
    
    hare_prob=rand() %10;
    if (hare_prob==1 || hare_prob==2)
        {hare_movement=SLEEP;}
    else if (hare_prob==3 || hare_prob==4)
        {hare_movement=BIGHOP;}
    else if (hare_prob==5)
        {hare_movement=BIGSLIP;}
    else if (hare_prob==6 || hare_prob==7 || hare_prob==8)
        {hare_movement=SMALLHOP;}
    else if (hare_prob==9 || hare_prob==10)
        {hare_movement=SMALLSLIP;}
    else
        {printf("%d", hare_prob);}
    
    tortoise=tortoise+tortoise_movement;
    hare=hare+hare_movement;
    
    char race[70]={0};
    for (i=0; i<=70; i++)
        if (i==tortoise && i==hare)
            {printf("OUCH!!!");}
        else if(i==tortoise)
            {printf("T");}
        else if (i==hare)
            {printf("H");}
        else if (i==0)
            {printf("S");}
        else if (i==70)
            {printf("F");}
        else if (i==10 || i==20 || i==30 || i==40 || i==50 || i==60)
            {printf("|");}
        else
        {printf(".");}
    
    printf("\nTortoise:%d", tortoise);
    printf("\nHare:%d\n\n\n", hare);
    
    if (tortoise==70 && hare==70)
        {printf("It's a tie!!!\n");
         break;}
    else if (tortoise==70)
        {printf("Tortoise Wins!!!\n");
         break;}
    else if (hare==70)
        {printf("Hare Wins!!!\n");
        break;}
}
return 0;
}