#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:

string name;
int age;

};

class Cat;

class Bird : public Animal
{
    public: 
Bird(string Name,int Alter)
{
name = Name;
age = Alter;
}
void operator+(const Cat &class_Cat);

void operator+(const Bird &class_Bird)
{
    string add1 = name + class_Bird.name;
    cout<< "Zusammengefügt werden "<< add1 << endl;

    int age_ges = age + class_Bird.age;
    cout<< "Insgesamtes Alter: "<<age_ges <<endl;
}
};

class Cat : public Animal
{
    public:

Cat(string Name,int Alter)
{
name = Name;
age = Alter;
}
void operator+(const Bird &class_Bird)
{
    string add1 = name + class_Bird.name;
    cout<< "Zusammengefügt werden "<< add1 << endl;

    int age_ges = age + class_Bird.age;
    cout<< "Insgesamtes Alter: "<<age_ges <<endl;
}

void operator+(const Cat &class_Cat)
{
    string add1 = name + class_Cat.name;
    cout<< "Zusammengefügt werden "<< add1 << endl;

    int age_ges = age + class_Cat.age;
    cout<< "Insgesamtes Alter: "<<age_ges <<endl;
}
};


void Bird::operator+(const Cat &class_Cat)
{
    string add1 = name + class_Cat.name;
    cout<< "Zusammengefügt werden "<< add1 << endl;

    int age_ges = age + class_Cat.age;
    cout<< "Insgesamtes Alter: "<<age_ges <<endl;
}

auto main() -> int
{
    Cat cat1("Braun",32);
    Cat cat2("Schwarz",11);
    Bird bird1("Specht",12);
    Bird bird2("Uhu",20);

    bird1 + bird2;
    bird1 + cat1;
    cat2 + bird2;
    cat1 + cat2;

    return 0;
}

