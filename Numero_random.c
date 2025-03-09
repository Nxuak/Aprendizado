#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main (void){
setlocale(LC_ALL,"");
int a = {0};

srand(time(NULL));

a = rand() % 101;

printf("%d", a);




}