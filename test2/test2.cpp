
#include <iostream>
#include "InputValedate.h"
using namespace std;



int main()
{

   


    InputValedate <double> Number;
    Number.ReadNumber();

    cout << "Read short Between \n";
    Number.ReadNumberBetween(1,10);
    
    cout << "Read Double Between \n";
    Number.ReadNumberBetween(1.5,10.3);

    cout << "Read float Between \n";
    Number.ReadNumberBetween(1.5,10.3);
    
   
  // cout<< IsNumberbetween.IsNumberBetween(40.7, 15, 40)<<endl;


   
    system("pause");
        return 0;
    
}

