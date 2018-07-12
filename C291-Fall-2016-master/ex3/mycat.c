#include <stdio.h>

void mycat(int);

char dest_buffer[100];
char str1[] = "Hello";
char str2[] = "World";

int main(){
  mycat(7);
  printf("%s\n",dest_buffer);
  mycat(30);
  printf("%s\n",dest_buffer);
  mycat(130);
  printf("%s\n",dest_buffer);
  mycat(99);
  printf("%s\n",dest_buffer);

 return(0);
}

void mycat(int n){
 int i=0;
 int m = 0;
 if (n >= 100){
   n = 99;
   printf("the number you entered is larger than 99\n");
 }

 while (m < n) {
   i = 0;
while (str1[i] != '\0'){
  if (m > n){
    break;}
  dest_buffer[m] = str1[i];  
    i++;
    m++;
 }
  i = 0;
while (str2[i] != '\0'){
  if (m > n){
    break;}
  dest_buffer[m] = str2[i];
  i++;
  m++;
 }
 }
 dest_buffer[n] = '\0';
} 





