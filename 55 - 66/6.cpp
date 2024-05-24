
    // Write Your Function Here
    string swapping(string text)
    {
        for (int i = 0; i < size(text); i++)
        {
            if (text[i] == 'H' ){}
              
            else if (isupper(text[i]))
              text[i] = tolower(text[i]);
            else if (islower(text[i]))
              text[i] = toupper(text[i]);  
            else {}
    
        }  
        return text;
    }                          