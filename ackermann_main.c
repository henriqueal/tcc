#include "ackermann.c"

int main() {
    int n = 8;

    int result = ackermann(3, n);
    if(result == 2045){  
      return 10;
    } else{
      return 1;
    }
}
