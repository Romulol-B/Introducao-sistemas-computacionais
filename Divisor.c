
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

int num;
int deno;
int total = 0;
printf("Digite a/b");
scanf("%d %d",&num,&deno);
if(deno==0){
    printf("divisao por 0");
    exit(1);
}
while (num >= deno){
    num -=deno;
    if(num<0)
        continue;
    total++;
}
printf("resultado é %d",total);

    return 0;
}
