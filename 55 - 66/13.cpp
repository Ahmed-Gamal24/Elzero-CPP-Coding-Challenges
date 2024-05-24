
  string greeting(string name, string gender = "")
  {
    if (gender == "Male")
    {
      return "Hello Mr " + name;
    }
    else if(gender == "Female")
    {
      return "Hello Miss " + name;
    }
    else
    {
      return "Hello " + name;
    }
  }

                            