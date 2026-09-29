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
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "Legoslov Institute"; }
};
