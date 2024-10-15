#include <iostream>
using namespace std;

void names(string firstname[], string lastname[], int num) {
    for (int i=0; i < num; i++) {
        cout << "Firstname: " << firstname [i] << "   " << "Lastname: " << lastname [i] << endl;
    }
}

int main () {
    int num;
    cout << "How many names do you want? ";
    cin >> num;

    string firstname[num];
    string lastname[num];

    for ( int i=0; i < num; i++) {
        cout << "Enter firstname " << i+1 << " : ";
        cin >> firstname[i];

        cout << "Enter lastname " << i+1 << " : ";
        cin >> lastname[i];
    }

    names(firstname, lastname, num);

return 0;
}