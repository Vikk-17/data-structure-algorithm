#include<stdio.h>

int printNatRev(int i, int n){

  if (i < 1) return 1;
  printf("%d\n", i);
  printNatRev(i-1, n);
}

int main (){
  int a, b;
  printf("Enter the value of start and last number: \n");
  scanf("%d %d", &a, &b);
  printNatRev(a, b);
}

