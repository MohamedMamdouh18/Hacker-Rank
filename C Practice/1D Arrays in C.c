#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n ;
    scanf("%i" , &n);
    int arr[n];
    for (int i = 0 ; i < n ; i ++)
    {
        scanf("%i" , &arr[i]);
    }
    int sum ;
    
    for (int i = 0 ; i < n ; i ++)
    {
       sum += arr[i] ;
    }
    printf("%i" , sum);
}
