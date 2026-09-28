[eAIRegisterFaction(eAIFactionVARGR_PMC)]
class eAIFactionVARGR_PMC : eAIFaction
{
	void eAIFactionVARGR_PMC()
	{
		m_Name = "VARGR PMC";
		m_Loadout = "VARGR_PMC_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionVARGR_PMC)) return true;
		if (other.IsInherited(eAIFactionVARGR_Group)) return true;
		if (other.IsInherited(eAIFactionNATO)) return true;
		if (other.IsInherited(eAIFactionRedline_Sisters)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "VARGR PMC"; }
};