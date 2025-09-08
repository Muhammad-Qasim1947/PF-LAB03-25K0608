#include <stdio.h>
int main(){
    
// WITH USING A THIRD VARIABLE 
    int a;
    int b;
    int temp;
    printf("Enter number a ");
    scanf("%d",&a);
    printf("Enter number b ");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("After Swapping: ");
    printf("a is %d and b is %d ",a,b);
    
// WITHOUT USING A THIRD VARIABLE
printf("\nEnter number a ");
scanf("%d",&a);
printf("Enter number b ");
scanf("%d",&b);

a = a+b; // 10+9  19
b = a-b; // 19-9  10
a = a-b; // 19-10  9

printf("After Swapping Without Third Variable: ");
printf("a is %d and b is %d ",a,b);

return 0;

}