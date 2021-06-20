#!/bin/bash
#include<stdio.h>

int main(){

int n=rand();
if (n > 0)
printf("%d is positive",n);
elseif(n == 0)
printf("%d is zero");

else
printf("%d is negative", n);
 
 return 0;
}