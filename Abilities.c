#include <iostream>
#include <string>
using namespace std;

class Abilities {
	Actor actor;
	
	// Base Abilities
	Ability terra, hydras, aeris, fire, frost, light, strength, step, sense, blink, manifestation, sight, mend, transference, shift;
	
	
	
	
	
	public:
		void _init_(Actor);
		void setup_default_skills();
		void setup_terra_skills();
		void setup_hydras_skills();
		void setup_aeris_skills();
		void setup_fire_skills();
		void setup_frost_skills();
		void setup_light_skills();
		void setup_strength_skills();
		void setup_step_skills();
		void setup_sense_skills();
		void setup_blink_skills();
		void setup_manifestation_skills();
		void setup_sight_skills();
		void setup_mend_skills();
		void setup_transference_skills();
		void setup_shift_skills();
};

void Abilities::_init_(a){
	actor = a;
	terra = new Ability('terra', 'elemental', false);
	hydras = new Ability('hydras', 'elemental', false);
	aeris = new Ability('aeris', 'elemental', false);
	fire = new Ability('fire', 'energy', false);
	frost = new Ability('frost', 'energy', false);
	light = new Ability('light', 'energy', false);
	strength = new Ability('strength', 'physical', false);
	step = new Ability('step', 'physical', false);
	sense = new Ability('sense', 'physical', false);
	blink = new Ability('blink', 'quantum', false);
	manifestation = new Ability('manifestation', 'quantum', false);
	sight = new Ability('sight', 'quantum', false);
	mend = new Ability('mend', 'spirit', false);
	transference = new Ability('transference', 'spirit', false);
	shift = new Ability('shift', 'spirit', false);
}