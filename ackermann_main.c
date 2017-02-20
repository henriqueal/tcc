#include <stdio.h>
#include <stdlib.h>
#include "ackermann.c"

int main() {
    int n = 8;

    int result = Ack(3, n);
  
    if(result == 2045){  
      return(10);
    } else{
      return 1;
    }
}
