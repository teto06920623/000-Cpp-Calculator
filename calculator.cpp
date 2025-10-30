/*
بسم الله الرحمن الرحيم اللهم لك الحمد ان علمتني و مننت عليا بهذا العلم احمدك حمدا كثيرا 
يليق بجلال وجهك و عظيم كرمك و اجرك و سترك فلك الحمد لا احصي ثناءً عليك جل شأنك فلك الحمد ابدا ابدا

اول اله حاسبه و اول مشروع ارفعه علي Git hub بستخدام ال C++

*/


#include <iostream>
using namespace std;
int main()
{

    int nNum1, nNum2;
    cout << "Enter first number:- ";
    cin >> nNum1;
    char cPr;
    cout << "Enter the Enter the process (+,-,*,/):- ";
    cin >> cPr;
    cout << "Enter second number:- ";
    cin >> nNum2;

    switch (cPr)
    {
    case '+':
        cout << "The Result is = " << nNum1 + nNum2 << endl;
        break;
    case '-':
        cout << "The Result is = " << nNum1 - nNum2 << endl;
        break;
    case '*':
        cout << "The Result is = " << nNum1 * nNum2 << endl;
        break;
    case '/':
        if (nNum2 != 0)
            cout << "The Result is = " << nNum1 / nNum2 << endl;
        else
            cout << "Can't / by 0" << endl;
        break;
    default:
        cout << "Unknown operation" << endl;
        break;
    }
    return 0;
}