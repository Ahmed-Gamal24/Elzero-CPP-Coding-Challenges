
 // Friends Array
 string friends[] = {"Ahmed", "Osama", "Ameer"};
 for (int i = 0; i < size(friends); i++)
 {
     cout << "=========\n";
     cout << "= " << friends[i] <<" =\n";
     cout << "==================\n";
     string name = friends[i];
     cout <<"== ";
     for (int i = 0; i < size(name); i++)
     {
        if (i == (size(name) - 1))
        {
        cout << name[i]<<" =" ;  
        }
        else
        cout << name[i]<<", " ;     
     }
        cout << "\n==================\n";
 }

                            