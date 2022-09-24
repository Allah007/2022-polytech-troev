#include <iostream>
using namespace std;

int main()
{
    char o;
    float n1, n2, n12;
    bool fl;
    fl = true;

    while(fl = true) {
        cout << "Enter the operator's sign: +, -, *, /, ^,: ";
        cin >> o;

        cout << "Enter the operands: n1, n2: ";
        cin >> n1 >> n2; 

        n12 = n1;

        switch(o) {

            case '+':
                cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
                break;

            case '-':
                cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
                break;

            case '*':
                cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
                break;

            case '/':
                cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
                break;

            case '^':
                for (int i = 1; i < n2; i++) {
                    n12 = n12 * n1;
                }
                cout << n1 << " ^ " << n2 << " = " << n12 << endl;
                break;
            
            default: 
                cout << "tu sho durak chto li? normalno napishi, ponyal?" << endl;
                break;
            }

    }

}