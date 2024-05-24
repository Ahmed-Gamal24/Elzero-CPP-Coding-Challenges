
    // Method One
    sort(nums.begin(), nums.end());
  // Method Two
  reverse(nums.begin(), nums.end());
  // Method Three -> Use Swap + Loop For Challenge
  for (int k = 0; k < nums.size(); k++)
  {
      for (int j = 1; j < nums.size(); j++)
      {
          if (nums.at(j - 1) > nums.at(j))
          {
              swap(nums.at(j - 1), nums.at(j));
          }
      }
  }
                            