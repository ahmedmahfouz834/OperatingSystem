#include <stdio.h>
#include<stdlib.h>
int main(void) {
char pathanddest [100],com [200],t;
 while(1)
{
printf("1-Copy file. \n 2-Move File. \n 3-Exit.\n");
 int c;
 scanf("%d",&c);
 t=getchar();
 switch(c){
 case 1:strcpy(com,"cp ");
 printf("Enter the path and dest\n");
 gets (pathanddest);
 strcat (com, pathanddest);
 system(com);
 break;

case 2:strcpy(com,"mv ");
 printf("Enter the path and dest\n");
 gets (pathanddest);
 strcat (com, pathanddest);
 system(com);
 break;
case 3:exit(0);
 default:printf("incorrect answer");
 break;
}
}
return 0;}





}