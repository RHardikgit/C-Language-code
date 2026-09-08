//Create a simple calculator using switch-case.

#include<stdio.h>

// functions
float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);


int main()
{
    int operator,n;
    float a,b;
     
    printf(" **continue : ");
        // which time you wish to continue
    scanf("%d",&n);
    
    for (int i=0; i<n; i++){
        printf(" \n -- OPERATORS -- \n 1.Addition \n 2.substration \n 3.Multiplication \n 4.Division \n");
        printf(" -- Chhose a num: ");
        scanf("%d",&operator);
    
        printf("Enter a: ");
        scanf("%f",&a);
        printf("Enter b: ");
        scanf("%f",&b);

    switch(operator){
        
        case 1: printf("Ans: %f",add(a,b));
            break;
        case 2: printf("Ans: %f",sub(a,b));
            break;
        case 3: printf("Ans: %f",mul(a,b));
            break;
        case 4: printf("Ans: %f",div(a,b));
            break;
        default : printf("\n --Check Number-- \n");
    }
    }
    printf("\n --END-- \n");

    return 0;
}

float add(float a,float b){
    return a+b;
}
float sub(float a,float b){
    return a-b;
}
float mul(float a,float b){
    return a*b;
}
float div(float a,float b){
    if(b == 0){
        printf("cannot div by 0");
    }
    else{
    return a/b;
    }
}
