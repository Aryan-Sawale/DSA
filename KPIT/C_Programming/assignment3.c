#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void find_substrings(char *s_input_text, char *s_substr);

/**
 * @brief The entry point of the program, returns 0 on successful execution
 *
 * @return int
 */
int main()
{
  char *s_input_text = "sadlkashdjfgjhagdfhagdsbkgfjgajhfalkjdshflkajnxcabababchjnshdakjdsbkfahdskfhafasdkjfhkasfdgfksdfgsjhabababcsdaakjdfhsdfbmabababcsdsksdjfmzxbmfnbzmvbabababcpolsdjaskjdnzsdkfhsdfhkjshdkjgshfdkjbguyageafhbcnvjhdsikbfieryhsrgkjhsbkfdhskjhfdghdfjnvslhfgsuyretoiwuyroksdabababc";
  char *s_substr = "abababc";
  find_substrings(s_input_text, s_substr);
}

/**
 * @brief Matches substring in a given text
 * @details
 * Takes an input text string, a substring and finds all matches.
 * After finding a match, it checks the next 3rd character for various conditions.
 * @param [IN] s_input_text The input text which is parsed.
 * @param [IN] s_substr The substring to be matched.
 */
void find_substrings(char *s_input_text, char *s_substr)
{
  int i_text_len = strlen(s_input_text);
  int i_substr_len = strlen(s_substr);
  int i_match_counter = 0;

  for (int i = 0; i < i_text_len; i++)
  {
    if (s_input_text[i] == s_substr[0])
    {
      int i_right = i + 1;
      // checks whether substring matches or we reach end of string
      bool b_match_flag = true;
      for (int j = 1; j <= i_substr_len - 1; j++)
      {
        if (i_right > i_text_len - 1 || s_input_text[i_right] != s_substr[j])
        {
          b_match_flag = false;
          break;
        }
        i_right++;
      }

      // if match is found
      if (b_match_flag)
      {
        i_match_counter++;

        // i_right will be at substring + 1 index
        // increment 2 times and check for overflow
        i_right += 2;

        // if there is no overflow
        if (i_right <= i_text_len - 1)
        {
          if (s_input_text[i_right] == 'n')
          {
            printf("Substring found at index %d => name \n", i);
          }
          else if (s_input_text[i_right] == 'a')
          {
            printf("Substring found at %d => age \n", i);
          }
          else if (s_input_text[i_right] == 's')
          {
            printf("Substring found at %d => sky \n", i);
          }
          else
          {
            printf("Substring found at %d => error: invalid character \n", i);
          }
        }
        else
        {
          printf("Substring found at %d => overflow \n", i);
        }
      }
    }
  }

  printf("\nNumber of matches found: %d \n", i_match_counter);
}
