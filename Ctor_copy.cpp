#include "Person.h"
#include "Plant.h"
#include "Computer.h"
#include "Cockroach.h"


int main()
{
    cout << "Enter Person's name -> ";
    string name;
    cin >> name;

    Person person1;
    person1.SetName(name.c_str());
    person1.DisplayInfo();

    string name2 = "Ilona";
    Person person2(name2);
    person2.DisplayInfo();

    Person original;
    original.SetName("Alissa");

    cout << "\n";
    cin.ignore();

    Plant plant1;
    plant1.SetKind(kind.c_str());
    plant1.DisplayInfo();

    string plant2 = "Hibiscus";
    Plant plant2(kind2);
    plant2.DisplayInfo();

    Plant original;
    original.SetKind("Melissa");

    Computer computer1;
    computer1.SetKind(kind.c_str());
    computer1.DisplayInfo();

    string kind2 = "Dell";
    Computer computer2(kind2);
    computer2.DisplayInfo();

    Computer original;
    original.SetKind("HP");

    cout << "\n";
    cin.ignore();

    Cockroach cockroach1;
    Cockroach cockroach1("Viktor", 10, "brown", true, true);
    cockroach1.DisplayInfo();

    Cockroach cockroach2 = cockroach1;

    string name2 = "American cockroach";
    Cockroach cockroach2(name2);
    cockroach2.DisplayInfo();

    cout << "\n";
    cin.ignore();

}
