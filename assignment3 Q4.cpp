Q>>Identify the error / output of the program
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   int x = 10;
   int y = seventy;
 
   x = x + y;
   y = x - y;
   x = x - y;
 
   cout << "X : " << x << "\n";
   cout << "Y : " << y << "\n";
    
   return 0;
}

SOLUTION>> The error in the following program is " FOR INT DECLARAION NUMBERS SHOULD BE THE VALUE OF THE VARIABLE ,THE INT VARIABLE CANNOT TAKE CHARACTERS"
                                                  "int y=seventy gives an error as seventy is not declared in the scope"
