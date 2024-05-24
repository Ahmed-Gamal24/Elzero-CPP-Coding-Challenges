
   int vals[] = {100, 200, 600, 200, 100};
   int array_size = sizeof(vals) / sizeof(vals[0]);
   if(vals[0] == vals[array_size - 1])
   {
       if(vals[1] == vals[array_size - 2])
           cout <<"Array Is Palindrome";
       
       else   cout << "Array Is Not Palindrome";  
   }
   else cout <<"Array Is Not Palindrome";
                            