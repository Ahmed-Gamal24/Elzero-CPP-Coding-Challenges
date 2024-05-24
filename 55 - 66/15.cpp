
  double avg(int money[], int monsize)
  {
      double sum = 0;
      for (int i = 0; i < monsize; i++)
      {
          sum +=money[i];
      }
      double avreg = sum / monsize;
      return avreg;
  }

                            