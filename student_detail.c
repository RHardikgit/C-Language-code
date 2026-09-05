// Added student details program using structure and loop

#include<stdio.h>
#include<string.h>

struct student {
    char name[50];
    int age;
    char college_name[100];
};

int main()
{
    struct student s[5];

    for (int i = 0; i < 5; i++){
        printf(" -- Enter Student %d Detail -- \n ",i+1);

        printf(" Enter %d name : ",i+1);
        scanf("%s",s[i].name);
        
        printf(" Enter %d age : ",i+1);
        scanf("%d",&s[i].age);
        
        printf(" Enter %d college name : ",i+1);
        scanf("%s",s[i].college_name);
    }
    

    printf("\n -- Student Details -- \n\n");
    for (int i =0; i<5; i++){
        printf(" -- student %d -- \n", i+1);
        printf(" Name : %s \n Age : %d \n College name : %s \n",s[i].name,s[i].age,s[i].college_name);
    }

    return 0;
}