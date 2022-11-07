#include<iostream>
#include<string>
#include <unistd.h>


//Multicast Ip range
//224.0.0.0 - 239.255.255.255

void Generate_Multicast_Ip_Address(void)
{
	
	int o1=224,o2=0,o3=0,o4=0;



 for(o1;o1<240;o1++)
 {
        for(o2=0;o2<256;o2++)
        {
            for(o3=0;o3<256;o3++)
            {
               for(o4=0;o4<256;o4++)
                {
                   std::string pi = std::to_string(o1) + "." + std::to_string(o2)+ "." + std::to_string(o3)+ "." + std::to_string(o4);

		   std::cout << pi << '\n';

                    usleep(10);
                }
            }
        }
 }



}




int main(int argc, char * argv[])
{





	Generate_Multicast_Ip_Address();

	return 0;
}


