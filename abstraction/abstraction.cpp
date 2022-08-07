#include <iostream>

using namespace std;

class AbstractPekerja {
    virtual void AskForPromotion() = 0;
};

class Pekerja : AbstractPekerja {
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

    void AskForPromotion() {
        if(Age > 30){
            cout << Name << " got promoted!" << endl;
        }else{
            cout << Name << ", sorry no promotion for you" << endl;
        }
    }
};

int main() {
    Pekerja pekerja("Hazeeq", "Intel", 35);
    Pekerja pekerja2("Afrina", "TESL", 20);

    pekerja.AskForPromotion();
    pekerja2.AskForPromotion();
}