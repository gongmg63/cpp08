#include "MutantStack.hpp"
#include <list>
// #include <vector>
#include <iostream>

template<typename T>
void	test_container_push(T& con)
{
	con.push(5);
	con.push(17);
	std::cout << con.top() << " ";
	con.pop();
	std::cout << con.size() << " ";
	con.push(3);
	con.push(5);
	con.push(737);
	con.push(0);
	typename T::iterator it = con.begin();
	typename T::iterator ite = con.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	typename T::reverse_iterator rit = con.rbegin();
	typename T::reverse_iterator rite = con.rend();
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
}

template<typename T>
void	test_container_push_back(T& con)
{
	con.push_back(5);
	con.push_back(17);
	std::cout << con.back()<< " ";
	con.pop_back();
	std::cout << con.size() << " ";
	con.push_back(3);
	con.push_back(5);
	con.push_back(737);
	con.push_back(0);
	typename T::iterator it = con.begin();
	typename T::iterator ite = con.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	typename T::reverse_iterator rit = con.rbegin();
	typename T::reverse_iterator rite = con.rend();
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
}

int main()
{
	std::cout << "MutantStack Test\n";
	MutantStack<int> mstack;
	test_container_push(mstack);
	std::stack<int> s(mstack);

	std::cout << "\n\nList Test\n";
	std::list<int> list;
	test_container_push_back(list);
	std::list<int> l(list);
	std::cout << "\n\n";
	return 0;
}