
   double pricing(int saledPhones, int usedPhones, int newPricePhones, int tax)
   {
       double profit_from_new = (saledPhones - usedPhones) * newPricePhones;
       double prophit_from_used = usedPhones * (newPricePhones - 200);
       double prophit_before_taxes = profit_from_new + prophit_from_used;
       double taxes = (tax / 100.0) * prophit_before_taxes;
       double end_prophit = prophit_before_taxes - taxes;
       return end_prophit;
   }
                            