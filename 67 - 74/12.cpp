
  // Method One
  numbers.erase(numbers.end() - 1);

  // Method Two
  vector< int>::iterator itr = numbers.end() - 1;
  numbers.erase(itr);

  // Method Three
    numbers.pop_back();

                            