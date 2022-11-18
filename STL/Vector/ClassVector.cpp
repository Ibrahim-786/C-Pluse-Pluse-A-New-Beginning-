#include<iostream>
#include<vector>



class store
{
	public:
		std::string name;
		int price;
		std::string quality;

		store(std::string n, int p, std::string q)
		{
			this->name = n;
			this->price = p;
			this->quality = q;
		}

};

int main()
{

	std::vector<store> obj;
	

	obj.push_back("aa",10,"good");

	return 0;
}

