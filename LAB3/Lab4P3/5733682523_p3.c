#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int minute,price;
  printf("Enter time(minute):");
  scanf("%d",&minute);
  if(minute<15)
        printf("Price=0");
     else if (minute<=240&&minute%60>=15)
        {price=((minute/60)*10)+10;
        printf("Price=%d",price);}
     else if (minute<=240&&minute%60<15)
        {price=(minute/60)*10;
        printf("Price=%d",price);}
     else if (minute>=240&&minute<300&&minute%60<15)
        {price=((minute/60)*10);
        printf("Price=%d",price);}
     else if (minute>=240&&minute<300&&minute%60>=15)
        {price=((minute/60)*10)+20;
        printf("Price=%d",price);}
     else if (minute>=300&&minute%60>=15)
        {price=(40+((minute/60)-4)*10)+20;
         printf("Price=%d",price);}
     else if (minute>=300&&minute%60<15)
        {price=(40+((minute/60)-4)*20);
        printf("Price=%d",price);} 
    
  system("PAUSE");	
  return 0;
}
