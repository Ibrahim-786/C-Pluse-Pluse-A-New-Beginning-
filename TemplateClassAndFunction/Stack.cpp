#include<iostream>


class stack
{
	private: 
		int *st;
		int top;
		int size;
	public:

		stack(int size)
		{
			this->size = size;
			this->top = -1;
			this->st  = new int [this->size];
		}

		void push(int x)
		{
			if(this->top == this->size-1)
			{
				std::cout<<"stack is full\n";
			}
			else
			{
				this->top++;
				this->st[top] = x;
			}
		}

		int pop( )
		{
			int temp;

			if(this->top == -1)
			{
				std::cout<<"stack is empty \n";
			}
			else
			{

				temp = this->st[top];
				this->top--;
			}
			return temp;
		}
};



int main()
{

	stack s1(10);

	s1.push(1);

	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	s1.push(6);

	//std::cout<<s1.pop();
	
	s1.push(7);
	s1.push(8);
	s1.push(9);

	s1.push(10);

	s1.push(11);
	
	
	std::cout<<s1.pop()<<"\n";
	
	s1.push(11);
	
	
	
	return 0;

}
