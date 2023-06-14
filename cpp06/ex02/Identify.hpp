#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <ctime>
# include <cstdlib>
# include <exception>
# include <unistd.h>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

int randomNbrs(void);

#endif