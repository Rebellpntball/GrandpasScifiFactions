[eAIRegisterFaction(eAIFactionFreshDayzMilitia)]
class eAIFactionFreshDayzMilitia : eAIFaction
{
	void eAIFactionFreshDayzMilitia()
	{
		m_Name = "Fresh Dayz Militia";
		m_Loadout = "FreshDayz_Militia_Loadout";
		m_IsGuard = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionFreshDayzMilitia)) return true;
		if (other.IsInherited(eAIFactionLegoslovResearch)) return true;
		if (other.IsInherited(eAIFactionNACContinuity)) return true;
		if (other.IsInherited(eAIFactionFreeTraders)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}

	override string GetDisplayName() { return "Fresh Dayz Militia"; }
};

[eAIRegisterFaction(eAIFactionFreshDayzMilitiaGuards)]
class eAIFactionFreshDayzMilitiaGuards : eAIFactionFreshDayzMilitia
{
	void eAIFactionFreshDayzMilitiaGuards()
	{
		m_Loadout = "FreshDayz_Militia_Guard_Loadout";
		m_IsGuard = true;
	}

	override string GetDisplayName() { return "Fresh Dayz Militia Guards"; }
};
