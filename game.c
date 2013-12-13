#include <stdio.h>
#include <stdlib.h>

//battle sim
// turn based

//Structs and ENUMS
typedef enum{
	POTION, WEAPON, ARMOR, SPELL
}type_e;

typedef struct{
	char name[50]; //name of item
	char description[500]; //description of the item
	type_e type; //what type of item is this?
	int value; //damage or armor amount
	int str_mod, wis_mod, agil_mod; //strength/wisdom/agility modifier( ex adds or subtracts to these attributes)
	int hp_mod, energy_mod; //health/energy  modifier(ex adds or subtracts health/energy)
} item_t;

typedef struct{
	char name[50]; //units name
	int strength, wisdom, agility; //units base attributes
	int gold; //amount of money the unit has
	int level; //level of unit
	int expCur, expNext; //experience points current and needed to get to next level |  in the case of enemies, this there EXP worth(ie how much you get from them)
	int healthMax, healthCur, energyMax, energyCur; //minimum and current values of health and energy	
}character;



//Function prototypes
void spawnCharacter(character* Guy); //create a player character
void levelUp(character* Guy); //level up Guy - give 2 attribute points and additional health or energy, raise xp cap
void createEntity(); //create an entity(ie enemy, npc, etc)
void equipArmor(character* Guy, item_t Armor); //check and put armor on Guy
void equipWeapon(character* Guy, item_t Weapon); //check and give weapon to Guy
void applyDamage(character* Guy, double damage); //apply double damage to Guy 



int main(){
	character* player = malloc(sizeof(character)); //create the main character pointer and allocate space for it
	spawnCharacter(player); //create the initial player with a basic functionality
	
	
	return 0;
}


void createEntity(){
	//create a new character(ie enemies, npc's, etc)
}

void spawnCharacter(character* Guy){
	//generate assets for a new player	
	printf("What is your name?\n");
	scanf(" %s", Guy->name);
	printf("\nWelcome %s!", Guy->name);
	Guy->agility = 1;
	Guy->strength = 1;
	Guy->wisdom = 1;
	Guy->energyMax = 100;
	Guy->healthMax = 100;
	Guy->energyCur = 100;
	Guy->healthCur = 100;
	Guy->level = 0;
	Guy->expCur = 0;
	Guy->expNext = 100;
	Guy->gold = 0;
}
