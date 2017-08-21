#include <stdio.h>
#include <limits.h>

void show_bytes (char *ptr_start, int length)
{
  for (int i = 0; i < length; i++)
    printf("%p\t0x%.2x\n", ptr_start + i, *(ptr_start + i));
  printf("\n");
}

void show_int (int x)
{
  show_bytes((char *) &x, sizeof(int));
}

int main()
{
  show_int(85423);
  return 0;
}
