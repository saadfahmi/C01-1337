#include <unistd.h>
int ft_strlen(char *str){
    int y;
    y = 0;
    while(str[y] != '\0'){

        write(1, &str[y], 1);
        y++;
    }

    
}
int main(){
    char *str = "Nigga";
    return(0);


    
}