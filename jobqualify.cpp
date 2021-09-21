#include <iostream>

using namespace std;

int main(){
    float salary;
    int years;
    cout << "Enter salary ";
    cin >> salary;
    cout << "Enter years of experience ";
    cin >> years;

    if (salary >= 30000 && years >= 2) {
            cout << "You're Qualified";
        }
    else if (salary < 30000 && years < 2) {
        cout << "You are not qualified as your salary and XP is inefficient ";
    }
    else if ( salary < 30000){
        cout << "Your Salary is inefficient ";
    }
    else if (years < 2){
        cout << "Your XP is inefficient ";
    }


return 0;

}//
// Created by imcoo on 2021-09-21.
//

