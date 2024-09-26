#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod){

  
  if(b != 0){
    *div = a / b;
    *mod = a % b;

        
    } else {

        printf("\nimpossible to div by 0");
    }
}

int main(){
    int x;
    int y;
    int a;
    int b;
    a = 10;
    b = 2;
    ft_div_mod(a, b, &x, &y);
    printf("%d", x);
    printf("%d", y);
    return(0);




}