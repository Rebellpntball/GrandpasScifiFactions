# Grandpas SciFi Factions

DayZ Expansion AI factions for **Namalsk 2150** (Fresh Dayz / Grandpa / Dr. Legoslov).

Requires: **DayZ Expansion AI**

## Player progression

1. **Start** → `FreshDayzMilitia` (mil-spec, lightly modified — no ships / jetpacks / energy shields)
2. **Quest path A** → `LegoslovResearch` (full sci-fi: DNA, mechs, ships, shields) — Grandpa = sci-fi trader
3. **Quest path B** → `TheUnshackled` (anti-tech) — separate trader rep

You handle quests and loadouts yourself.

---

## Custom factions & loadout names

| Faction (patrol string) | Guard variant | Default loadout | Guard loadout | Notes |
|-------------------------|---------------|-----------------|---------------|--------|
| `FreshDayzMilitia` | `FreshDayzMilitiaGuards` | `FreshDayz_Militia_Loadout` | `FreshDayz_Militia_Guard_Loadout` | Starter faction |
| `LegoslovResearch` | `LegoslovResearchGuards` | `Legoslov_Research_Loadout` | `Legoslov_Research_Guard_Loadout` | Sci-fi path |
| `PallasAether` | `PallasAetherGuards` | `Pallas_Aether_Loadout` | `Pallas_Aether_Guard_Loadout` | Hostile augmented tech; unlimited stamina |
| `TheUnshackled` | `TheUnshackledGuards` | `Unshackled_Loadout` | `Unshackled_Guard_Loadout` | Anti-tech; melee 2.5x / 3.0x |
| `Nekrologists` | `NekrologistsGuards` | `Nekrologists_Loadout` | `Nekrologists_Guard_Loadout` | Horror; melee 4x–5x; **friendly to infected/zombies** |
| `NACContinuity` | `NACContinuityGuards` | `NAC_Continuity_Loadout` | `NAC_Continuity_Guard_Loadout` | Remnant military |
| `FreeTraders` | `FreeTradersGuards` | `FreeTraders_Loadout` | `FreeTraders_Guard_Loadout` | Friendly to **all** |
| `ScrapUnion` | `ScrapUnionGuards` | `Scrap_Union_Loadout` | `Scrap_Union_Guard_Loadout` | Scavengers |

In `AIPatrolSettings.json` use the short name **without** the `eAIFaction` prefix, e.g. `"Faction": "FreshDayzMilitia"`.

---

## Relationships (summary)

### Player-aligned / safe
- **Fresh Dayz Militia** ↔ Legoslov, NAC Continuity, Free Traders, Civilian, Passive, Guards, Observers, West
- **Legoslov** ↔ Militia, Free Traders, Civilian, Passive, Guards, Observers, West
- **NAC Continuity** ↔ Militia, Free Traders, Civilian, Passive, Guards, Observers, West, East
- **Free Traders** ↔ everyone

### Hostile / path-locked
- **Pallas Aether** → only itself (+ Passive / Observers so they don’t melt traders). Hostile to Militia, Legoslov, Unshackled, players on those paths
- **The Unshackled** → itself + Civilian / Passive / Observers. Hostile to Legoslov, Pallas, full sci-fi
- **Nekrologists** → only itself + **Infected**. Does **not** fight zombies (`IsFriendlyEntity` on `DayZCreatureAI` / `ZombieBase`)
- **Scrap Union** → itself + Civilian / Passive / Observers

### Base Expansion factions (not redefined — mapped for safe defaults)
East, West, Raiders, Mercenaries, Guards, Civilian, Passive, Observers, YeetBrigade, Brawlers, Shamans, Infected  

Our factions explicitly friend **Civilian / Passive / Guards / Observers** (and West where it fits) so accidental default patrols don’t instantly wipe traders or passive AI.

---

## Infected immunity

| Faction | vs Infected / zombies |
|---------|------------------------|
| **Nekrologists** | **Yes** — friendly to `eAIFactionInfected` and does not engage zombie creatures |
| All others | Normal (will fight infected) |

Thematic reason: Nekrologists are Lantian-pathogen “worse than cannibals”; they share kinship with the infected.

---

## Shoryuken (Expansion melee uppercut)

Not set in faction scripts. Use in `AISettings.json` / patrol JSON:

```json
"ShoryukenChance": 0.35,
"ShoryukenDamageMultiplier": 1.5
```

Suggested higher values on **Nekrologists** and **Unshackled** patrols.

---

## Packing

- PBO prefix / folder: `GrandpasScifiFactions`
- Scripts path: `GrandpasScifiFactions/Scripts/3_Game`
- Depends on: `DayZExpansion_AI_Scripts`

Create matching loadout JSON files under your Expansion loadouts folder using the names in the table above.
