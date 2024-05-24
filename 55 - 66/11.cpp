
   int firstnegative(int numbers[], int numssize)
   {
       int negativeOnly[5] = {};
       int start = 0;
       for (int i = 0; i < numssize; i++)
       {
            if (numbers[i] < 0)
            {
               negativeOnly[start] = numbers[i];
               start++;
            }  
       }
       int maxi;
       maxi = max({negativeOnly[0], negativeOnly[1], negativeOnly[2], negativeOnly[3], negativeOnly[4]});
       return maxi;    
   }

                            