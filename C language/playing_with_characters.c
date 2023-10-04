#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* get character, word and input from user and execute on screen */ 
    char ch, s[100], sen[100];
    scanf("%c", &ch);
    scanf("%s\n", s);
    scanf("%[^\n]%*c", &sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);    
    return 0;
}