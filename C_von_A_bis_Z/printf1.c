/* printf1.c */
#include <stdio.h>

int main(void){
  int zeichen;
  zeichen = printf("Hallo Welt");
  printf("Enthaelt %d Zeichen\n", zeichen); // 10 Zeichen
  return 0;
}