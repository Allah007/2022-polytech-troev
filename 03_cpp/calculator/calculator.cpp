#include <iostream>
using namespace std;

int main()
{
    char o;
    float n1, n2, n12;

    cout << "Enter the operator (+, -, *, /, ^): ";
    cin >> o;

    cout << "Enter the operands: ";
    cin >> n1 >> n2; 

    n12 = n1;

    switch(o) {

        case '+':
            cout << n1 << " + " << n2 << " = " << n1 + n2;
            break;

        case '-':
            cout << n1 << " - " << n2 << " = " << n1 - n2;
            break;

        case '*':
            cout << n1 << " * " << n2 << " = " << n1 * n2;
            break;

        case '/':
            cout << n1 << " / " << n2 << " = " << n1 / n2;
            break;

        case '^':
            for (int i = 1; i < n2; i++) {
                n12 = n12 * n1;
            }
            cout << n1 << " ^ " << n2 << " = " << n12;
            break;
        
        default: 
            // если это другие знаки которые не являются знаками операторов
            cout << "tu sho durak chto li? normalno napishi, ponyal?";
            break;
    }

    return 0;

}