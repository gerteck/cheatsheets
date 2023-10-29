
#include <stdio.h>
int main(void) {
  // Testing format specifiers
  printf("Hello World!\n"); //\a
  printf("Press Any Key to Continue\n");  
  getchar();  

  // Testing pointers 
  int a = 5;
  int *a_ptr;
  a_ptr = &a;

  printf("value of a: %d\n", a);
  printf("value of a: %d\n", *a_ptr);
  
  printf("Increment a: (*a_ptr)++ \n");
  (*a_ptr)++;
  printf("value of a: %d\n", a);

  printf("Increment a_ptr: a_ptr++ \n");
  printf("value of a_ptr: %p \n", a_ptr);
  a_ptr++;
  printf("value of a_ptr: %p \n", a_ptr);

  return 0;
}