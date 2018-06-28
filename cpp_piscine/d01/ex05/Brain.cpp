#include "Brain.hpp"

Brain::Brain(void)
{
   std::stringstream ss;
   ss << this;
   address = ss.str();
}

Brain::~Brain(void)
{
    return;
}

std::string Brain::identify(void)
{
    return this->address;
}