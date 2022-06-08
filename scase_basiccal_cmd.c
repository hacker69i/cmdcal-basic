#include<stdio.h>
#include<math.h>
int main()

{
    float a,b,c = 0;
    int ch;
    printf("Enter 1-ADD\n");
    printf("Enter 2-SUB\n");
    printf("Enter 3-MULTI\n");
    printf("Enter 4-DIVIDE\n");
    printf("Enter 5-MODULO\n");
    printf("Enter your choice of operation\n");
    scanf("%d",&ch);
    printf("Enter two numbers\n" );
    scanf("%f%f",&a,&b);
    switch(ch)
    {
        case 1: c=a+b;
            break;
        case 2: c=a-b;
            break;
        case 3: c=a*b;
            break;
        case 4:
            if(b==0) {
                printf("Divide by zero error! \n");
                break; }
            else
            {c=a/b;
                break; }
            
        case 5:c=fmod(a,b);
            break;
        default:
            printf("enter valid choice! \n");
            break;
    }
    printf("The result is %f\n",c);
}
