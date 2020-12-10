#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and , or , xor ;
    int maxand , maxor , maxxor;

    for(int i = 1 ; i <= k ; i ++){
         for(int j = 2 ; j <= n ; j ++){
             if(j > i ){
                and = j & i ;
                or = j | i ;
                xor =  j ^ i ;
            if (and > maxand){
            maxand = and ;
            }
            if (or > maxor){
                maxor = or ;
            }
            if (xor > maxxor){
                maxxor = xor ;
            }
            }else{
                continue ;
            }
         }

    }
printf("%i\n%i\n%i", maxand , maxor , maxxor) ;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
