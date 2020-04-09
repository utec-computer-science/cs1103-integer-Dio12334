#include<iostream>

class Integer{
	private:
		int value;
	public:
		Integer();
		Integer(int value);
		Integer(const Integer& other);
		Integer operator=(const Integer& other);
		Integer operator+(int value);
		operator int();
		friend std::ostream& operator <<(std::ostream& os, const Integer&);
		friend std::istream& operator >>(std::istream& os, Integer&);

};

int main(){


	return 0;
}
