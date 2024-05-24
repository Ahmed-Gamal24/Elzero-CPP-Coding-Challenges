
   int sumall(int numbers[], int numssize,int noneed )
   {
      int sum = 0;
      for (int i = 0; i < numssize; i++)
      {
        if (numbers[i] == numbers[numssize - 1]){}
        else {sum+=numbers[i];}
   
      }
       return sum;  
   }

                            