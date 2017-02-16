#include <iostream>
#include <string>
using namespace std;

int main()
{

//enter variables first
    int year = 0;
    string roman_year_value;

    cout << "Please enter year: " << endl;
    cout << "To end program, please type 0000." << endl;
    cin >> year;

    if (year >= 1000 && year <= 3000)
      {
        while (year != 0)
            {
                if (year >= 1000)
                  {
                    year -= 1000;
                    roman_year_value += "M";
                    }
                else if (year >= 900)
                 {
                    year -= 900;
                    roman_year_value += "CM";
                    }
                else if (year >= 500)
                  {
                    year -= 500;
                    roman_year_value += "D";
                    }
                else if (year >= 400)
                  {
                    year -= 400;
                    roman_year_value += "CD";
                    }
                else if (year >= 100)
                  {
                    year -= 100;
                    roman_year_value += "C";
                    }
                else if (year >= 90)
                  {
                    year -= 90;
                    roman_year_value += "XC";
                    }
                else if (year >= 50)
                  {
                    year -= 50;
                    roman_year_value += "L";
                    }
                else if (year >= 40)
                  {
                    year -= 40;
                    roman_year_value += "XL";
                    }
                else if (year >= 10)
                  {
                    year -= 10;
                    roman_year_value += "X";
                    }
                else if (year >= 9)
                  {
                    year -= 9;
                    roman_year_value += "IX";
                    }
                else if (year >= 5)
                  {
                    year -= 5;
                    roman_year_value += "V";
                    }
                else if (year >= 4)
                  {
                    year -= 4;
                    roman_year_value += "IV";
                    }
                else if (year >= 1)
                {
                    year -= 1;
                    roman_year_value += "I";
                    }
              }
        }
    else if (year == 0000)
      {
        cout << "Thank you for using this program." << endl;
        }
    else
      {
        cout << "Please enter valid value or say 'Done'." << endl;
        }
  }
