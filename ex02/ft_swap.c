#include <stdio.h>
void	ft_swap(int *a, int *b){

    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

}
int main(){

    int x = 7;
    int y = 8;
    ft_swap(&x, &y);
    printf("%d", x);
    printf("d", y);
    return(0);
    


}