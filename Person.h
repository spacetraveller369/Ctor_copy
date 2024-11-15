#include <iostream>
using namespace std;

class Person {

private:
    char* name = nullptr;
    int age;
    string color_hair;
    string mood;
    bool is_alive = true;
    bool hungry = true;

    long long exp; // опыт
    short activity = 100; // запас энергии (0-100)


public:

    Person(); //к-тор без парам.
    Person(const char*, int age, string color_hair, string mood, bool is_alive, bool hungry); //к-тор с парам.
    Person(const string&);
    Person(Person& original); //к-тор копирования
    Person(Person&& original); //к-тор копирования с переносом

    void SetName(const char* name); //сеттер
    void SetAge(int a);
    void SetColorHair(string ch);
    void SetMood(string m);
    void SetAliveStatus(bool is_alive);
    void SetHungryStatus(bool hungry);

    string GetName() const; //геттер
    int GetAge();
    string GetColorHair();
    string GetMood();
    bool GetAliveStatus();
    bool GetHungryStatus();

    void Eat(string meal); //методы 
    void Sleep();
    void Walk(string street);
    void Work();
    void Read();
    void DisplayInfo() const;

    ~Person() { //деструктор
        if (name != nullptr) {
            delete[] name;
            name = nullptr;
        }
    }

};

