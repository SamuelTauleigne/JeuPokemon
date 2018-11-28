#include "pch.h"
#include "header.h"
#include <string>
#include"bestiaire.h"
#include"pokemonTypes.h"
#include"pokemon.h"
#include<iostream>
#include<string>
using namespace std;



// Initialisation Bestiaire
int sizeBestiaire = 150;

void initBestiaire(EspecePokemon bestiaire[])
{
	bestiaire[0].nom = (char*)"Bulbasaur";
	bestiaire[0].type = Grass;
	bestiaire[0].nbBonbonsPourEvoluer = 25;
	bestiaire[0].evolvesTo = (char*)"Ivysaur";

	bestiaire[1].nom = (char*)"Ivysaur";
	bestiaire[1].type = Grass;
	bestiaire[1].nbBonbonsPourEvoluer = 100;
	bestiaire[1].evolvesTo = (char*)"Venusaur";

	bestiaire[2].nom = (char*)"Venusaur";
	bestiaire[2].type = Grass;
	bestiaire[2].nbBonbonsPourEvoluer = 0;
	bestiaire[2].evolvesTo = (char*)nullptr;

	bestiaire[3].nom = (char*)"Charmander";
	bestiaire[3].type = Fire;
	bestiaire[3].nbBonbonsPourEvoluer = 25;
	bestiaire[3].evolvesTo = (char*)"Charmeleon";

	bestiaire[4].nom = (char*)"Charmeleon";
	bestiaire[4].type = Fire;
	bestiaire[4].nbBonbonsPourEvoluer = 100;
	bestiaire[4].evolvesTo = (char*)"Charizard";

	bestiaire[5].nom = (char*)"Charizard";
	bestiaire[5].type = Fire;
	bestiaire[5].nbBonbonsPourEvoluer = 0;
	bestiaire[5].evolvesTo = (char*)nullptr;

	bestiaire[6].nom = (char*)"Squirtle";
	bestiaire[6].type = Water;
	bestiaire[6].nbBonbonsPourEvoluer = 25;
	bestiaire[6].evolvesTo = (char*)"Wartortle";

	bestiaire[7].nom = (char*)"Wartortle";
	bestiaire[7].type = Water;
	bestiaire[7].nbBonbonsPourEvoluer = 100;
	bestiaire[7].evolvesTo = (char*)"Blastoise";

	bestiaire[8].nom = (char*)"Blastoise";
	bestiaire[8].type = Water;
	bestiaire[8].nbBonbonsPourEvoluer = 0;
	bestiaire[8].evolvesTo = (char*)nullptr;

	bestiaire[9].nom = (char*)"Caterpie";
	bestiaire[9].type = Bug;
	bestiaire[9].nbBonbonsPourEvoluer = 12;
	bestiaire[9].evolvesTo = (char*)"Metapod";



	bestiaire[10].nom = (char*)"Metapod";

	bestiaire[10].type = Bug;

	bestiaire[10].nbBonbonsPourEvoluer = 50;

	bestiaire[10].evolvesTo = (char*)"Butterfree";



	bestiaire[11].nom = (char*)"Butterfree";

	bestiaire[11].type = Bug;

	bestiaire[11].nbBonbonsPourEvoluer = 0;

	bestiaire[11].evolvesTo = (char*)nullptr;



	bestiaire[12].nom = (char*)"Weedle";

	bestiaire[12].type = Bug;

	bestiaire[12].nbBonbonsPourEvoluer = 12;

	bestiaire[12].evolvesTo = (char*)"Kakuna";



	bestiaire[13].nom = (char*)"Kakuna";

	bestiaire[13].type = Bug;

	bestiaire[13].nbBonbonsPourEvoluer = 50;

	bestiaire[13].evolvesTo = (char*)"Beedrill";



	bestiaire[14].nom = (char*)"Beedrill";

	bestiaire[14].type = Bug;

	bestiaire[14].nbBonbonsPourEvoluer = 0;

	bestiaire[14].evolvesTo = (char*)nullptr;



	bestiaire[15].nom = (char*)"Pidgey";

	bestiaire[15].type = Normal;

	bestiaire[15].nbBonbonsPourEvoluer = 12;

	bestiaire[15].evolvesTo = (char*)"Pidgeotto";



	bestiaire[16].nom = (char*)"Pidgeotto";

	bestiaire[16].type = Normal;

	bestiaire[16].nbBonbonsPourEvoluer = 50;

	bestiaire[16].evolvesTo = (char*)"Pidgeot";



	bestiaire[17].nom = (char*)"Pidgeot";

	bestiaire[17].type = Normal;

	bestiaire[17].nbBonbonsPourEvoluer = 0;

	bestiaire[17].evolvesTo = (char*)nullptr;



	bestiaire[18].nom = (char*)"Rattata";

	bestiaire[18].type = Normal;

	bestiaire[18].nbBonbonsPourEvoluer = 25;

	bestiaire[18].evolvesTo = (char*)"Raticate";



	bestiaire[19].nom = (char*)"Raticate";

	bestiaire[19].type = Normal;

	bestiaire[19].nbBonbonsPourEvoluer = 0;

	bestiaire[19].evolvesTo = (char*)nullptr;



	bestiaire[20].nom = (char*)"Spearow";

	bestiaire[20].type = Normal;

	bestiaire[20].nbBonbonsPourEvoluer = 50;

	bestiaire[20].evolvesTo = (char*)"Fearow";



	bestiaire[21].nom = (char*)"Fearow";

	bestiaire[21].type = Normal;

	bestiaire[21].nbBonbonsPourEvoluer = 0;

	bestiaire[21].evolvesTo = (char*)nullptr;



	bestiaire[22].nom = (char*)"Ekans";

	bestiaire[22].type = Poison;

	bestiaire[22].nbBonbonsPourEvoluer = 50;

	bestiaire[22].evolvesTo = (char*)"Arbok";



	bestiaire[23].nom = (char*)"Arbok";

	bestiaire[23].type = Poison;

	bestiaire[23].nbBonbonsPourEvoluer = 0;

	bestiaire[23].evolvesTo = (char*)nullptr;



	bestiaire[24].nom = (char*)"Pikachu";

	bestiaire[24].type = Electric;

	bestiaire[24].nbBonbonsPourEvoluer = 50;

	bestiaire[24].evolvesTo = (char*)"Raichu";



	bestiaire[25].nom = (char*)"Raichu";

	bestiaire[25].type = Electric;

	bestiaire[25].nbBonbonsPourEvoluer = 0;

	bestiaire[25].evolvesTo = (char*)nullptr;



	bestiaire[26].nom = (char*)"Sandshrew";

	bestiaire[26].type = Ground;

	bestiaire[26].nbBonbonsPourEvoluer = 50;

	bestiaire[26].evolvesTo = (char*)"Sandslash";



	bestiaire[27].nom = (char*)"Sandslash";

	bestiaire[27].type = Ground;

	bestiaire[27].nbBonbonsPourEvoluer = 0;

	bestiaire[27].evolvesTo = (char*)nullptr;



	bestiaire[28].nom = (char*)"NidoranF";

	bestiaire[28].type = Poison;

	bestiaire[28].nbBonbonsPourEvoluer = 25;

	bestiaire[28].evolvesTo = (char*)"Nidorina";



	bestiaire[29].nom = (char*)"Nidorina";

	bestiaire[29].type = Poison;

	bestiaire[29].nbBonbonsPourEvoluer = 100;

	bestiaire[29].evolvesTo = (char*)"Nidoqueen";



	bestiaire[30].nom = (char*)"Nidoqueen";

	bestiaire[30].type = Poison;

	bestiaire[30].nbBonbonsPourEvoluer = 0;

	bestiaire[30].evolvesTo = (char*)nullptr;



	bestiaire[31].nom = (char*)"NidoranM";

	bestiaire[31].type = Poison;

	bestiaire[31].nbBonbonsPourEvoluer = 25;

	bestiaire[31].evolvesTo = (char*)"Nidorino";



	bestiaire[32].nom = (char*)"Nidorino";

	bestiaire[32].type = Poison;

	bestiaire[32].nbBonbonsPourEvoluer = 100;

	bestiaire[32].evolvesTo = (char*)"Nidoking";



	bestiaire[33].nom = (char*)"Nidoking";

	bestiaire[33].type = Poison;

	bestiaire[33].nbBonbonsPourEvoluer = 0;

	bestiaire[33].evolvesTo = (char*)nullptr;



	bestiaire[34].nom = (char*)"Clefairy";

	bestiaire[34].type = Normal;

	bestiaire[34].nbBonbonsPourEvoluer = 50;

	bestiaire[34].evolvesTo = (char*)"Clefable";



	bestiaire[35].nom = (char*)"Clefable";

	bestiaire[35].type = Normal;

	bestiaire[35].nbBonbonsPourEvoluer = 0;

	bestiaire[35].evolvesTo = (char*)nullptr;



	bestiaire[36].nom = (char*)"Vulpix";

	bestiaire[36].type = Fire;

	bestiaire[36].nbBonbonsPourEvoluer = 50;

	bestiaire[36].evolvesTo = (char*)"Ninetales";



	bestiaire[37].nom = (char*)"Ninetales";

	bestiaire[37].type = Fire;

	bestiaire[37].nbBonbonsPourEvoluer = 0;

	bestiaire[37].evolvesTo = (char*)nullptr;



	bestiaire[38].nom = (char*)"Jigglypuff";

	bestiaire[38].type = Normal;

	bestiaire[38].nbBonbonsPourEvoluer = 50;

	bestiaire[38].evolvesTo = (char*)"Wigglytuff";



	bestiaire[39].nom = (char*)"Wigglytuff";

	bestiaire[39].type = Normal;

	bestiaire[39].nbBonbonsPourEvoluer = 0;

	bestiaire[39].evolvesTo = (char*)nullptr;



	bestiaire[40].nom = (char*)"Zubat";

	bestiaire[40].type = Poison;

	bestiaire[40].nbBonbonsPourEvoluer = 50;

	bestiaire[40].evolvesTo = (char*)"Golbat";



	bestiaire[41].nom = (char*)"Golbat";

	bestiaire[41].type = Poison;

	bestiaire[41].nbBonbonsPourEvoluer = 0;

	bestiaire[41].evolvesTo = (char*)nullptr;



	bestiaire[42].nom = (char*)"Oddish";

	bestiaire[42].type = Grass;

	bestiaire[42].nbBonbonsPourEvoluer = 25;

	bestiaire[42].evolvesTo = (char*)"Gloom";



	bestiaire[43].nom = (char*)"Gloom";

	bestiaire[43].type = Grass;

	bestiaire[43].nbBonbonsPourEvoluer = 100;

	bestiaire[43].evolvesTo = (char*)"Vileplume";



	bestiaire[44].nom = (char*)"Vileplume";

	bestiaire[44].type = Grass;

	bestiaire[44].nbBonbonsPourEvoluer = 0;

	bestiaire[44].evolvesTo = (char*)nullptr;



	bestiaire[45].nom = (char*)"Paras";

	bestiaire[45].type = Bug;

	bestiaire[45].nbBonbonsPourEvoluer = 50;

	bestiaire[45].evolvesTo = (char*)"Parasect";



	bestiaire[46].nom = (char*)"Parasect";

	bestiaire[46].type = Bug;

	bestiaire[46].nbBonbonsPourEvoluer = 0;

	bestiaire[46].evolvesTo = (char*)nullptr;



	bestiaire[47].nom = (char*)"Venonat";

	bestiaire[47].type = Bug;

	bestiaire[47].nbBonbonsPourEvoluer = 50;

	bestiaire[47].evolvesTo = (char*)"Venomoth";



	bestiaire[48].nom = (char*)"Venomoth";

	bestiaire[48].type = Bug;

	bestiaire[48].nbBonbonsPourEvoluer = 0;

	bestiaire[48].evolvesTo = (char*)nullptr;



	bestiaire[49].nom = (char*)"Diglett";

	bestiaire[49].type = Ground;

	bestiaire[49].nbBonbonsPourEvoluer = 50;

	bestiaire[49].evolvesTo = (char*)"Dugtrio";



	bestiaire[50].nom = (char*)"Dugtrio";

	bestiaire[50].type = Ground;

	bestiaire[50].nbBonbonsPourEvoluer = 0;

	bestiaire[50].evolvesTo = (char*)nullptr;



	bestiaire[51].nom = (char*)"Meowth";

	bestiaire[51].type = Normal;

	bestiaire[51].nbBonbonsPourEvoluer = 50;

	bestiaire[51].evolvesTo = (char*)"Persian";



	bestiaire[52].nom = (char*)"Persian";

	bestiaire[52].type = Normal;

	bestiaire[52].nbBonbonsPourEvoluer = 0;

	bestiaire[52].evolvesTo = (char*)nullptr;



	bestiaire[53].nom = (char*)"Psyduck";

	bestiaire[53].type = Water;

	bestiaire[53].nbBonbonsPourEvoluer = 50;

	bestiaire[53].evolvesTo = (char*)"Golduck";



	bestiaire[54].nom = (char*)"Golduck";

	bestiaire[54].type = Water;

	bestiaire[54].nbBonbonsPourEvoluer = 0;

	bestiaire[54].evolvesTo = (char*)nullptr;



	bestiaire[55].nom = (char*)"Mankey";

	bestiaire[55].type = Fighting;

	bestiaire[55].nbBonbonsPourEvoluer = 50;

	bestiaire[55].evolvesTo = (char*)"Primeape";



	bestiaire[56].nom = (char*)"Primeape";

	bestiaire[56].type = Fighting;

	bestiaire[56].nbBonbonsPourEvoluer = 0;

	bestiaire[56].evolvesTo = (char*)nullptr;



	bestiaire[57].nom = (char*)"Growlithe";

	bestiaire[57].type = Fire;

	bestiaire[57].nbBonbonsPourEvoluer = 50;

	bestiaire[57].evolvesTo = (char*)"Arcanine";



	bestiaire[58].nom = (char*)"Arcanine";

	bestiaire[58].type = Fire;

	bestiaire[58].nbBonbonsPourEvoluer = 0;

	bestiaire[58].evolvesTo = (char*)nullptr;



	bestiaire[59].nom = (char*)"Poliwag";

	bestiaire[59].type = Water;

	bestiaire[59].nbBonbonsPourEvoluer = 25;

	bestiaire[59].evolvesTo = (char*)"Poliwhirl";



	bestiaire[60].nom = (char*)"Poliwhirl";

	bestiaire[60].type = Water;

	bestiaire[60].nbBonbonsPourEvoluer = 100;

	bestiaire[60].evolvesTo = (char*)"Poliwrath";



	bestiaire[61].nom = (char*)"Poliwrath";

	bestiaire[61].type = Water;

	bestiaire[61].nbBonbonsPourEvoluer = 0;

	bestiaire[61].evolvesTo = (char*)nullptr;



	bestiaire[62].nom = (char*)"Abra";

	bestiaire[62].type = Psychic;

	bestiaire[62].nbBonbonsPourEvoluer = 25;

	bestiaire[62].evolvesTo = (char*)"Kadabra";



	bestiaire[63].nom = (char*)"Kadabra";

	bestiaire[63].type = Psychic;

	bestiaire[63].nbBonbonsPourEvoluer = 100;

	bestiaire[63].evolvesTo = (char*)"Alakazam";



	bestiaire[64].nom = (char*)"Alakazam";

	bestiaire[64].type = Psychic;

	bestiaire[64].nbBonbonsPourEvoluer = 0;

	bestiaire[64].evolvesTo = (char*)nullptr;



	bestiaire[65].nom = (char*)"Machop";

	bestiaire[65].type = Fighting;

	bestiaire[65].nbBonbonsPourEvoluer = 25;

	bestiaire[65].evolvesTo = (char*)"Machoke";



	bestiaire[66].nom = (char*)"Machoke";

	bestiaire[66].type = Fighting;

	bestiaire[66].nbBonbonsPourEvoluer = 100;

	bestiaire[66].evolvesTo = (char*)"Machamp";



	bestiaire[67].nom = (char*)"Machamp";

	bestiaire[67].type = Fighting;

	bestiaire[67].nbBonbonsPourEvoluer = 0;

	bestiaire[67].evolvesTo = (char*)nullptr;



	bestiaire[68].nom = (char*)"Bellsprout";

	bestiaire[68].type = Grass;

	bestiaire[68].nbBonbonsPourEvoluer = 25;

	bestiaire[68].evolvesTo = (char*)"Weepinbell";



	bestiaire[69].nom = (char*)"Weepinbell";

	bestiaire[69].type = Grass;

	bestiaire[69].nbBonbonsPourEvoluer = 100;

	bestiaire[69].evolvesTo = (char*)"Victreebel";



	bestiaire[70].nom = (char*)"Victreebel";

	bestiaire[70].type = Grass;

	bestiaire[70].nbBonbonsPourEvoluer = 0;

	bestiaire[70].evolvesTo = (char*)nullptr;



	bestiaire[71].nom = (char*)"Tentacool";

	bestiaire[71].type = Water;

	bestiaire[71].nbBonbonsPourEvoluer = 50;

	bestiaire[71].evolvesTo = (char*)"Tentacruel";



	bestiaire[72].nom = (char*)"Tentacruel";

	bestiaire[72].type = Water;

	bestiaire[72].nbBonbonsPourEvoluer = 0;

	bestiaire[72].evolvesTo = (char*)nullptr;



	bestiaire[73].nom = (char*)"Geodude";

	bestiaire[73].type = Rock;

	bestiaire[73].nbBonbonsPourEvoluer = 25;

	bestiaire[73].evolvesTo = (char*)"Graveler";



	bestiaire[74].nom = (char*)"Graveler";

	bestiaire[74].type = Rock;

	bestiaire[74].nbBonbonsPourEvoluer = 100;

	bestiaire[74].evolvesTo = (char*)"Golem";



	bestiaire[75].nom = (char*)"Golem";

	bestiaire[75].type = Rock;

	bestiaire[75].nbBonbonsPourEvoluer = 0;

	bestiaire[75].evolvesTo = (char*)nullptr;



	bestiaire[76].nom = (char*)"Ponyta";

	bestiaire[76].type = Fire;

	bestiaire[76].nbBonbonsPourEvoluer = 50;

	bestiaire[76].evolvesTo = (char*)"Rapidash";



	bestiaire[77].nom = (char*)"Rapidash";

	bestiaire[77].type = Fire;

	bestiaire[77].nbBonbonsPourEvoluer = 0;

	bestiaire[77].evolvesTo = (char*)nullptr;



	bestiaire[78].nom = (char*)"Slowpoke";

	bestiaire[78].type = Water;

	bestiaire[78].nbBonbonsPourEvoluer = 50;

	bestiaire[78].evolvesTo = (char*)"Slowbro";



	bestiaire[79].nom = (char*)"Slowbro";

	bestiaire[79].type = Water;

	bestiaire[79].nbBonbonsPourEvoluer = 0;

	bestiaire[79].evolvesTo = (char*)nullptr;



	bestiaire[80].nom = (char*)"Magnemite";

	bestiaire[80].type = Electric;

	bestiaire[80].nbBonbonsPourEvoluer = 50;

	bestiaire[80].evolvesTo = (char*)"Magneton";



	bestiaire[81].nom = (char*)"Magneton";

	bestiaire[81].type = Electric;

	bestiaire[81].nbBonbonsPourEvoluer = 0;

	bestiaire[81].evolvesTo = (char*)nullptr;



	bestiaire[82].nom = (char*)"Farfetched";

	bestiaire[82].type = Normal;

	bestiaire[82].nbBonbonsPourEvoluer = 0;

	bestiaire[82].evolvesTo = (char*)nullptr;



	bestiaire[83].nom = (char*)"Doduo";

	bestiaire[83].type = Normal;

	bestiaire[83].nbBonbonsPourEvoluer = 50;

	bestiaire[83].evolvesTo = (char*)"Dodrio";



	bestiaire[84].nom = (char*)"Dodrio";

	bestiaire[84].type = Normal;

	bestiaire[84].nbBonbonsPourEvoluer = 0;

	bestiaire[84].evolvesTo = (char*)nullptr;



	bestiaire[85].nom = (char*)"Seel";

	bestiaire[85].type = Water;

	bestiaire[85].nbBonbonsPourEvoluer = 50;

	bestiaire[85].evolvesTo = (char*)"Dewgong";



	bestiaire[86].nom = (char*)"Dewgong";

	bestiaire[86].type = Water;

	bestiaire[86].nbBonbonsPourEvoluer = 0;

	bestiaire[86].evolvesTo = (char*)nullptr;



	bestiaire[87].nom = (char*)"Grimer";

	bestiaire[87].type = Poison;

	bestiaire[87].nbBonbonsPourEvoluer = 50;

	bestiaire[87].evolvesTo = (char*)"Muk";



	bestiaire[88].nom = (char*)"Muk";

	bestiaire[88].type = Poison;

	bestiaire[88].nbBonbonsPourEvoluer = 0;

	bestiaire[88].evolvesTo = (char*)nullptr;



	bestiaire[89].nom = (char*)"Shellder";

	bestiaire[89].type = Water;

	bestiaire[89].nbBonbonsPourEvoluer = 50;

	bestiaire[89].evolvesTo = (char*)"Cloyster";



	bestiaire[90].nom = (char*)"Cloyster";

	bestiaire[90].type = Water;

	bestiaire[90].nbBonbonsPourEvoluer = 0;

	bestiaire[90].evolvesTo = (char*)nullptr;



	bestiaire[91].nom = (char*)"Gastly";

	bestiaire[91].type = Ghost;

	bestiaire[91].nbBonbonsPourEvoluer = 25;

	bestiaire[91].evolvesTo = (char*)"Haunter";



	bestiaire[92].nom = (char*)"Haunter";

	bestiaire[92].type = Ghost;

	bestiaire[92].nbBonbonsPourEvoluer = 100;

	bestiaire[92].evolvesTo = (char*)"Haunter";



	bestiaire[93].nom = (char*)"Gengar";

	bestiaire[93].type = Ghost;

	bestiaire[93].nbBonbonsPourEvoluer = 0;

	bestiaire[93].evolvesTo = (char*)nullptr;



	bestiaire[94].nom = (char*)"Onix";

	bestiaire[94].type = Rock;

	bestiaire[94].nbBonbonsPourEvoluer = 0;

	bestiaire[94].evolvesTo = (char*)nullptr;



	bestiaire[95].nom = (char*)"Drowzee";

	bestiaire[95].type = Psychic;

	bestiaire[95].nbBonbonsPourEvoluer = 50;

	bestiaire[95].evolvesTo = (char*)"Hypno";



	bestiaire[96].nom = (char*)"Hypno";

	bestiaire[96].type = Psychic;

	bestiaire[96].nbBonbonsPourEvoluer = 0;

	bestiaire[96].evolvesTo = (char*)nullptr;



	bestiaire[97].nom = (char*)"Krabby";

	bestiaire[97].type = Water;

	bestiaire[97].nbBonbonsPourEvoluer = 50;

	bestiaire[97].evolvesTo = (char*)"Kingler";



	bestiaire[98].nom = (char*)"Kingler";

	bestiaire[98].type = Water;

	bestiaire[98].nbBonbonsPourEvoluer = 0;

	bestiaire[98].evolvesTo = (char*)nullptr;



	bestiaire[99].nom = (char*)"Voltorb";

	bestiaire[99].type = Electric;

	bestiaire[99].nbBonbonsPourEvoluer = 50;

	bestiaire[99].evolvesTo = (char*)"Electrode";



	bestiaire[100].nom = (char*)"Electrode";

	bestiaire[100].type = Electric;

	bestiaire[100].nbBonbonsPourEvoluer = 0;

	bestiaire[100].evolvesTo = (char*)nullptr;



	bestiaire[101].nom = (char*)"Exeggcute";

	bestiaire[101].type = Grass;

	bestiaire[101].nbBonbonsPourEvoluer = 50;

	bestiaire[101].evolvesTo = (char*)"Exeggcutor";



	bestiaire[102].nom = (char*)"Exeggcutor";

	bestiaire[102].type = Grass;

	bestiaire[102].nbBonbonsPourEvoluer = 0;

	bestiaire[102].evolvesTo = (char*)nullptr;



	bestiaire[103].nom = (char*)"Cubone";

	bestiaire[103].type = Ground;

	bestiaire[103].nbBonbonsPourEvoluer = 50;

	bestiaire[103].evolvesTo = (char*)"Marowak";



	bestiaire[104].nom = (char*)"Marowak";

	bestiaire[104].type = Ground;

	bestiaire[104].nbBonbonsPourEvoluer = 0;

	bestiaire[104].evolvesTo = (char*)nullptr;



	bestiaire[105].nom = (char*)"Hitmonlee";

	bestiaire[105].type = Fighting;

	bestiaire[105].nbBonbonsPourEvoluer = 0;

	bestiaire[105].evolvesTo = (char*)nullptr;



	bestiaire[106].nom = (char*)"Hitmonchan";

	bestiaire[106].type = Fighting;

	bestiaire[106].nbBonbonsPourEvoluer = 0;

	bestiaire[106].evolvesTo = (char*)nullptr;



	bestiaire[107].nom = (char*)"Lickitung";

	bestiaire[107].type = Normal;

	bestiaire[107].nbBonbonsPourEvoluer = 0;

	bestiaire[107].evolvesTo = (char*)nullptr;



	bestiaire[108].nom = (char*)"Koffing";

	bestiaire[108].type = Poison;

	bestiaire[108].nbBonbonsPourEvoluer = 50;

	bestiaire[108].evolvesTo = (char*)"Weezing";



	bestiaire[109].nom = (char*)"Weezing";

	bestiaire[109].type = Poison;

	bestiaire[109].nbBonbonsPourEvoluer = 0;

	bestiaire[109].evolvesTo = (char*)nullptr;



	bestiaire[110].nom = (char*)"Rhyhorn";

	bestiaire[110].type = Ground;

	bestiaire[110].nbBonbonsPourEvoluer = 50;

	bestiaire[110].evolvesTo = (char*)"Rhydon";



	bestiaire[111].nom = (char*)"Rhydon";

	bestiaire[111].type = Ground;

	bestiaire[111].nbBonbonsPourEvoluer = 0;

	bestiaire[111].evolvesTo = (char*)nullptr;



	bestiaire[112].nom = (char*)"Chansey";

	bestiaire[112].type = Normal;

	bestiaire[112].nbBonbonsPourEvoluer = 0;

	bestiaire[112].evolvesTo = (char*)nullptr;



	bestiaire[113].nom = (char*)"Tangela";

	bestiaire[113].type = Grass;

	bestiaire[113].nbBonbonsPourEvoluer = 0;

	bestiaire[113].evolvesTo = (char*)nullptr;



	bestiaire[114].nom = (char*)"Kangaskhan";

	bestiaire[114].type = Normal;

	bestiaire[114].nbBonbonsPourEvoluer = 0;

	bestiaire[114].evolvesTo = (char*)nullptr;



	bestiaire[115].nom = (char*)"Horsea";

	bestiaire[115].type = Water;

	bestiaire[115].nbBonbonsPourEvoluer = 50;

	bestiaire[115].evolvesTo = (char*)"Seadra";



	bestiaire[116].nom = (char*)"Seadra";

	bestiaire[116].type = Water;

	bestiaire[116].nbBonbonsPourEvoluer = 0;

	bestiaire[116].evolvesTo = (char*)nullptr;



	bestiaire[117].nom = (char*)"Goldeen";

	bestiaire[117].type = Water;

	bestiaire[117].nbBonbonsPourEvoluer = 50;

	bestiaire[117].evolvesTo = (char*)"Seaking";



	bestiaire[118].nom = (char*)"Seaking";

	bestiaire[118].type = Water;

	bestiaire[118].nbBonbonsPourEvoluer = 0;

	bestiaire[118].evolvesTo = (char*)nullptr;



	bestiaire[119].nom = (char*)"Staryu";

	bestiaire[119].type = Water;

	bestiaire[119].nbBonbonsPourEvoluer = 50;

	bestiaire[119].evolvesTo = (char*)"Starmie";



	bestiaire[120].nom = (char*)"Starmie";

	bestiaire[120].type = Water;

	bestiaire[120].nbBonbonsPourEvoluer = 0;

	bestiaire[120].evolvesTo = (char*)nullptr;



	bestiaire[121].nom = (char*)"MrMime";

	bestiaire[121].type = Psychic;

	bestiaire[121].nbBonbonsPourEvoluer = 0;

	bestiaire[121].evolvesTo = (char*)nullptr;



	bestiaire[122].nom = (char*)"Scyther";

	bestiaire[122].type = Bug;

	bestiaire[122].nbBonbonsPourEvoluer = 0;

	bestiaire[122].evolvesTo = (char*)nullptr;



	bestiaire[123].nom = (char*)"Jynx";

	bestiaire[123].type = Ice;

	bestiaire[123].nbBonbonsPourEvoluer = 0;

	bestiaire[123].evolvesTo = (char*)nullptr;



	bestiaire[124].nom = (char*)"Electabuzz";

	bestiaire[124].type = Electric;

	bestiaire[124].nbBonbonsPourEvoluer = 0;

	bestiaire[124].evolvesTo = (char*)nullptr;



	bestiaire[125].nom = (char*)"Magmar";

	bestiaire[125].type = Fire;

	bestiaire[125].nbBonbonsPourEvoluer = 0;

	bestiaire[125].evolvesTo = (char*)nullptr;



	bestiaire[126].nom = (char*)"Pinsir";

	bestiaire[126].type = Bug;

	bestiaire[126].nbBonbonsPourEvoluer = 0;

	bestiaire[126].evolvesTo = (char*)nullptr;



	bestiaire[127].nom = (char*)"Tauros";

	bestiaire[127].type = Normal;

	bestiaire[127].nbBonbonsPourEvoluer = 0;

	bestiaire[127].evolvesTo = (char*)nullptr;



	bestiaire[128].nom = (char*)"Magikarp";

	bestiaire[128].type = Water;

	bestiaire[128].nbBonbonsPourEvoluer = 400;

	bestiaire[128].evolvesTo = (char*)"Gyarados";



	bestiaire[129].nom = (char*)"Gyarados";

	bestiaire[129].type = Water;

	bestiaire[129].nbBonbonsPourEvoluer = 0;

	bestiaire[129].evolvesTo = (char*)nullptr;



	bestiaire[130].nom = (char*)"Lapras";

	bestiaire[130].type = Water;

	bestiaire[130].nbBonbonsPourEvoluer = 0;

	bestiaire[130].evolvesTo = (char*)nullptr;



	bestiaire[131].nom = (char*)"Ditto";

	bestiaire[131].type = Normal;

	bestiaire[131].nbBonbonsPourEvoluer = 0;

	bestiaire[131].evolvesTo = (char*)nullptr;



	bestiaire[132].nom = (char*)"Eevee";

	bestiaire[132].type = Normal;

	bestiaire[132].nbBonbonsPourEvoluer = 25;

	bestiaire[132].evolvesTo = (char*)"Vaporeon, Jolteon or Flareon (random chance)"; /////////////////////////////////////////////



	bestiaire[133].nom = (char*)"Vaporeon";

	bestiaire[133].type = Water;

	bestiaire[133].nbBonbonsPourEvoluer = 0;

	bestiaire[133].evolvesTo = (char*)nullptr;



	bestiaire[134].nom = (char*)"Jolteon";

	bestiaire[134].type = Electric;

	bestiaire[134].nbBonbonsPourEvoluer = 0;

	bestiaire[134].evolvesTo = (char*)nullptr;



	bestiaire[135].nom = (char*)"Flareon";

	bestiaire[135].type = Fire;

	bestiaire[135].nbBonbonsPourEvoluer = 0;

	bestiaire[135].evolvesTo = (char*)nullptr;



	bestiaire[136].nom = (char*)"Porygon";

	bestiaire[136].type = Normal;

	bestiaire[136].nbBonbonsPourEvoluer = 0;

	bestiaire[136].evolvesTo = (char*)nullptr;



	bestiaire[137].nom = (char*)"Omanyte";

	bestiaire[137].type = Rock;

	bestiaire[137].nbBonbonsPourEvoluer = 50;

	bestiaire[137].evolvesTo = (char*)"Omastar";



	bestiaire[138].nom = (char*)"Omastar";
	bestiaire[138].type = Rock;
	bestiaire[138].nbBonbonsPourEvoluer = 0;
	bestiaire[138].evolvesTo = (char*)nullptr;

	bestiaire[139].nom = (char*)"Kabuto";
	bestiaire[139].type = Rock;
	bestiaire[139].nbBonbonsPourEvoluer = 50;
	bestiaire[139].evolvesTo = (char*)"Kabutops";

	bestiaire[140].nom = (char*)"Kabutops";
	bestiaire[140].type = Rock;
	bestiaire[140].nbBonbonsPourEvoluer = 0;
	bestiaire[140].evolvesTo = (char*)nullptr;

	bestiaire[141].nom = (char*)"Aerodactyl";
	bestiaire[141].type = Rock;
	bestiaire[141].nbBonbonsPourEvoluer = 0;
	bestiaire[141].evolvesTo = (char*)nullptr;

	bestiaire[142].nom = (char*)"Snorlax";
	bestiaire[142].type = Normal;
	bestiaire[142].nbBonbonsPourEvoluer = 0;
	bestiaire[142].evolvesTo = (char*)nullptr;

	bestiaire[143].nom = (char*)"Articuno";
	bestiaire[143].type = Ice;
	bestiaire[143].nbBonbonsPourEvoluer = 0;
	bestiaire[143].evolvesTo = (char*)nullptr;

	bestiaire[144].nom = (char*)"Zapdos";
	bestiaire[144].type = Electric;
	bestiaire[144].nbBonbonsPourEvoluer = 0;
	bestiaire[144].evolvesTo = (char*)nullptr;

	bestiaire[145].nom = (char*)"Moltres";
	bestiaire[145].type = Fire;
	bestiaire[145].nbBonbonsPourEvoluer = 0;
	bestiaire[145].evolvesTo = (char*)nullptr;

	bestiaire[146].nom = (char*)"Dratini";
	bestiaire[146].type = Dragon;
	bestiaire[146].nbBonbonsPourEvoluer = 25;
	bestiaire[146].evolvesTo = (char*)"Dragonair";

	bestiaire[147].nom = (char*)"Dragonair";
	bestiaire[147].type = Dragon;
	bestiaire[147].nbBonbonsPourEvoluer = 100;
	bestiaire[147].evolvesTo = (char*)"Dragonite";

	bestiaire[148].nom = (char*)"Dragonite";
	bestiaire[148].type = Dragon;
	bestiaire[148].nbBonbonsPourEvoluer = 0;
	bestiaire[148].evolvesTo = (char*)nullptr;

	bestiaire[149].nom = (char*)"Mewtwo";
	bestiaire[149].type = Psychic;
	bestiaire[149].nbBonbonsPourEvoluer = 0;
	bestiaire[149].evolvesTo = (char*)nullptr;

	// rajout des infos d’évolution
	for (int i = 0; i < 150; i ++)
	{ 
		bestiaire[i].estEvolue = true;
	}
	// set all evolved pokemon to true
	bestiaire[0].estEvolue = 0; 
	bestiaire[3].estEvolue = 0; 
	bestiaire[6].estEvolue = 0;
	bestiaire[9].estEvolue = 0; 
	bestiaire[12].estEvolue = 0; 
	bestiaire[15].estEvolue = 0; 
	bestiaire[18].estEvolue = 0; 
	bestiaire[20].estEvolue = 0;
	bestiaire[22].estEvolue = 0; 
	bestiaire[24].estEvolue = 0; 
	bestiaire[26].estEvolue = 0;
	bestiaire[28].estEvolue = 0;
	bestiaire[31].estEvolue = 0;
	bestiaire[34].estEvolue = 0;
	bestiaire[36].estEvolue = 0;
	bestiaire[38].estEvolue = 0;
	bestiaire[40].estEvolue = 0;
	bestiaire[42].estEvolue = 0;
	bestiaire[45].estEvolue = 0;
	bestiaire[47].estEvolue = 0;
	bestiaire[49].estEvolue = 0;
	bestiaire[51].estEvolue = 0;
	bestiaire[53].estEvolue = 0;
	bestiaire[55].estEvolue = 0;
	bestiaire[57].estEvolue = 0;
	bestiaire[59].estEvolue = 0;
	bestiaire[62].estEvolue = 0;
	bestiaire[65].estEvolue = 0;
	bestiaire[68].estEvolue = 0;
	bestiaire[71].estEvolue = 0; 
	bestiaire[73].estEvolue = 0; 
	bestiaire[76].estEvolue = 0; 
	bestiaire[78].estEvolue = 0; 
	bestiaire[80].estEvolue = 0; 
	bestiaire[82].estEvolue = 0; 
	bestiaire[83].estEvolue = 0; 
	bestiaire[107].estEvolue = 0; 
	bestiaire[108].estEvolue = 0; 
	bestiaire[110].estEvolue = 0; 
	bestiaire[112].estEvolue = 0;
	bestiaire[113].estEvolue = 0;
	bestiaire[114].estEvolue = 0;
	bestiaire[115].estEvolue = 0;
	bestiaire[117].estEvolue = 0;
	bestiaire[119].estEvolue = 0;
	bestiaire[121].estEvolue = 0;
	bestiaire[122].estEvolue = 0;
	bestiaire[123].estEvolue = 0;
	bestiaire[124].estEvolue = 0; 
	bestiaire[125].estEvolue = 0; 
	bestiaire[126].estEvolue = 0; 
	bestiaire[127].estEvolue = 0; 
	bestiaire[128].estEvolue = 0; 
	bestiaire[130].estEvolue = 0; 
	bestiaire[131].estEvolue = 0; 
	bestiaire[132].estEvolue = 0; 
	bestiaire[136].estEvolue = 0; 
	bestiaire[137].estEvolue = 0; 
	bestiaire[139].estEvolue = 0; 
	bestiaire[141].estEvolue = 0; 
	bestiaire[142].estEvolue = 0; 
	bestiaire[143].estEvolue = 0; 
	bestiaire[144].estEvolue = 0; 
	bestiaire[145].estEvolue = 0; 
	bestiaire[146].estEvolue = 0; 
	bestiaire[149].estEvolue = 0;
}


// Affichage Bestiaire
void displayBestiaire(EspecePokemon bestiaire[])
{
	cout << "##### Affichage du bestiaire #####" << endl << endl;
	for (int k = 0; k < 150; k++)
	{
		cout << bestiaire[k].nom << endl;
	}
	cout << endl;
}


// Tri du bestiaire
void sortBestiaire(EspecePokemon bestiaire[])
{
	int i = 0, j, imin;
	char *min;
	char *val;
	EspecePokemon tmp;
	while (i < sizeBestiaire)
	{
		min = (char*)bestiaire[i].nom;
		imin = i;
		for (j = i + 1; j < sizeBestiaire; j++)
		{
			val = (char*)bestiaire[j].nom;
			if (strcmp(val, min) < 0)
			{
				imin = j;
				min = val;
			}
		}
		tmp = bestiaire[i];
		bestiaire[i] = bestiaire[imin];
		bestiaire[imin] = tmp;
		i++;
	}
}


// Recherche du type dans le bestiaire
int findType(const Pokemon p, EspecePokemon bestiaire[])
{
	int i = 0;
	while ((i < sizeBestiaire)&(bestiaire[i].nom != p.nom))
	{
		i++;
	}
	return bestiaire[i].type;
}