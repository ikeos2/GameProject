#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"

//prototypes
void applyDamage(character* Attacker, character* Victim, item_t Weapon, item_t Armor);

//definitions
void applyDamage(character* Attacker, character* Victim, item_t Weapon, item_t Armor){
	if(Weapon.type == WEAPON) {double damage = Attacker->strength * Weapon.value;}
	else printf("\nerror 01\n");
	if(Armor.type ==  ARMOR) {double defense = Victim->agility * Armor.value; }
	else printf("\nerror 01\n");
}
