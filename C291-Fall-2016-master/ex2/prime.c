#include <stdio.h>

int prime(int x){
  int y;
  for (y=2;y<=x/2;y++)
    if((x%y)==0)
      return 0;
  return 1;
}

int main(){
  int i,p;
  for (i=2;i<=100;i++){
    p=prime(i);
    if(p==1){
      printf("%d \n",i);
    }
  }
}
