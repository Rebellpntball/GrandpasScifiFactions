[eAIRegisterFaction(eAIFactionEcho_Network)]
class eAIFactionEcho_Network : eAIFaction
{
	void eAIFactionEcho_Network()
	{
		m_Name = "Echo Network";
		m_Loadout = "Echo_Network_Loadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionEcho_Network)) return true;
		return false;
	}

	override string GetDisplayName() { return "Echo Network"; }
};