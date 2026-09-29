[eAIRegisterFaction(eAIFactionTheUnshackled)]
class eAIFactionTheUnshackled : eAIFaction
{
	void eAIFactionTheUnshackled()
	{
		m_Name = "The Unshackled";
		m_Loadout = "Unshackled_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionTheUnshackled)) return true;
		return false;
	}

	override string GetDisplayName() { return "The Unshackled"; }
};
