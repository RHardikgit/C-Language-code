#include<stdio.h>
int main()
{
    int arr[10];
    printf(" -- enter numbers ::  ");

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
    }
   
    int max;
    for (int i = 0; i <10;i++){
        for (int j = i +1; j <10; j++){
        if (arr[i] > arr[j]){
            max =  arr[i];
            arr[i] = arr[j];
            arr[j] = max;
        } 
        }
    }

    printf("\n-- Arrays in accending order --\n");
    for (int i=0; i< 10; i++){
        printf(" %d",arr[i]);
    }
     return 0;
}