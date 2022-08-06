#include <iostream>

using namespace std;

class Pekerja {
   public:
    string Name;
    string Company;
    int Age;

    void introduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    };
};

int main() {
    Pekerja pekerja;

    pekerja.Age = 18;
    pekerja.Name = "Hazeeq";
    pekerja.Company = "Intel";
    pekerja.introduceYourself();

    Pekerja pekerja2;

    pekerja2.Name = "Afrina";
    pekerja2.Age = 18;
    pekerja2.Company = "TESL";
    pekerja2.introduceYourself();

    return 0;
}