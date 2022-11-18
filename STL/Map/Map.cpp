#include<iostream>
#include<map>

int main()
{
	std::map<int,std::string> m;

	m.insert(std::pair<int,std::string>(1,"pasha"));

	m.insert(std::pair<int,std::string>(2,"nvidia"));
	m.insert(std::pair<int,std::string>(3,"good"));


	std::map<int , std::string>::iterator itr;

	for(itr = m.begin();itr!=m.end();itr++)
	{
		std::cout<<itr->first<<" "<<itr->second<<"\n";
	}

	std::map<int,std::string>::iterator itr1;

	itr1 = m.find(2);

	std::cout<<itr1->first<<" "<<itr1->second;

	return 0;
}

