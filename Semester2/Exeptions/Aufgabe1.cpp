#include <iostream>
#include <exception>

struct MyExeption : public std::exception
{
    const char* what() const noexcept override
    {
        return "Fehler in der Bearbeitung";
    }
};

auto main() -> int
{
    try
    {
        throw MyExeption();
    }
    catch(MyExeption& Test)
    {
        std::cout<<"Fehler Aufgetreten!\n Fehlermeldung: "<<Test.what()<<std::endl;
    }
    return 0;
}