[eAIRegisterFaction(eAIFactionLegoslovResearch)]
class eAIFactionLegoslovResearch : eAIFaction
{
	void eAIFactionLegoslovResearch()
	{
		m_Name = "Legoslov Institute";
		m_Loadout = "Legoslov_Research_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionLegoslovResearch)) return true;
		if (other.IsInherited(eAIFactionFreshDayzMilitia)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		// Base Expansion - safe defaults
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionGuards)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		if (other.IsInherited(eAIFactionWest)) return true;
		return false;
	}

	override string GetDisplayName() { return "Legoslov Institute"; }
};

[eAIRegisterFaction(eAIFactionLegoslovResearchGuards)]
class eAIFactionLegoslovResearchGuards : eAIFactionLegoslovResearch
{
	void eAIFactionLegoslovResearchGuards()
	{
		m_Loadout = "Legoslov_Research_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Legoslov Institute Guards"; }
};
