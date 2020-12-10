#include <stdio.h>
#include <math.h>
int max_of_four (int a,int b,int c,int d){
   int maxi[4] = {a , b , c , d};
   int max = a ;
    for(int i = 0 ; i < 4 ; i ++){
        if (maxi[i] > max){
            max = maxi[i] ;
        }
        
    }
    return max ;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
