
  int minpositive(int numbers[], int numssize)
  {
      int positiveOlnly[4] = {};
      int start = 0;
      for (int i = 0; i < numssize; i++)
      {
          if (numbers[i] > 0)
          {
              positiveOlnly[start] = numbers[i];
              start++;
          }
          
      }
      int mini;
      mini = min({positiveOlnly[0], positiveOlnly[1], positiveOlnly[2], positiveOlnly[3], positiveOlnly[4]});
      return mini;
  }

                            