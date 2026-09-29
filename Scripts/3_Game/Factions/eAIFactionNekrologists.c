[eAIRegisterFaction(eAIFactionNekrologists)]
class eAIFactionNekrologists : eAIFaction
{
	void eAIFactionNekrologists()
	{
		m_Name = "Nekrologists";
		m_Loadout = "Nekrologists_Loadout";
		m_IsGuard = false;
		m_MeleeDamageMultiplier = 4.0;
		m_MeleeYeetForce = 2.0;
		m_MeleeYeetFactors = "0.6 0.8 0.6";
		m_HasUnlimitedStamina = true;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionNekrologists)) return true;
		return false;
	}

	override string GetDisplayName() { return "Nekrologists"; }
};

[eAIRegisterFaction(eAIFactionNekrologistsGuards)]
class eAIFactionNekrologistsGuards : eAIFactionNekrologists
{
	void eAIFactionNekrologistsGuards()
	{
		m_Loadout = "Nekrologists_Guard_Loadout";
		m_IsGuard = true;
		m_MeleeDamageMultiplier = 5.0;
		m_MeleeYeetForce = 3.0;
	}

	override string GetDisplayName() { return "Nekrologists Guards"; }
};
