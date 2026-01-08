#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;
public:
    Student() : name(""), age(0), score(0.0) {}
    Student(const string &studentName, int studentAge, double studentScore)
        : name(studentName), age(studentAge), score(studentScore) {}
    bool isAdult() const {
        return age >= 18;
    }
    void updateScore(double delta) {
        score += delta;
    }
    void show() const {
        cout << "Имя: " << name << '\n';
        cout << "Возраст: " << age << '\n';
        cout << "Оценка: " << score << '\n';
        cout << "Совершеннолетний: " << boolalpha << isAdult() << '\n';
    }
};

int main() {
    string name;
    int age;
    double score;
    double delta;
    if (!getline(cin >> ws, name)) {
        name = "Иван";
    }
    if (!(cin >> age >> score >> delta)) {
        age = 19;
        score = 4.2;
        delta = 0.3;
    }
    Student student(name, age, score);
    student.show();
    student.updateScore(delta);
    student.show();
    return 0;
}
