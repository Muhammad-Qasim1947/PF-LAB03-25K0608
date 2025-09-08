#include <stdio.h>
int main(){
    
    char Username [20];
    int Userage;
printf("Enter your name ");
scanf("%s",&Username);
printf("Enter your age ");
scanf("%d",&Userage);
printf("Name: \t%s\a\n", Username);
printf("Age: \b%d\a", Userage);

return 0;

}