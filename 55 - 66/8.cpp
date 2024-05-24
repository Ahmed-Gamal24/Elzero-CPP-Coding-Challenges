
   int plusandmultiply(int numbers[], int numssize )
   {
       int plus = 0;
       int multy = 1;
       for (int i = 0; i < numssize ; i++)
       {
           if(numbers[i] % 2 == 0)
           {
               plus +=numbers[i];
               numbers[0] = plus;
           }
           else
           {
           multy*=numbers[i];
           numbers[1] = multy;
           }
       }
        return numbers[0] + numbers[1];    
   }

                            