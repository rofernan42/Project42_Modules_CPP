#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
	Intern();
	Intern(const Intern &copy);
	~Intern();

	Intern	&operator=(const Intern&);

	Form	*makeForm(std::string const &name, std::string const &target);

	class UnknownForm: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Unknown Form Type");
		};
	};

	private:
	typedef struct		s_callfct
	{
		std::string	_name;
		Form		*(*_fct)(std::string const &target);
	}			t_callfct;
	t_callfct		_create_form[3];
};

#endif
