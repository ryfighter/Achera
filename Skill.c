#include <iostream>
using namespace std;

class Skill {
	Ability ability;
	string name, description, button;
	int score;
	Skill requires, unlocks, blocked;
	bool prime_needed, available, unlocked, active_primary, active_secondary;
	public:
		void _init_(ability, string, string, string, int, skill, skill, skill, bool, bool, bool, bool, bool);
		void set_prime_needed(bool) {prime_needed = true;}
		void set_available(bool){unlocked = true;}
		void set_unlocked(bool){unlocked = true;}
		void set_active_primary(bool){unlocked = true;}
		void set_active_secondary(bool){unlocked = true;}
};

void Skill::_init_(abn, n, d, b, s, r, uks, bkd, pn, av, ukd, avp, avs){
	ability = abn; // such as: fire, frost, light, hydras, terra, aeris, strength, sense, step, sight, manifestation, blink, shift, mend, absorption
	name = n;
	description = d;
	button = b;
	score = s;
	requires = r;
	unlocks= uks;
	blocked = bkd;
	prime_needed = pn;
	available = av;
	unlocked = ukd;
	active_primary = avp;
	active_secondary = avs;
}