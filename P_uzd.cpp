#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ievadiet skaitli: ";
    cin >> num;
    cout << endl;

    for (int num = 1; num <= 1000; num++){
    if (num > 1){
        if ((num % 2) && (num % 3) && (num % 5)){
            cout << "Skaitlis " << num << " ir pirmskaitlis.";
        }
        else if (num == 2 || num == 3 || num == 5){
            cout << "Skaitlis " << num << " ir pirmskaitlis.";
        } 
        else {
        cout << "Skaitlis " << num << " nav pirmskaitlis!";
        }
    }else{
        cout << "Skaitlis " << num << " nav pirmskaitlis!";
    }
    }
}