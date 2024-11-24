#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct candidate
{
  int id;
  float avg;
} candidate;

void findHighestCandidate(candidate candidates[], int num)
{
  float max = -1;
  int selectedCandidate = 0;
  for (int i = 0; i < num; i++)
  {
    if (candidates[i].avg > max)
    {
      max = candidates[i].avg;
      selectedCandidate = i;
    }
  }

  printf("Selected candidate, ID: %d, Average: %0.2f", candidates[selectedCandidate].id, candidates[selectedCandidate].avg);
}

int main()
{
  int num;
  printf("Enter number of candidates: ");
  scanf("%d", &num);

  candidate candidates[num];
  for (int i = 0; i < num; i++)
  {
    printf("Enter candidate ID of candidate %d: ", i + 1);
    scanf("%d", &candidates[i].id);

    float score1, score2, score3;
    printf("Enter 3 scores: ");
    scanf("%f %f %f", &score1, &score2, &score3);

    candidates[i].avg = (score1 + score2 + score3) / 3;
  }

  findHighestCandidate(candidates, num);
}