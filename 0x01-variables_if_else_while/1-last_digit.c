#include<stdio.h>
#include<time.h>
/* more headers goes there */

int main(){
  int n;


  n = rand() - RAND_MAX / 2
  if (n > 5) {
    /* code */
    printf("last digit of %d is and is greater than 5\n",n );
  }
  elseif(n == 0){
    printf("Last digit of %d is and is 0\n",n );
  }
  elseif(n < 6 && n != 0) {
      printf("Last digit of %d is and is less than 6 and not 0\n",n );
  }

  return (0);


}
