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
		void setName(std::string newName);
};

Zombie *zomebieHorde(int N, std::string name);