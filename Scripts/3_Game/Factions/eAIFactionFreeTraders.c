[eAIRegisterFaction(eAIFactionFreeTraders)]
class eAIFactionFreeTraders : eAIFaction
{
	void eAIFactionFreeTraders()
	{
		m_Name = "Free Traders";
		m_Loadout = "FreeTraders_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		return true;
	}

	override string GetDisplayName() { return "Free Traders"; }
};

[eAIRegisterFaction(eAIFactionFreeTradersGuards)]
class eAIFactionFreeTradersGuards : eAIFactionFreeTraders
{
	void eAIFactionFreeTradersGuards()
	{
		m_Loadout = "FreeTraders_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Free Traders Guards"; }
};
