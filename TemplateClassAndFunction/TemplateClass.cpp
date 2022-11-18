#include<iostream>


template <class T>
class stack
{
	private: 
		T *st;
		int top;
		int size;
	public:

		stack(int size)
		{
			this->size = size;
			this->top = -1;
			this->st  = new T [this->size];
		}

		void push(T x)
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

	std::cout<<"integer stack \n";
	stack<int> s1(10);

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
	
//char type
	std::cout<<"char stack \n";
	
	stack<char> s2(10);

	s2.push('a');

	s2.push('b');
	s2.push('c');
	s2.push('d');
	s2.push('e');
	s2.push('f');

	//std::cout<<s1.pop();
	
	s2.push('g');
	s2.push('h');
	s2.push('i');

	s2.push('j');

	s2.push('k');
	
	
	std::cout<<s2.pop()<<"\n";
	
	s2.push('l');

	std::cout<<s2.pop()<<"\n";

	s2.push('k');
	
	
	return 0;

}
