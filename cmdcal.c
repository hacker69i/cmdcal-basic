#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c;
    float d;
    printf("ENTER 1 for Addition\n");
    printf("ENTER 2 for subtraction\n");
    printf("ENTER 3 for multiplication\n");
    printf("ENTER 4 for Division\n");
    printf("ENTER 5 for  Reminder of the division\n");
    printf("Enter your option\n");
    scanf("%f",&c);
    if (c==1)
    {
        printf("enter values of a and b for addtion\n");
        scanf("%f%f",&a,&b);
        d=(a+b);
        printf("sum of entered values is %f",d);
    }
    else if (c==2)
    {   printf("enter values of a and b for subtration\n");
        scanf("%f%f",&a,&b);
        d=(a-b);
        printf("differnce of entered values is %f",d);
    }
    else if (c==3)
    {
        printf("enter values of a and b for Multiplication\n");
        scanf("%f%f",&a,&b);
        d=(a*b);
        printf("product of entered values is %f",d);
    }
    else if (c==4)
    {
        printf("enter values of a and b for division\n");
        scanf("%f%f",&a,&b);
        d=(a/b);
        printf("division of entered values is %f",d);
    }
    else if (c==5)
    {
        printf("enter values of a and b for find reminder\n");
        scanf("%f%f",&a,&b);
        d=fmod(a,b);
        printf("reminder of entered values is %f",d);
    }
    else
    {
        printf("invalid option selected\n");
    }
}
