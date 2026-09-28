[eAIRegisterFaction(eAIFactionHelix_Corporation)]
class eAIFactionHelix_Corporation : eAIFaction
{
	void eAIFactionHelix_Corporation()
	{
		m_Name = "Helix Corporation";
		m_Loadout = "Helix_Corporation_Loadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionHelix_Corporation)) return true;
		if (other.IsInherited(eAIFactionBlackline_Security)) return true;
		return false;
	}

	override string GetDisplayName() { return "Helix Corporation"; }
};