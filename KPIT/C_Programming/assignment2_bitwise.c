#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define NUMBER_WIDTH 32

int count_set_bits(int32_t n);
int32_t reverse_number(int32_t n);
int32_t set_bit(int32_t n, int pos);
int32_t reset_bit(int32_t n, int pos);
int32_t toggle_bit(int32_t n, int pos);

// helper functions
void int_to_binary(int32_t n, char *binary);
int32_t binary_to_int(char *binary);

int main()
{
  int32_t n;

  printf("Enter number: ");
  scanf("%d", &n);

  // representing given number in binary form
  char binary[NUMBER_WIDTH + 1];
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    binary[i] = '0';
  }
  binary[NUMBER_WIDTH] = '\0';
  int_to_binary(n, binary);
  printf("\nBinary Representation: %s \n", binary);

  // displaying number of set bits in given number
  int set_bits = count_set_bits(n);
  printf("Number of set bits: %d \n", set_bits);

  // displaying reversed binary and integer forms of given number
  char reversed_binary[NUMBER_WIDTH + 1];
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    reversed_binary[i] = '0';
  }
  reversed_binary[NUMBER_WIDTH] = '\0';
  int32_t reversed = reverse_number(n);
  int_to_binary(reversed, reversed_binary);
  printf("\nReversed Binary Representation: %s\n", reversed_binary);
  printf("Reversed number: %d\n", reversed);

  int pos;
  printf("\nEnter position to be set, reset, and toggled (1 to 32): ");
  scanf("%d", &pos);

  if (pos >= 32 || pos < 1)
  {
    printf("Please enter a valid position (1 to 32)\n");
    return 1;
  }

  // displaying binary and integer form after setting
  int32_t set = set_bit(n, pos);
  char set_binary[NUMBER_WIDTH + 1];
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    set_binary[i] = '0';
  }
  set_binary[NUMBER_WIDTH] = '\0';
  int_to_binary(set, set_binary);
  printf("\nBinary after setting bit %d: %s\n", pos, set_binary);
  printf("Number after setting bit %d: %d\n", pos, set);

  // displaying binary and integer form after resetting
  int32_t reset = reset_bit(n, pos);
  char reset_binary[NUMBER_WIDTH + 1];
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    reset_binary[i] = '0';
  }
  reset_binary[NUMBER_WIDTH] = '\0';
  int_to_binary(reset, reset_binary);
  printf("\nBinary after resetting bit %d: %s\n", pos, reset_binary);
  printf("Number after resetting bit %d: %d\n", pos, reset);

  // displaying binary and integer form after toggling
  int32_t toggled = toggle_bit(n, pos);
  char toggled_binary[NUMBER_WIDTH + 1];
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    toggled_binary[i] = '0';
  }
  toggled_binary[NUMBER_WIDTH] = '\0';
  int_to_binary(toggled, toggled_binary);
  printf("\nBinary after toggling bit %d: %s\n", pos, toggled_binary);
  printf("Number after toggling bit %d: %d\n", pos, toggled);

  return 0;
}

int count_set_bits(int32_t n)
{
  int counter = 0;
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    if (n & (1 << i))
    {
      counter++;
    }
  }
  return counter;
}

int32_t reverse_number(int32_t n)
{

  int32_t reversed = 0;
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    if (n & (1 << i))
    {
      reversed |= (1 << (NUMBER_WIDTH - 1 - i));
    }
  }
  return reversed;
}

int32_t set_bit(int32_t n, int pos)
{
  return n | (1 << pos - 1);
}

int32_t reset_bit(int32_t n, int pos)
{
  return n & ~(1 << pos - 1);
}

int32_t toggle_bit(int32_t n, int pos)
{
  return n ^ (1 << pos - 1);
}

void int_to_binary(int32_t n, char *binary)
{
  int index = NUMBER_WIDTH - 1;
  for (int i = 0; i < NUMBER_WIDTH; i++)
  {
    if (n & (1 << i))
    {
      binary[index] = '1';
    }
    index--;
  }
}

int32_t binary_to_int(char *binary)
{
  int32_t num = 0;
  for (int i = NUMBER_WIDTH - 1; i >= 0; i--)
  {
    if (binary[i] == '1')
    {
      num += (1 << (NUMBER_WIDTH - 1 - i));
    }
  }
  return num;
}
