#include <iostream>
using namespace std;

int main() {
    cout << "O-single filer\n"
    << "1-married jointly, or qualifying widow(er)\n"
    << "2-married separately\n"
    << "3-head of household\n"
    << "Enter the filing status: ";

    int status;
    cin >> status;

    cout << "Enter the taxable income: ";
    double income;
    cin >> income;

    double tax = 0;

    int level0 = 0;
    int level1 = 0;
    int level2 = 0;
    int level3 = 0;
    int level4 = 0;
    int level5 = 0;
    int level6 = 0;

    //Formula: (level1*0.10)+((level2-level1)*0.15)+((level3-level2)*0.27)+((level4-level3)*0.30)+((level5-level4)*0.35)+((level6-level5)*0.386)

    if (status == 0) {
        
        if (income <= 6000) {
            level0 = income;
        }
        else if (income <= 27950) 
        {
            level0 = 6000;
            level1 = 6000;
            level2 = income;
        }
        else if (income <= 67700)
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 27950;
            level3 = income;
        }
       else if (income <= 141250)
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 27950;
            level3 = 67700;
            level4 = income;
        }
        else if (income <= 307050)
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 27950;
            level3 = 67700;
            level4 = 141250;
            level5 = income;
        }
        else
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 27950;
            level3 = 67700;
            level4 = 141250;
            level5 = 307050;
            level6 = income;
        }

   }

    else if (status == 1) {

        if (income <= 12000) {
            level0 = income;
        }
        else if (income <= 46700) 
        {
            level0 = 12000;
            level1 = 12000;
            level2 = income;
        }
        else if (income <= 112850)
        {
            level0 = 12000;
            level1 = 12000;
            level2 = 46700;
            level3 = income;
        }
       else if (income <= 171950)
        {
            level0 = 12000;
            level1 = 12000;
            level2 = 46700;
            level3 = 112850;
            level4 = income;
        }
        else if (income <= 307050)
        {
            level0 = 12000;
            level1 = 12000;
            level2 = 46700;
            level3 = 112850;
            level4 = 171950;
            level5 = income;
        }
        else
        {
            level0 = 12000;
            level1 = 12000;
            level2 = 46700;
            level3 = 112850;
            level4 = 171950;
            level5 = 307050;
            level6 = income;
        }


    }

    else if (status == 2) {

         if (income <= 6000) {
            level0 = income;
        }
        else if (income <= 23350) 
        {
            level0 = 6000;
            level1 = 6000;
            level2 = income;
        }
        else if (income <= 56425)
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 23350;
            level3 = income;
        }
       else if (income <= 85975)
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 23350;
            level3 = 56425;
            level4 = income;
        }
        else if (income <= 153525)
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 23350;
            level3 = 56425;
            level4 = 85975;
            level5 = income;
        }
        else
        {
            level0 = 6000;
            level1 = 6000;
            level2 = 23350;
            level3 = 56425;
            level4 = 85975;
            level5 = 153525;
            level6 = income;
        }


    }
    
    else if (status == 3) {

        if (income <= 10000) {
            level0 = income;
        }
        else if (income <= 37450) 
        {
            level0 = 10000;
            level1 = 10000;
            level2 = income;
        }
        else if (income <= 96700)
        {
            level0 = 10000;
            level1 = 10000;
            level2 = 37450;
            level3 = income;
        }
       else if (income <= 156600)
        {
            level0 = 10000;
            level1 = 10000;
            level2 = 37450;
            level3 = 96700;
            level4 = income;
        }
        else if (income <= 307050)
        {
            level0 = 10000;
            level1 = 10000;
            level2 = 37450;
            level3 = 96700;
            level4 = 156600;
            level5 = income;
        }
        else
        {
            level0 = 10000;
            level1 = 10000;
            level2 = 37450;
            level3 = 96700;
            level4 = 156600;
            level5 = 307050;
            level6 = income;
        }


    }

    else {
        cout << "Error: invalid stauts" << endl;
        return 0;
    }
    
    tax = (level0*0.10)+((level2-level1)*0.15)+
        ((level3-level2)*0.27)+((level4-level3)*0.30)+
        ((level5-level4)*0.35)+((level6-level5)*0.386);
 
    cout << "Tax is " << static_cast<int>(tax * 100) / 100.0 << endl;

    return 0;
}