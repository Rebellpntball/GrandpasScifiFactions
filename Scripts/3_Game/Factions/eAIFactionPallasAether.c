[eAIRegisterFaction(eAIFactionPallasAether)]
class eAIFactionPallasAether : eAIFaction
{
	void eAIFactionPallasAether()
	{
		m_Name = "Pallas Aether";
		m_Loadout = "Pallas_Aether_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionPallasAether)) return true;
		return false;
	}

	override string GetDisplayName() { return "Pallas Aether"; }
};
