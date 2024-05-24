
  int calculate(int num1, int num2, string op )
  {
     if (op == "a" || op == "add")
     {
          return num1 + num2;
     }
     else if(op == "s" || op == "subtract")
     {
          return num1 - num2;
     }
     else if(op == "m" || op == "multiply") 
     {
          return num1 * num2;  
     }
     else
     {
        return 0;
     }
  }
  
  int calculate(int num1, int num2 )
  {
        return num1 + num2;  
  }
                            