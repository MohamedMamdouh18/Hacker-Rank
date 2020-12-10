#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n , mod , sum;
    scanf("%d", &n);
    
    while(n > 0){
        mod = n % 10 ;
        sum += mod ;
        n = n / 10 ;
    }
    
    printf("%i" , sum);
    return 0;
}
