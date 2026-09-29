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
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		return false;
	}

	override string GetDisplayName() { return "Scrap Union"; }
};

[eAIRegisterFaction(eAIFactionScrapUnionGuards)]
class eAIFactionScrapUnionGuards : eAIFactionScrapUnion
{
	void eAIFactionScrapUnionGuards()
	{
		m_Loadout = "Scrap_Union_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Scrap Union Guards"; }
};
