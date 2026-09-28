[eAIRegisterFaction(eAIFactionRedline_Sisters)]
class eAIFactionRedline_Sisters : eAIFaction
{
	void eAIFactionRedline_Sisters()
	{
		m_Name = "Redline Sisters";
		m_Loadout = "Redline_Sisters_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionRedline_Sisters)) return true;
		if (other.IsInherited(eAIFactionVARGR_PMC)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "Redline Sisters"; }
};