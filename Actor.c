#include <iostream>
#include <string>
#include <map>
using namespace std;

class Actor{
	string name;
	Stats stats;
	Abilities abilities;
	map<string,int> primes;
	public:
		void _init_(string);
};

void Actor::_init_(n){
	name = n;
	abilities = new Abilities(this);
	primes['terra'] = 0;
	primes['hydras'] = 0;
	primes['aeris'] = 0;
	primes['fire'] = 0;
	primes['frost'] = 0;
	primes['light'] = 0;
	primes['strength'] = 0;
	primes['step'] = 0;
	primes['sense'] = 0;
	primes['blink'] = 0;
	primes['manifestation'] = 0;
	primes['sight'] = 0;
	primes['mend'] = 0;
	primes['transference'] = 0;
	primes['shift'] = 0;
}