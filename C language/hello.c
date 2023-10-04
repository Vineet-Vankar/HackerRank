#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    //code to print "hello world" and one line from user  
    printf("Hello, World!\n");
    printf("%s", s);
}