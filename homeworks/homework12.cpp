#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;
public:
    Student() : name(""), age(0), score(0.0) {}

    Student(const string& name, double score, int age)
        : name(name), age(age), score(score) {}

    void setName(const string& name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    void setScore(double score) { this->score = score; }

    string getName() const { return name; }
    int getAge() const { return age; }
    double getScore() const { return score; }

    bool isAdult() const {
        return age >= 18;
    }
    void updateScore(double delta) {
        score += delta;
    }
    void show() {
        cout << "Имя: " << name << '\n';
        cout << "Возраст: " << age << '\n';
        cout << "Оценка: " << score << '\n';
        cout << "Совершеннолетний: " << (isAdult() ? "да" : "нет") << '\n';
    }
};
int main() {
    SetConsoleOutputCP(CP_UTF8);
    /*Student student;
    student.setName("Dася");
    student.setAge(18);
    student.setScore(3.14);*/
    Student s1("Вася", 3, 14);
    Student s2("Дуся", 5, 21);

    s1.show();
    s2.show();
    s2.updateScore(-3);
    s2.show();
    return 0;
}