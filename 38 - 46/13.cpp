
  string fName = "Elzero ";
  string mName = "Web ";
  string lName = "School\n";
  
  // Method 1
  cout << fName << mName << lName;
  
  // Method 2
  cout << fName + mName + lName;
  
  // Method 3
  cout << fName + (mName.append(lName));     
                            