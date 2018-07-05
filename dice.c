#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int d[2],T,i;

  srand(time(NULL));

 for(i=0;i<2;i++){
  d[i] = rand() % 6 + 1;
  }
 
  T = d[0] + d[1];
  
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",d[0]);
  printf("Die 2: %d\n",d[1]);
  printf("Total value: %d\n",T);

  return 0;
}
