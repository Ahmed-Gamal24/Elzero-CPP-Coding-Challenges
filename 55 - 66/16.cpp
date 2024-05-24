
 int books(int small, int middle, int large, int shelf)
 {
     int what_areas_needed = small * 2 + middle * 4 + large * 6; 
     int available_areas = shelf * 20;
     if (available_areas >= what_areas_needed )
     {
         return (available_areas - what_areas_needed);
     }
     else return 0;
 }
                            