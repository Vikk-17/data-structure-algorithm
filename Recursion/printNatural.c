#include<stdio.h>
#include<stdlib.h>

int printNatural(int i, int n){
  // print natural number from i to n 
  if (i>n) exit("Check your input\n");
  printf("%d\n", i);
  printNatural(i+1,  n);
}

int main(){
  int a, b;
  printf("Enter the starting number: \n");
  scanf("%d", &a);

  printf("Enter the last number: \n");
  scanf("%d", &b);

  printNatural(a, b);

}
