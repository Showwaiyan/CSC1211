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

    // variable the fullfill the formala
    int level1 = 0,level2 = 0,level3 = 0,level4 = 0,level5 = 0,level6 = 0;

    //Formula: (level1*0.10)+((level2)*0.15)+((level3)*0.27)+((level4)*0.30)+((level5)*0.35)+((level6)*0.386)

    if (status == 0) {
        
        if (income <= 6000) {
            level1 = income;
        }
        else if (income <= 27950) 
        {
            level1 = 6000;
            level2 = income-6000;
        }
        else if (income <= 67700)
        {
            level1 = 6000;
            level2 = 27950-6000;
            level3 = income-27950;
        }
       else if (income <= 141250)
        {
            level1 = 6000;
            level2 = 27950-6000;
            level3 = 67700-27950;
            level4 = income-67700;
        }
        else if (income <= 307050)
        {
            level1 = 6000;
            level2 = 27950-6000;
            level3 = 67700-27950;
            level4 = 141250-67700;
            level5 = income-141250;
        }
        else
        {
            level1 = 6000;
            level2 = 27950-6000;
            level3 = 67700-27950;
            level4 = 141250-67700;
            level5 = 307050-141250;
            level6 = income-307050;
        }

   }

    else if (status == 1) {

        if (income <= 12000) {
            level1 = income;
        }
        else if (income <= 46700) 
        {
            level1 = 12000;
            level2 = income-12000;
        }
        else if (income <= 112850)
        {
            level1 = 12000;
            level2 = 46700-12000;
            level3 = income-46700;
        }
       else if (income <= 171950)
        {
            level1 = 12000;
            level2 = 46700-12000;
            level3 = 112850-46700;
            level4 = income-112850;
        }
        else if (income <= 307050)
        {
            level1 = 12000;
            level2 = 46700-12000;
            level3 = 112850-46700;
            level4 = 171950-112850;
            level5 = income-171950;
        }
        else
        {
            level1 = 12000;
            level2 = 46700-12000;
            level3 = 112850-46700;
            level4 = 171950-112850;
            level5 = 307050-171950;
            level6 = income-307050;
        }


    }

    else if (status == 2) {

         if (income <= 6000) {
            level1 = income;
        }
        else if (income <= 23350) 
        {
            level1 = 6000;
            level2 = income-6000;
        }
        else if (income <= 56425)
        {
            level1 = 6000;
            level2 = 23350-6000;
            level3 = income-23350;
        }
       else if (income <= 85975)
        {
            level1 = 6000;
            level2 = 23350-6000;
            level3 = 56425-23350;
            level4 = income-65425;
        }
        else if (income <= 153525)
        {
            level1 = 6000;
            level2 = 23350-6000;
            level3 = 56425-23350;
            level4 = 85975-56425;
            level5 = income-85975;
        }
        else
        {
            level1 = 6000;
            level2 = 23350-6000;
            level3 = 56425-23350;
            level4 = 85975-56425;
            level5 = 153525-85975;
            level6 = income-153525;
        }


    }
    
    else if (status == 3) {

        if (income <= 10000) {
            level1 = income;
        }
        else if (income <= 37450) 
        {
            level1 = 10000;
            level2 = income-10000;
        }
        else if (income <= 96700)
        {
            level1 = 10000;
            level2 = 37450-10000;
            level3 = income-37450;
        }
       else if (income <= 156600)
        {
            level1 = 10000;
            level2 = 37450-10000;
            level3 = 96700-37450;
            level4 = income-96700;
        }
        else if (income <= 307050)
        {
            level1 = 10000;
            level2 = 37450-10000;
            level3 = 96700-37450;
            level4 = 156600-96700;
            level5 = income-156600;
        }
        else
        {
            level1 = 10000;
            level2 = 37450-10000;
            level3 = 96700-37450;
            level4 = 156600-96700;
            level5 = 307050-156600;
            level6 = income-307050;
        }


    }

    else {
        cout << "Error: invalid stauts" << endl;
        return 0;
    }
    
    tax = (level1*0.10)+((level2)*0.15)+
        ((level3)*0.27)+((level4)*0.30)+
        ((level5)*0.35)+((level6)*0.386);
 
    cout << "Tax is " << static_cast<int>(tax * 100) / 100.0 << endl;

    return 0;
}