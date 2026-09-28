[eAIRegisterFaction(eAIFactionOVKS)]
class eAIFactionOVKS : eAIFaction
{
	void eAIFactionOVKS()
	{
		m_Name = "OVKS";
		m_Loadout = "OVKS_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionOVKS)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "OVKS"; }
};