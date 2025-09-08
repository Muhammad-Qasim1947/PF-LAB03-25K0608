#include <stdio.h>
#include <conio.h>
int main(){
    int num1;
    int num2;
    int num3;
  printf("Enter Marks For Subject 1 " ) ;
  scanf("%d",&num1);
  printf("Enter Marks For Subject 2 " ) ;
  scanf("%d",&num2);
  printf("Enter Marks For Subject 3 " ) ;
  scanf("%d",&num3);
  int Percentage = (num1+num2+num3)*100/300 ;
  printf("Your Percentage Is %d\n", Percentage);

  return 0;

}