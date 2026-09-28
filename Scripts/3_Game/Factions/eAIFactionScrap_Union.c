[eAIRegisterFaction(eAIFactionScrap_Union)]
class eAIFactionScrap_Union : eAIFaction
{
	void eAIFactionScrap_Union()
	{
		m_Name = "Scrap Union";
		m_Loadout = "Scrap_Union_Loadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionScrap_Union)) return true;
		return false;
	}

	override string GetDisplayName() { return "Scrap Union"; }
};