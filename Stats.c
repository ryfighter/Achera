#include <iostream>
using namespace std;

class Stats{
	// High Level Stats
	int lifeforce, //Affects Health (HP) and Stamina (SP)
		vitavis; //Affects Vitavis (VP)
	// Variable Stats
	int vitality, // Affects Health (HP)
		endurance, // Affects Stamina (SP)
		energy, // Affects Vitavis (VP)
		luck, // Affects Drop Rate and Critical Chance
		telekinesis, // Affects Elemental Abilities and Unarmed Techniques
		physique, // Affects Physical Abilities and Two-Handed Techniques
		awareness, // Affects Quantum Abilities and One-Handed Techniques
		telepathy, // Affects Atomic Abilities and Book Techniques
		life; // Affects Spirit Abilities and Staff Techniques
	// Dynamic Stats
	int madness;
	public: 
		void _init_(int, int, int, int, int, int, int, int, int, int);
		double get_base_hp();
		double get_base_sp();
		double get_base_vp();
		double get_base_atk();
		double get_base_def();	
		double get_base_tks_atk();
		double get_base_tks_def();				
		double get_base_phy_atk();
		double get_base_phy_def();				
		double get_base_awr_atk();
		double get_base_awr_def();				
		double get_base_tpy_atk();
		double get_base_tpy_def();				
		double get_base_lfe_atk();
		double get_base_lfe_def();
		
		double getMadnessPercent();
		double getMP() {return madness;}
};

void Stats::_init_(lfc, vts, vty, end, nrg, lck, tks, phy, awr, tpy, lfe, mds){
	lifeforce = lfc;
	vitavis = vts;
	vitality = vty;
	endurance = end;
	energy = nrg;
	luck = lck;
	telekinesis = tks;
	physique = phy;
	awareness = awr;
	telepathy = tpy;
	life = lfe;
	madness = mds;
}

double getBaseHP(){
	return (((lifeforce * 5) + (vitality * 5)) * getMadnessPercent());
}

double getBaseSP(){
	return (((lifeforce * 2.5) + (endurance * 2)) * getMadnessPercent());
}

double getBaseVP(){
	return (((vitavis * 2.5) + (energy * 2)) * (1 + getMadnessPercent()));
}
double get_base_atk() {
	return (telekinesis + physique + awareness + telepathy + life) / 5;
}
double get_base_def() {
	return (vitality + endurance + energy + luck);
}
double getMadnessPercent(){
	return (1 - (madness / 100));
}




		
		
		
		