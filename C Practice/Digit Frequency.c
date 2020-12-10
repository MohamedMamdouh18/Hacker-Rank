#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000] ;
    gets(str);
    int s ;
    int arr[60] ={0};
    for(int i = 48 ; i < 58 ; i ++)
    {
        for ( int j = 0 ; s = str[j] , s != NULL ; j ++)
        {
            if(s == i)
            {
            arr[i] ++;
            }
        }
    }

    for(int i =48 ; i < 58 ; i ++)
    {
        printf("%i " , arr[i]);
    }

}
