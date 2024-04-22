#include<iostream>

int main()
{
    int value;
    std::cout<<"Werteingabe für den dynamischen Speicher"<<std::endl;
    std::cin>>value;
    std::cout<<"Eingebene Wertgröße für den dynamischen Speicher: "<<value<<std::endl;

    int* ptr=new int[value];
    for(int i=0;i<value;i++)
    {
        ptr[i]=i+1;
    }
    for(int k=0;k<value;k++)
    {
        std::cout<<ptr[k]<<std::endl;
    }
    delete[] ptr;

    return 0;
}