#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void) 
{ 
  #ifdef __x86_64__
  printf("This is a 64-bit machine.\n");
  #else
  printf("This is a 32-bit machine.\n");
  #endif

  printf("Size of char: %lu bytes\n", sizeof(char));
  printf("Size of int: %lu bytes\n", sizeof(int));
  printf("Size of long: %lu bytes\n", sizeof(long));
  printf("Size of long long: %lu bytes\n", sizeof(long long));
  printf("Size of float: %lu bytes\n", sizeof(float));
  printf("Size of double: %lu bytes\n", sizeof(double));
  printf("Size of long double: %lu bytes\n", sizeof(long double));
    
  return (0);
}

