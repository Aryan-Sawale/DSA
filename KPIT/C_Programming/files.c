#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *fp = fopen("binary_file.bin", "wb");
  int num = 12579;
  fwrite(&num, sizeof(num), 1, fp); // Writes 4 bytes directly
  fclose(fp);
}