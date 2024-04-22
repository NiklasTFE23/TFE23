#include <iostream>

class Shape
{
    public:
    void set_width(int width_in)
    {
        width_=width_in;
    }
    void set_height(int height_in)
    {
        height_=height_in;
    }
    protected:
    int width_;
    int height_;
};

class triangle : public Shape
{
    public:
    auto get_area()
    {
        return (width_ * height_);
    }
};

int main()
{
    triangle tri;

    int width;
    int height;

    std::cout<<"Geben Sie eine Breite für das Dreieck ein: ";
    std::cin>>width;
    std::cout<<"Geben Sie eine Höhe für das Dreieck ein: ";
    std::cin>>height;

    tri.set_width(width);
    tri.set_height(height);

    std::cout<<tri.get_area()<<std::endl;

    return 0;

}
