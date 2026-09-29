[eAIRegisterFaction(eAIFactionPallasAether)]
class eAIFactionPallasAether : eAIFaction
{
	void eAIFactionPallasAether()
	{
		m_Name = "Pallas Aether";
		m_Loadout = "Pallas_Aether_Loadout";
		m_IsGuard = false;
		m_HasUnlimitedStamina = true;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionPallasAether)) return true;
		// Hostile to players' paths and scavs; ignore pure passives so they don't chain-aggro traders
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionObservers)) return true;
		return false;
	}

	override string GetDisplayName() { return "Pallas Aether"; }
};

[eAIRegisterFaction(eAIFactionPallasAetherGuards)]
class eAIFactionPallasAetherGuards : eAIFactionPallasAether
{
	void eAIFactionPallasAetherGuards()
	{
		m_Loadout = "Pallas_Aether_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Pallas Aether Guards"; }
};
