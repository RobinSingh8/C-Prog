//1.WAP to read weekday number and print weekday name using switch statement
 
#include <stdio.h>
 
int main()
{
    int W;
     
    printf("Enter weekday number (0-6): ");
    scanf("%d",&W);
     
    switch(W)
    {
        case 0: 
            printf("Sunday");
            break;
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
    }
    printf("\n");
    return 0;
}

