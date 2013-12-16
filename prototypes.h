typedef enum{
	POTION, WEAPON, ARMOR, SPELL
}type_e;

typedef struct{
	char name[50]; //name of item
	char description[500]; //description of the item
	type_e type; //what type of item is this?
	int value; //damage or armor amount
	int str_mod, wis_mod, agil_mod; //strength/wisdom/agility modifier( ex adds or subtracts to these attributes)
	int hpCur_mod, hpMax_mod, energyCur_mod, energyMax_mod; //health/energy  modifier(ex adds or subtracts health/energy)
} item_t;

typedef struct{
	char name[50]; //units name
	int strength, wisdom, agility; //units base attributes
	int gold; //amount of money the unit has
	int level; //level of unit
	int expCur, expNext; //experience points current and needed to get to next level |  in the case of enemies, this there EXP worth(ie how much you get from them)
	int healthMax, healthCur, energyMax, energyCur; //minimum and current values of health and energy	
}character;
