#include <iostream>
#include <string>
using namespace std;

class Actor{
	string name;
	Stats stats;
	Abilities abilities;
	public:
		void _init_(string);
};

void Actor::_init_(n){
	name = n;
	abilities = new Abilities(this);
}