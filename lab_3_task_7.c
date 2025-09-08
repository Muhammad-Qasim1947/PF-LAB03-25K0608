#include <stdio.h>
int main(){
   int Length;
   int Width;
printf("Enter The Length " );
scanf("%d",&Length);
printf("Enter The Width " );
scanf("%d",&Width);
int Area = Length * Width ; 
int Perimeter = 2*(Length+Width);
printf("Area Of The Rectangle is %d\n",Area );
printf("Perimeter Of The Rectangle is %d\n",Perimeter);

return 0;

}