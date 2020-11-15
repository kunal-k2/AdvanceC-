class Dog;
class Cat;
class Singleton
{
private:
    /* data */
    static Dog* pd;
    static Cat* pc;
public:
    ~Singleton();
    static Dog* getDog();
    static Cat* getCat();
};

