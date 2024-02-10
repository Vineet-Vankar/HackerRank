#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  //variables to store data  
  int and =0; int or = 0; int xor = 0;
  
  //loop comparing every two number from 1 to n
  for(int i=1 ; i<n ; i++) {
      for(int j=i+1; j<=n; j++) {
          
          //condition for AND
          if( (i & j) > and && (i & j) < k) {
              and = (i & j);
          }
          //condition for OR
          if( (i | j) > or && (i | j) < k) {
              or = (i | j);
          }
          //condition for XOR
          if( (i ^ j) > xor && (i ^ j) < k) {
              xor = (i ^ j);
          }
      }
  }
  
  printf("%d\n%d\n%d",and,or,xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}