#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operation;
    float firstnumber,second_number,result;

    printf("Enter the first number:\n");
    scanf("%f",&firstnumber);

    printf("Enter the operation(+,-,*,/)\n: ");
    scanf(" %c",&operation);

    printf("Enter the second number:\n ");
    scanf("%f",&second_number);



    if (operation=='+'){
        printf("Result: %.2f\n",firstnumber+secon_dnumber);
    }
    else if (operation=='-'){
        printf("Result: %.2f\n",firstnumber-second_number);
    }
    else if (operation=='*'){
        printf("Result: %.2f\n",firstnumber*secon_dnumber);
    }
    else if (operation=='/'){
        printf("Result: %.2f\n",firstnumber/second_number);
    }


    return 0;
}
