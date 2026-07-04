#include<stdio.h>

int reverse(int x){
  int num;  
  while(x > 0){
    // extract the last digit
    int lastDigit = x % 10;
    // append the digit
    num = num * 10 + lastDigit;

    // shrinking x by discarding the last digit
    x = x / 10;
  }
  return num;
}


int main(){
  int x = 112;

  int y = reverse(x);

  if(x == y) printf("Palindrome Number\n");
  else printf("Not a palindrome number\n");

  return 0;
}
