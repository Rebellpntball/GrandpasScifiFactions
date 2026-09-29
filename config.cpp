#define _ARMA_

class CfgPatches
{
	class GrandpasScifiFactions_scripts
	{
		units[] = {};
		weapons[] = {};
		name = "Grandpas SciFi Factions";
		author = "Rebellpntball / Grandpa";
		requiredAddons[] = {"DayZExpansion_AI_Scripts"};
	};
};

class CfgMods
{
	class GrandpasScifiFactions
	{
		dir = "GrandpasScifiFactions";
		name = "Grandpas SciFi Factions";
		credits = "Rebellpntball";
		author = "Rebellpntball";
		type = "mod";

		dependencies[] = {"Game"}; 

		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"GrandpasScifiFactions/Scripts/3_Game"};
			}
		}
	};
};
