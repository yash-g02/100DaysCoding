#include <stdio.h>

int main() {
    int u, b;
    scanf("%d", &u);

    if(u<=100) b=u*5;
    else if(u<=200) b=100*5+(u-100)*7;
    else if(u<=300) b=100*5+100*7+(u-200)*10;
    else b=100*5+100*7+100*10+(u-300)*12;

    printf("%d\n", b);
    return 0;
}

