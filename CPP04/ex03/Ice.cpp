#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(const Ice &copy): AMateria("ice")
{
	(void)copy;
}

Ice::~Ice()
{
}

Ice		&Ice::operator=(const Ice &b)
{
	this->_xp = b._xp;
	return (*this);
}

AMateria	*Ice::clone() const
{
	Ice *copy = new Ice(*this);
	return (copy);
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
