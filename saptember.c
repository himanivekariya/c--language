#include<stdio.h>
main()
{
    int no,date;

    printf("enter the no:");
    scanf("%d",&no);

    date=no%7;

    switch(date)
    {
        case 4:
          printf("sunday...!!!");
          break;
 
        case 5:
          printf("monday..!!");
          break;

         case 6:
          printf("thseday...!!!");
          break;

           case 0:
          printf("wendseday..!!!");
          break;

           case 1:
          printf("thurseday...!!!");
          break;

           case 2:
          printf("friday...!!!");
          break;

           case 3:
          printf("saturday...!!!");
          break;

          default:

          printf("some thing wrong..!!");
    
    }
}