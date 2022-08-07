#include <iostream>

using namespace std;

class Pekerja {
   private:
    string Name;
    string Company;
    int Age;

   public:
    string getCompany() {
        return this->Company;
    }
    void setCompany(string company) {
        this->Company = company;
    }

    int getAge() {
        return this->Age;
    }
    void setAge(int age) {
        if (age >= 18) {
            this->Age = age;
        }
    }

    string getName() {
        return this->Name;
    }
    void setName(string name) {
        this->Name = name;
    }

    void introduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    };

    Pekerja(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    };
};

int main() {
    Pekerja pekerja("Hazeeq", "Intel", 18);
    pekerja.introduceYourself();

    Pekerja pekerja2("Afrina", "TESL", 18);
    pekerja2.introduceYourself();

    pekerja.setAge(10);
    cout << pekerja.getName() << " is " << pekerja.getAge() << " years old";
}