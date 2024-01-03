#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float c, d;
    
    // integer and float input from user 
    scanf("%d %d \n%f %f", &a, &b, &c, &d);
    
	// display sum and difference
    printf("%d %d \n%.1f %.1f", a+b, a-b, c+d, c-d);
    
    return 0;
}