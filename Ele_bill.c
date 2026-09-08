//Write a program to calculate electricity bill based on units consumed.

#include<stdio.h>
float Ele_bil(float units);


int main()
{
    int units;
    printf("Enter units: ");
    scanf("%d",&units);

    printf(" --Your entered unit is : %d\n",units);
    Ele_bil(units);
    return 0;
}

float Ele_bil(float units){
    if (units <= 100){
        printf(" Electricty bill : RS.%f \n",units * 1.50 );
    }
    else if (units <= 200){
        printf(" Electricty bill : RS.%.2f \n",(100 * 1.50) + ((units -100) * 2.50) );
    }
    else if (units <= 300){
        printf(" Electricty bill : RS.%.2f \n",(100 * 1.50) + (100 * 2.50 ) + ((units - 200) * 4.00) );
    }
    else if (units > 300){
        printf(" Electricty bill : RS.%.2f \n",(100 * 1.50) + (100 * 2.50 ) + (100 * 4.00) + ( (units - 300) * 5.00) );
    }
    return 1;
}