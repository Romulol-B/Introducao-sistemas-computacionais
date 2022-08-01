#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int botao =0; int sensor =0; int alarme=0; int luz =0;
int e = 0;

while( e == 0 ||
       e == 1 || 
       e ==2) 
    scanf("%d",&botao);
    scanf("%d",&sensor);
  
  if (e == 0 ||
      botao== 1){
      e = 1;
      alarme = 0;
      luz = 1;
      }
      
  if (e == 1 && sensor == 1){
      e = 2;
      alarme = 1;
      luz = 1;
  }
  if (e == 2 && botao == 1){
      e = 0;
      alarme = 0;
      luz = 0;
}
  if (alarme == 1)
    printf("Alarme ligado");
  if (alarme == 0)
    printf("Alarme desligado");

  if (luz == 1)
    printf("Luz acesa");
  if(luz == 0)
   printf("Luz apagada");
  
  return 0;
}
  
