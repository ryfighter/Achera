#include <iostream>
#include <string>
using namespace std;

class Ability {
	string name, type;
	bool prime;
	Skill innate, 
		tier_one_standard,
		tier_two_standard,
		tier_three_standard,
		tier_four_standard,
		tier_five_standard,
		tier_three_prime,
		tier_four_prime,
		tier_five_prime,
		tier_six_sage,
		tier_two_dual_one,
		tier_three_dual_two,
		tier_four_dual_three,
		tier_five_trinity;
		
		
	public:
		void _init_(string, string, bool);
		
};

void Ability::_init_(n, t, p){
	name = n;
	type = t;
	
}