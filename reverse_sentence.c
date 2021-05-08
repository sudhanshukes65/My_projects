#include<stdio.h>
void rev_sent()
 {
    char c;
    scanf("%c", &c);
    if( c != '\n') 
    {
      rev_sent();
      printf("%c", c);  
    }
 }
int main()
    {
    printf("Input : ");
    rev_sent();
    return 0;
    }

