class animal
{

public:
    animal();
    ~animal();

    virtual void eat() = 0;
    virtual void rest() = 0;
    virtual void sleep() = 0;
    virtual void hunt() = 0;
    virtual void drink() = 0;

    
};

class plant
{
public:
    plant();
    ~plant();

    virtual void grow() = 0;
    
};