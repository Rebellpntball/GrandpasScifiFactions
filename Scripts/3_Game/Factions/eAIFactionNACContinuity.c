[eAIRegisterFaction(eAIFactionNACContinuity)]
class eAIFactionNACContinuity : eAIFaction
{
	void eAIFactionNACContinuity()
	{
		m_Name = "NAC Continuity";
		m_Loadout = "NAC_Continuity_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionNACContinuity)) return true;
		if (other.IsInherited(eAIFactionFreshDayzMilitia)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "NAC Continuity"; }
};
