[eAIRegisterFaction(eAIFactionNATO)]
class eAIFactionNATO : eAIFaction
{
	void eAIFactionNATO()
	{
		m_Name = "NATO";
		m_Loadout = "NATO_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionNATO)) return true;
		if (other.IsInherited(eAIFactionContinuity_Command)) return true;
		if (other.IsInherited(eAIFactionEcho_Network)) return true;
		if (other.IsInherited(eAIFactionVARGR_Group)) return true;
		if (other.IsInherited(eAIFactionVARGR_PMC)) return true;
		if (other.IsInherited(eAIFactionRedline_Sisters)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "NATO"; }
};