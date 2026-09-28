[eAIRegisterFaction(eAIFactionVolkodlak)]
class eAIFactionVolkodlak : eAIFaction
{
	void eAIFactionVolkodlak()
	{
		m_Name = "Volkodlak";
		m_Loadout = "Volkodlak_Loadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionVolkodlak)) return true;
		return false;
	}

	override string GetDisplayName() { return "Volkodlak"; }
};