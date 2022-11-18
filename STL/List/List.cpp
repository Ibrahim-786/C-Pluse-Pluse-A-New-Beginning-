#include<iostream>
#include<list>


int main()
{
	std::list<int> l = {10,20,30,40};

	l.push_back(50);
	l.push_back(60);

	std::list<int>::iterator itr;

	for(itr=l.begin();itr!=l.end();itr++)
	{
		std::cout<<*itr<<" ";
	}

	return 0;
}



