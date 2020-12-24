
/* A program to find day of a given date */
#include<stdio.h> 
  
int dayofweek(int d, int m, int y) 
{ 
    if (y < 1600)
    {
        return -1;
    }
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
    y -= m < 3; 
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7; 
} 
  
int main() 
{ 
    int day = dayofweek(1, 1, 1600); 
    printf ("%d", day); 
      return 0; 
} 