[eAIRegisterFaction(eAIFactionNekrologists)]
class eAIFactionNekrologists : eAIFaction
{
	void eAIFactionNekrologists()
	{
		m_Name = "Nekrologists";
		m_Loadout = "Nekrologists_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionNekrologists)) return true;
		return false;
	}

	override string GetDisplayName() { return "Nekrologists"; }
};
