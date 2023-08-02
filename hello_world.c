#include <stdio.h>



int test(){
   int array_test[5] = {1, 2, 33};
   
   printf("%d\n", array_test[0]);
   printf("%d\n", array_test[1]);
   printf("%d\n", array_test[2]);
   printf("whaaat\n");
   return 0;
}


int main() {
   // printf() displays the string inside quotation
   printf("Hello, World!\n");
   test();
   return 0;
}

