#include <iostream>

using namespace std;

class Pekerja{
    public:
        string Name;
        string Company;
        int Age;

        void introduceYourself(){
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "Company: " << Company << endl;
        };

        Pekerja(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        };

};

int main(){

    Pekerja pekerja("Hazeeq", "Intel", 18);
    pekerja.introduceYourself();

    Pekerja pekerja2("Afrina", "TESL", 18);
    pekerja2.introduceYourself();

    return 0;
}