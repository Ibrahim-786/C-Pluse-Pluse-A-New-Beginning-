#include<iostream>
#include<vector>

int main()
{
	std::vector<int> v={10,20,30,40};

	v.push_back(50);

	v.push_back(60);

	v.pop_back();

	for(int x:v)
		std::cout<<x<<" ";

	return 0;
}

