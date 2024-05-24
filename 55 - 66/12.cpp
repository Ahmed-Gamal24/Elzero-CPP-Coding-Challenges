
  string createurl(string protocol, string name, string domain, string www ="www")
  {
      return ( protocol + "://" + www +"." + name +"." + domain  ); 
  }
  
  string createurl(string protocol, string name, string domain, bool www)
  {
  
      if (www == true)
      {
          string wwww = "www";
          return ( protocol + "://" + wwww +"." + name +"." + domain  );
      }
      else
      {
          return ( protocol + "://"  + name +"." + domain  );
      }  
  }

                            