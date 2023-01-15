#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner

}

int compute_score(string word)
{
    // TODO: Compute and return score for string
     for (int i = 0, n = strlen(word1); i < n; i++)
      {
          if (word1[i] >= 'a' && word1[i] <= 'z')
          {
            int Index = word1[i];
            score1 += POINTS[Index-97];
          }
          if (word1[i] >= 'A' && word1[i] <= 'Z')
          {
              int Index = word1[i];
              score1 += POINTS[Index-65];
          }
      }
      return score1;

      for (int i = 0, n = strlen(word2); i < n; i++)
      {
          if (word2[i] >= 'a' && word2[i] <= 'z')
          {
            int Index = word2[i];
            score2 += POINTS[Index-97];
          }
          if (word2[i] >= 'A' && word2[i] <= 'Z')
          {
              int Index = word2[i];
              score2 += POINTS[Index-65];
          }
      }
      return score2;
}
