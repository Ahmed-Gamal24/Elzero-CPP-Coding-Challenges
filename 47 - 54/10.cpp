
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};
  for (int i = 0; i < 5; i++)
  {
      string name = friends[i];
      if (name[0] == 'A')
      {
      cout << name <<"\n";      
      }
  }
  
  int j = 0;
  while (j < 5)
  {
      string name = friends[j];
      if (name[0] == 'A')
      {
      cout << name <<"\n";      
      }   
      j++;
  }

                            