#include<iostream>
#include<set>


int main()
{
	std::set<int> s={1,2,3,4,5};

	s.insert(20);

	s.insert(30);

	std::set<int>::iterator itr;

	std::cout<<"iterator \n";

	for(itr= s.begin();itr!=s.end();itr++)
	{
		std::cout<<*itr<<" ";
	}

	std::cout<<"\nusing for each loop\n";
	for(int x:s)
	{
		std::cout<<x<<" ";
	}
	std::cout<<"\n";

	return 0;
}

