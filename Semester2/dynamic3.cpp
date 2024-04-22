#include <iostream>
#include <memory>

int funktion(int value1);

int main()
{
    int value;
    std::cout<<"Werteingabe für die größe des dynamischen Speichers: ";
    std::cin>>value;
    std::cout<<"Gewünschte Größe des dynamischen Speichers: "<<value<<std::endl;

    funktion(value);

    return 0;
}

int funktion(int value1)
{
    auto ptr=std::make_unique<int[]>(value1);
    
    for(int i=0;i<value1;i++)
    {
        ptr.get()[i]=i+1;
    }
    for(int k=0;k<value1;k++)
    {
        std::cout<<ptr[k]<<std::endl;
    }

    return 0;

}