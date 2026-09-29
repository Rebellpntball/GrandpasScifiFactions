[eAIRegisterFaction(eAIFactionTheUnshackled)]
class eAIFactionTheUnshackled : eAIFaction
{
	void eAIFactionTheUnshackled()
	{
		m_Name = "The Unshackled";
		m_Loadout = "Unshackled_Loadout";
		m_IsGuard = false;
		m_MeleeDamageMultiplier = 2.5;
		m_HasUnlimitedStamina = true;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionTheUnshackled)) return true;
		return false;
	}

	override string GetDisplayName() { return "The Unshackled"; }
};

[eAIRegisterFaction(eAIFactionTheUnshackledGuards)]
class eAIFactionTheUnshackledGuards : eAIFactionTheUnshackled
{
	void eAIFactionTheUnshackledGuards()
	{
		m_Loadout = "Unshackled_Guard_Loadout";
		m_IsGuard = true;
		m_MeleeDamageMultiplier = 3.0;
	}

	override string GetDisplayName() { return "Unshackled Guards"; }
};
