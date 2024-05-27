#include <cstdint>
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <random>

class Animal
{
   public:
    virtual void make_noise() const = 0;
};

class Bird;

class Cat : public Animal
{
   public:
    void make_noise() const override
    {
        std::cout << "miau" << std::endl;
    }

    void operator+(const Cat &)
    {
        std::cout << "Cats like each other!" << std::endl;
    }

    void operator+(const Bird &)
    {
        std::cerr << "Cat and Bird don't like each other!" << std::endl;
    }
};

class Bird : public Animal
{
   public:
    void make_noise() const override
    {
        std::cout << "tschirp" << std::endl;
    }

    void operator+(const Cat &)
    {
        std::cerr << "Bird and Cat don't like each other!" << std::endl;
    }

    void operator+(const Bird &)
    {
        std::cout << "Birds like each other!" << std::endl;
    }
};

auto main() -> int
{
    /*Cat sylvester;
    sylvester.make_noise();
    Bird tweetie;
    tweetie.make_noise();

    Cat garfield;
    Bird woodstock;
    sylvester + garfield;
    sylvester + tweetie;
    tweetie + sylvester;
    tweetie + woodstock;*/

    std::vector<std::shared_ptr<Animal>> animals;

    std::random_device seed;
    std::mt19937 gen(seed());
    std::uniform_int_distribution<> distribution(0, 1);

        for (int i = 0; i < 10; ++i)
    {
        // if(rand() > (RAND_MAX / 2))
        if (static_cast<bool>(distribution(gen)))
        {
            animals.push_back(std::make_shared<Cat>());
        }
        else
        {
            animals.push_back(std::make_shared<Bird>());
        }
    }

    for (auto &itr : animals)
    {
        itr->make_noise();
    }

    return 0;
}