
   #include < iostream >
   #include < cmath >
   using namespace std;
   // Write Your Function Here
   int thepower(int base, int power)
   {
       // Method One
       cout << pow(base, power) <<"\n"; // Do Not Forget To Inclue < cmath >
       // Method Two
       int result = 1;
       for (int i = 0; i < power ; i++)
       {
          result = result * base;
       }
       cout << result;
       return 0;
   }
   
   int main()
   {
       thepower(2, 5); // 32
       return 0;
   }

                          