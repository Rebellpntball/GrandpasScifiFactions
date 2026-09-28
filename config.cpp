#define _ARMA_

class CfgPatches
{
	class Einarvargr_Factions_scripts
	{
		units[] = {};
		weapons[] = {};
		name = "Einarvargr Factions";
		author = "Einarvargr";
		requiredAddons[] = {"DayZExpansion_AI_Scripts"};
	};
};

class CfgMods
{
	class Einarvargr_Factions
	{
		dir = "Einarvargr_Factions";
		name = "Einarvargr Factions";
		credits = "Einarvargr";
		author = "Einarvargr";
		type = "mod";

		dependencies[] = {"Game"}; 

		class defs
		{
			class gameScriptModule
			{
				value = "";
				// Pfad mit PBO-Prefix, genau wie bei Dolphin
				files[] = {"Einarvargr_Factions/Scripts/3_Game"};
			};
		}
	};
};