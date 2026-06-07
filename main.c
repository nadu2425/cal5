#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    float firstnumber,secondnumber,result;

    printf("Enter the first number:\n");
    scanf("%f",&firstnumber);

    printf("Enter the operation(+,-,*,/)\n: ");
    scanf(" %c",&operation);

    printf("Enter the second number:\n ");
    scanf("%f",&secondnumber);



    if (operation=='+'){
        printf("Result: %.2f\n",firstnumber+secondnumber);
    }
    else if (operation=='-'){
        printf("Result: %.2f\n",firstnumber-secondnumber);
    }
    else if (operation=='*'){
        printf("Result: %.2f\n",firstnumber*secondnumber);
    }
    else if (operation=='/'){
        printf("Result: %.2f\n",firstnumber/secondnumber);
    }


    return 0;
}
