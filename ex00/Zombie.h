#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        Zombie(std::string name);
        
        //member functions
        void annouce(void);   
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );