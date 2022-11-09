#include<iostream>



int main(int argc, char ** argv, char **argenv)
{



	//std::cout<<argc;
//	std::cout<<argv[0]<<" "<<argv[1]<<"\n";

	char **temp = argenv;

	while( *temp != nullptr)
	{

		std::cout<<*temp<<"\n";
		temp++;
	}

	std::cout<<"\n End of the List \n";

	return 0;

}
