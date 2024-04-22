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

class PaintCost
{
    public:
    auto get_cost(double area)
    {
        double cost= area*70;
        return cost;
    }
};

class triangle : public Shape, public PaintCost
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

    double area=tri.get_area();


    std::cout<<"Größe der Fläche: "<<area<< " LE²"<<std::endl;
    std::cout<<"Kosten um diese Fläche zu bemalen: "<<tri.get_cost(area)<<" €"<<std::endl;


    return 0;

}