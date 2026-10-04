#include <stdio.h>

int main()
{
    int str_length = 0;
    char string[100];
    int i = 0;

    printf("input your string: ");
    scanf("%s" ,string);
    
    while(string[i] != '\0')
    {
        str_length ++;
        i++;
    }
    printf("your string is %s\n" ,string);
    printf("your string length is %d\n" ,str_length);
    return 0;
}