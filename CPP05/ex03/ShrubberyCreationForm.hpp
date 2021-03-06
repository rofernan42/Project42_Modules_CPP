#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm&);

	virtual void	execute(Bureaucrat const &executor) const;

	private:
	std::string const	_target;
};

#endif
