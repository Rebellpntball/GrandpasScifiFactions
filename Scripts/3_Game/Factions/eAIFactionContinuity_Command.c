[eAIRegisterFaction(eAIFactionContinuity_Command)]
class eAIFactionContinuity_Command : eAIFaction
{
	void eAIFactionContinuity_Command()
	{
		m_Name = "Continuity Command";
		m_Loadout = "Continuity_Command_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionContinuity_Command)) return true;
		if (other.IsInherited(eAIFactionNATO)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "Continuity Command"; }
};