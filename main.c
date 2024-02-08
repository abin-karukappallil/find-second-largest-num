#include<stdio.h>
void main(){
  int a,b,c;
  scanf("%d %d %d", &a,&b,&c);
  if((a > b && a < c) || (a < b && a > c)){
    printf("%d",a);
  }
  else if((b > a && b < c) || (b < a && b > c)){
    printf("%d",b);
  }
  else{
    printf("%d",c);
  }
 
}

// Problem Statement

// Given three distinct integers a b and c, write a C program to find the second largest number among them.

// Input

// Three distinct integers a b c.
// The first input is the integer a.
// The second input is the integer b.
// The third input is is the integer c.

// Output

// The second largest among a, b and c