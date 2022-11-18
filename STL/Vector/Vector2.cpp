#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v={10,20,30,40};

	v.push_back(50);

	v.push_back(60);

	v.pop_back();

	std::vector<int>::iterator itr;
	
	for(itr = v.begin(); itr!=v.end();itr++)
	{
		std::cout<<*itr<<" ";
	}


	return 0;
}

