
#include <iostream>
using namespace std;
class Animal {
public:
	
	virtual void Speak() = 0;
};

class Frog : public Animal {
public:
	
	void Speak() override {
		cout << "Frog speaks" << endl;
	}
};
class Dog : public Animal {
public:
	void Speak() override{
		cout << "Dog speaks" << endl;
	}
};
class Cat : public Animal {
public:
	void Speak() override {
		cout << "Cat speaks " << endl;
	}
	void scratch(bool done) {
		if (!done) {
			cout << "Cat scratches" << endl;
		}
		else {
			cout << "Cat is not scratching " << endl;
		}
		
	}
	void purrs() {
		cout << "Cat purrs " << endl;
	}
		
	
};


int main() {
	
	Animal* st[3] = {new Frog(), new Dog(), new Cat()};
	
	for (int i = 0; i < 3; i++) {
		st[i]->Speak();
	}
	Cat* x = dynamic_cast<Cat*>(st[1]);
	x->scratch(true);
	Cat* i = dynamic_cast<Cat*>(st[2]);
	
	i->purrs();

	
}

