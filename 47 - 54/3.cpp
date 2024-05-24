
  int fnum, snum;
  cout << "Enter First Number: ";
  cin >> fnum;
  cout << "Enter Second Number: ";
  cin >> snum;
  if (fnum > snum)
  {
    for (int i = snum + 1; i < fnum; i++)
    {
        if(i % 2 != 0)
        {
            cout << i <<", ";
        }
    }
  }
  else
  {
    for (int i = fnum + 1; i < snum; i++)
    {
        if (i % 2 != 0)
        {
            cout << i <<", ";
        }
        
    }
    
  }
                            