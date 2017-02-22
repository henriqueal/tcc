#include "ary3.c"
int main(int argc, char *argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 150000
#else
#define LENGTH 1500000
#endif
  int n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
  int *r_c;

  #pragma monitor start
  r_c = ary3(n); 
  #pragma monitor stop 

  if(r_c[0] == 1000 && r_c[1] == 1500000000){
    free(r_c);
    return 10;
  }
  free(r_c);
  return 1;
}
