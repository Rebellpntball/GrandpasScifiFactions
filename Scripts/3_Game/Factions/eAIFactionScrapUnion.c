[eAIRegisterFaction(eAIFactionScrapUnion)]
class eAIFactionScrapUnion : eAIFaction
{
	void eAIFactionScrapUnion()
	{
		m_Name = "Scrap Union";
		m_Loadout = "Scrap_Union_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionScrapUnion)) return true;
		return false;
	}

	override string GetDisplayName() { return "Scrap Union"; }
};
