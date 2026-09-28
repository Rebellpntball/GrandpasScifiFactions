[eAIRegisterFaction(eAIFactionVARGR_Group)]
class eAIFactionVARGR_Group : eAIFaction
{
	void eAIFactionVARGR_Group()
	{
		m_Name = "VARGR Group";
		m_Loadout = "VARGR_Group_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionVARGR_Group)) return true;
		if (other.IsInherited(eAIFactionVARGR_PMC)) return true;
		if (other.IsInherited(eAIFactionNATO)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "VARGR Group"; }
};