#include <iostream>

using namespace std;

class AbstractPekerja {
    virtual void AskForPromotion() = 0;
};

class Pekerja : AbstractPekerja {
   private:
    string Company;
    int Age;

   protected:
    string Name;

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
        if (Age > 30) {
            cout << Name << " got promoted!" << endl;
        } else {
            cout << Name << ", sorry no promotion for you" << endl;
        }
    }
    virtual void work() {
        cout << Name << " is checking email, task backlog, performing tasks...." << endl;
    }
};

class Developer : public Pekerja {
   public:
    string FavLanguage;

    Developer(string name, string company, int age, string favLanguage) : Pekerja(name, company, age) {
        FavLanguage = favLanguage;
    };
    void fixBug() {
        cout << Name << " fixed bug using " << FavLanguage << endl;
    }
    void work() {
        cout << Name << " is writing " << FavLanguage << " code" << endl;
    }
};

class Teacher : public Pekerja {
   public:
    string Subject;
    void preparedLesson() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    };
    Teacher(string name, string company, int age, string subject) : Pekerja(name, company, age) {
        Subject = subject;
    };
    void work() {
        cout << Name << " is teaching " << Subject << endl;
    }
};

int main() {
    Developer d = Developer("Hazeeq", "Intel", 18, "C++");
    Teacher t = Teacher("Noraini", "SMK Derma", 38, "Pendidikan Islam");

    Pekerja* e1 = &d;
    Pekerja* e2 = &t;

    e1->work();
    e2->work();
}
