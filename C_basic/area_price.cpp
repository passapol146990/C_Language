#include <stdio.h>
int main()
{
     int x,y,area,price,result;
     printf("Enter width:");
     scanf("%d",&x);
     printf("Enter height:");
     scanf("%d",&y);
     area = x*y;
     if(area < 150){
          price = 50;
     }else if(area >=150){
          price = 100;
     };
     result = area * price;
     printf("area = %d , price = %d",area,result);
     return 0;
}