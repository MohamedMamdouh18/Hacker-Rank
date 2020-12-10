#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	for(int i = a ; i <= b ; i ++){
          switch (i){
              case 1 :
              printf("one\n");
              continue ;
              case 2 :
              printf("two\n");
              continue ;
              case 3 :
              printf("three\n");
              continue ;
              case 4 :
              printf("four\n");
              continue ;
              case 5 :
              printf("five\n");
              continue ;
              case 6 :
              printf("six\n");
              continue ;
              case 7 :
              printf("seven\n");
              continue ;
              case 8 :
              printf("eight\n");
              continue ;
              case 9 :
              printf("nine\n");
              continue ;
              default :
              if((i % 2) == 1){
                  printf("odd\n");
                  continue ;
              }else{
                  printf("even\n");
                  continue ;
              }
          }
          
      }
    return 0;
}
