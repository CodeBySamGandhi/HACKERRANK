#include <stdio.h>
#include <math.h>

int main() {
    int i, n; 
    int prime = 1;

  scanf("%d", &n);

  if (n <= 1){
    printf("None");
    return 0;
    }

  for (i = 2; i <= sqrt(n); i++){
  if (n % i == 0){
    prime = 0;
    break;
    }
    }

  if (prime)
    printf("Prime");
  else
    printf("Composite");
  return 0;
}