#include<iostream>
#include<forward_list>


int main()
{

	std::forward_list<int> fl = {10,20,30,40,50};

	//fl.push_back(60);
	//fl.push_back(70);

	std::forward_list<int>::iterator itr;
	std::cout<<"before push front\n";
	for(itr = fl.begin();itr!=fl.end();itr++)
	{
		std::cout<<*itr<<" ";
	}

	fl.push_front(9);
	fl.push_front(8);
	std::cout<<"\n"<<"after push front\n";

	for(itr = fl.begin();itr!=fl.end();itr++)
	{
		std::cout<<*itr<<" ";
	}


	return 0;
}


