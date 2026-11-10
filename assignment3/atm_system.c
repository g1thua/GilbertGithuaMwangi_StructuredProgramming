#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int withdraw(int x)
{
    int y, z;
    printf("how much would you like to withdraw:\n");
    scanf("%d" ,&y);
    if (y > x)
    {
        printf("insufficient balance\n");
        z = x;
    }
    else
    {
        printf("withdrawal successfull\n");
        z = x - y;
        return z;
    }
}
int deposit(int x)
{
    int y;
    printf("enter amount you wish to deposit:\n");
    scanf("%d" ,&y);
    int z = x + y;
    return z;
}
int checkbalance(int x)
{
    printf("current balance is %d\n",x);
}
int menu(void)
{
    int choice;
    printf("choose an option:\n");
    printf("1.Balance Inquiry\n2.Deposit\n3.Withdraw\n4.Exit\n");
    scanf("%d" ,&choice);
    return choice;

}
bool login(void)
{
    char pin[100] ;
    char correctpin[100]  = "1212";
    int attempts = 3;

    while (attempts > 0)
    {
        printf("Enter correct the correct pin: ");
        scanf("%s" ,pin);
        if (strcmp(pin ,correctpin)==0)
        {
            printf("correct pin\n");
            return true;
        }
        else
        {
            printf("wrong pin");
            attempts --;
            printf("wrong pin\n");
            printf("%d attempts remaining\n" ,attempts);
            
        }
    }
    printf("attempts exceeded!\n");
    return false;

}
int main(void)
{
    int balance = 17100;
    int Withdraw;
    int choice;
    int Deposit;
    if (login())
    {
        choice = menu();
        while (choice != 4)
        {
            if (choice == 1)
            {
                checkbalance(balance);
                choice = menu();
            }   
            else if (choice == 2)
            {
                balance = deposit(balance);
                printf("successfully deposited\nNew balance is %d\n" ,balance);
                choice = menu();
            }
            else if (choice == 3)
            {
                balance = withdraw(balance);
                printf("new balance is %d\n" ,balance);
                choice = menu();
            }
            else
            {
                printf("invalid option\n");
                choice = menu();
            }
        }
        printf("exit successfull\n");
    }
    else
    {
        printf("ACCESS DENIED!\n");

    }

    return 0;
}
