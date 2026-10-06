#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main()
{
    char correctpin[50] ;
    //in order to allow pins like 0001 or 0023 to be valid 4 digit pins I used pin as a string variable
    char pin[100];
    int option;
    int attempts = 3;
    
    printf("Create a 4 digit pin: ");
    scanf("%s" ,correctpin);
    while(attempts > 0)
    {
        printf("Enter correct the correct pin: ");
        scanf("%s" ,pin);
        if (strlen(pin) <4)
        {
            printf("PIN is too short (must be 4 digits)\n");
            attempts --;
            printf("%d attempts remaining\n" ,attempts);
        }
        else if (strlen(pin) >4)
        {
            attempts --;
            printf("PIN is too long (must be 4 digits)\n");
            printf("%d attempts remaining\n" ,attempts);
        }
        else
        {
            printf("PIN is exactly 4 digits\n");
            if (strcmp(pin ,correctpin)==0)
            {
                printf("=== Device Menu===\n1. Open door\n2. Change username\n3. Change pin\n4. Exit\n");
                printf("choose an option: ");
                scanf("%d" ,&option);
                break;
            }
            else
            {
                attempts --;
                printf("wrong pin\n");
                printf("%d attempts remaining\n" ,attempts);
            }
        }
    }
    if (attempts == 0)
        {
            printf("System Locked! Wait for 5 seconds...\n");
            for(int i = 5; i > 0; i--)
            {
                printf("%d \n" ,i);
                sleep(1);
                
            }
            printf("you can try again now\n");
        }
    switch (option)
    {
        case 1:
        printf("Access granted. Door unlocked\n");
        break;
        case 2:
        printf("Change username feature coming soon.\n");
        break;
        case 3:
        printf("Change PIN feature coming soon.\n");
        break;
        case 4:
        printf("Exiting system.\n");
        break;
    }
    return 0;
}