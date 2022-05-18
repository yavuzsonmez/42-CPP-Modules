# include "../inc/MutantStack.hpp"
# include <list>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}
	std::cout << "------" << std::endl << std::endl;
	{
		std::list<int> mlist;
		mlist.push_back(5);
		mlist.push_back(17);

		std::cout << mlist.back() << std::endl;

		mlist.pop_back();

		std::cout << mlist.size() << std::endl;

		mlist.push_back(3);
		mlist.push_back(5);
		mlist.push_back(737);
		mlist.push_back(0);

		std::list<int>::iterator it = mlist.begin();
		std::list<int>::iterator ite = mlist.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::list<int> s(mlist);
	}
	std::cout << "____________________________" << std::endl << std::endl;
	{
		MutantStack<char> mstack;
		mstack.push('g');
		mstack.push('a');

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push('q');
		mstack.push('y');
		mstack.push('u');
		mstack.push('g');

		MutantStack<char>::iterator it = mstack.begin();
		MutantStack<char>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<char> s(mstack);
	}
	std::cout << "------" << std::endl << std::endl;
	{
		std::list<char> mlist;
		mlist.push_back('g');
		mlist.push_back('a');

		std::cout << mlist.back() << std::endl;

		mlist.pop_back();

		std::cout << mlist.size() << std::endl;

		mlist.push_back('q');
		mlist.push_back('y');
		mlist.push_back('u');
		mlist.push_back('g');

		std::list<char>::iterator it = mlist.begin();
		std::list<char>::iterator ite = mlist.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::list<char> s(mlist);
	}
	return 0;
}