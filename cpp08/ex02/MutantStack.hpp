#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

// #include <stack>

// template <typename T>
// class MutantStack : public std::stack<T>
// {
// public:
//     using std::stack<T>::stack; // Inherit constructors

//     typedef typename std::stack<T>::container_type::iterator iterator;
//     typedef typename std::stack<T>::container_type::const_iterator const_iterator;

//     iterator begin() { return std::stack<T>::c.begin(); }
//     iterator end() { return std::stack<T>::c.end(); }

//     const_iterator begin() const { return std::stack<T>::c.begin(); }
//     const_iterator end() const { return std::stack<T>::c.end(); }
// };

// #endif


#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    MutantStack(): MutantStack::stack()
	{}

	MutantStack(const MutantStack& other): MutantStack::stack(other)
	{}

	MutantStack& operator=(const MutantStack& rhs)
	{
		MutantStack::stack::operator=(rhs);
		return *this;
	}

	~MutantStack()
	{}

    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }

    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

#endif


