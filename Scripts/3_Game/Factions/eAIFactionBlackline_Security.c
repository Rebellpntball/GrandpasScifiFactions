[eAIRegisterFaction(eAIFactionBlackline_Security)]
class eAIFactionBlackline_Security : eAIFaction
{
	void eAIFactionBlackline_Security()
	{
		m_Name = "Blackline Security";
		m_Loadout = "Blackline_Security_Loadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionBlackline_Security)) return true;
		if (other.IsInherited(eAIFactionHelix_Corporation)) return true;
		return false;
	}

	override string GetDisplayName() { return "Blackline Security"; }
};