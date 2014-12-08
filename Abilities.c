#include <iostream>
#include <string>
using namespace std;

class Abilities {
	Actor actor;
	
	// Base Abilities
	Ability terra, hydras, aeris, fire, frost, light, strength, step, sense, blink, manifestation, sight, mend, transference, shift;
	
	// Dual Abilities
	Ability terra_hydras, terra_aeris, terra_fire, terra_frost, terra_light, terra_strength, terra_step, terra_sense, terra_blink, terra_manifestation, terra_sight, terra_mend, terra_transference, terra_shift;
	Ability hydras_aeris, hydras_fire, hydras_frost, hydras_light, hydras_strength, hydras_step, hydras_sense, hydras_blink, hydras_manifestation, hydras_sight, hydras_mend, hydras_transference, hydras_shift;
	Ability aeris_fire, aeris_frost, aeris_light, aeris_strength, aeris_step, aeris_sense, aeris_blink, aeris_manifestation, aeris_sight, aeris_mend, aeris_transference, aeris_shift;
	Ability fire_frost, fire_light, fire_strength, fire_step, fire_sense, fire_blink, fire_manifestation, fire_sight, fire_mend, fire_transference, fire_shift;
	Ability frost_light, frost_strength, frost_step, frost_sense, frost_blink, frost_manifestation, frost_sight, frost_mend, frost_transference, frost_shift;
	Ability light_strength, light_step, light_sense, light_blink, light_manifestation, light_sight, light_mend, light_transference, light_shift;
	Ability strength_step, strength_sense, strength_blink, strength_manifestation, strength_sight, strength_mend, strength_transference, strength_shift;
	Ability step_sense, step_blink, step_manifestation, step_sight, step_mend, step_transference, step_shift;
	Ability sense_blink, sense_manifestation, sense_sight, sense_mend, sense_transference, sense_shift;
	Ability blink_manifestation, blink_sight, blink_mend, blink_transference, blink_shift;
	Ability manifestation_sight, manifestation_mend, manifestation_transference, manifestation_shift;
	Ability sight_mend, sight_transference, sight_shift;
	Ability mend_transference, mend_shift;
	Ability transference_shift;	
	
	
	
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