#include <string>
#include <iostream>
using namespace std;


class Cockroach {

private:
    char* name = nullptr;
    double size;
    string color;
    bool is_awful;
    bool is_dang;

    short activity = 100;

public:

    Cockroach();
    Cockroach(const char*, double size, string color, bool is_awful, bool is_dang);
    Cockroach(Cockroach& original); //к-тор копирования
    Cockroach(Cockroach&& original); //к-тор копирования с переносом

    void SetName(const char* name);
    void SetSize(double s);
    void SetColor(string c);
    void SetAfwulStatus(bool awful);
    void SetDangStatus(bool dang);

    string GetName() const;
    double GetSize();
    string GetColor();
    bool GetAwfulStatus();
    bool GetDangStatus();

    void Eat(string meal);

    void Sleep();

    void Run(string slipper);

    void MakeDisaster();

    void Frighten();

    void DisplayInfo() const;

    ~Cockroach() {
        if (name != nullptr) {
            delete[] name;
            name = nullptr;
        }
    }
};
