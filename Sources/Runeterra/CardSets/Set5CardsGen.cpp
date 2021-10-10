// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/CardSets/Set5CardsGen.hpp>

namespace Runeterra::Set5
{
void AddBandleCity(entt::registry& registry)
{
    // Do nothing
}

void AddBandleCityNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddBilgewater(entt::registry& registry)
{
    // -------------------------------------- Unit - Bilgewater
    // [05BW005] Nami - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: When you cast a spell,
    //              grant +1|+0 to the weakest other ally
    //              that isn't Immobile.
    // --------------------------------------------------------
    // Level Up Description: You've gained 7+ spell mana this game.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // - Imbue = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [05BW006] Ebb - COST:2
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 2 randomly to an enemy or
    //              the enemy Nexus and create a Flow in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW002] Journeying Sandhopper - COST:3
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW008] Abyssal Guard - COST:4
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When you cast a spell, give me +2|+0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // - Imbue = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW011] Fleet Admiral Shelly - COST:5
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: For every 2 spells you cast in a round,
    //              grant other allies +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // - Elusive = 1
    // - Imbue = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [05BW003] Tidal Wave - COST:3
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to two different randomly targeted
    //              enemies and create a Crashing Wave in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW004] Avatar of the Tides - COST:6
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: If you would get a mana gem,
    //              instead refill your spell mana.
    //              When you cast a spell, create in hand
    //              a random spell that costs 3 or less
    //              and give it Fleeting.
    // --------------------------------------------------------
    // Keyword:
    // - Imbue = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW001] Marai Warden - COST:2
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              summon a random 1 cost follower.
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW010] Marai Greatmother - COST:4
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create 5 random 6+ cost
    //              spells in your deck and lower their cost to 3.
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW013] Marai Songstress - COST:2
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, if you've cast a spell
    //              this round, grant me Elusive.
    // --------------------------------------------------------
}

void AddBilgewaterNonCollect(entt::registry& registry)
{
    // ------------------------------------- Spell - Bilgewater
    // [05BW005T2] Nami's Ebb - COST:2
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 2 randomly to an enemy or the enemy Nexus
    //              and create a Flow in hand.
    //              Create a Nami in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [05BW005T1] Nami - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: When you cast a spell, grant +2|+1 to
    //              the weakest other ally that isn't Immobile.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // - Imbue = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [05BW006T2] Flow - COST:2
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Heal an ally or your Nexus 2,
    //              and create an Ebb and Flow in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fleeting = 1
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [05BW006T1] Ebb and Flow - COST:2
    // - Set: Set5, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 2 randomly to an enemy or the enemy Nexus
    //              and heal an ally or your Nexus 2.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [05BW003T1] Crashing Wave - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to four different randomly targeted
    //              enemies and create a Colossal Wave in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [05BW003T2] Colossal Wave - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 4 to all enemies and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
}

void AddDemacia(entt::registry& registry)
{
    // Do nothing
}

void AddDemaciaNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddFreljord(entt::registry& registry)
{
    // Do nothing
}

void AddFreljordNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddIonia(entt::registry& registry)
{
    // ------------------------------------------- Unit - Ionia
    // [05IO025] Tail-Cloak Matriarch - COST:5
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Each round, the first time you Recall a follower,
    //              summon an exact Ephemeral copy of it.
    // --------------------------------------------------------
}

void AddIoniaNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddNoxus(entt::registry& registry)
{
    // ------------------------------------------- Unit - Noxus
    // [05NX009] Lost Soul - COST:8
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned or discarded,
    //              create a Twinblade Revenant in hand.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX006] Reborn Grenadier - COST:1
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: To play, discard a card.
    //              When I'm discarded, summon an exact copy of me.
    // --------------------------------------------------------
    // Keyword:
    // - Ephemeral = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX005] Ancient Warmonger - COST:5
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm discarded,
    //              grant your strongest ally +2|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX001] Sion - COST:7
    // - Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm discarded, grant your strongest ally
    //              Overwhelm and place me into your deck.
    //              I have +1|+0 for each card you've discarded
    //              this game (Max +7|+0).
    // --------------------------------------------------------
    // Level Up Description: You've discarded or summoned 35+ Power.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [05NX003] Salt And Stitches - COST:2
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: To play, discard a card.
    //              Summon a Reborn Grenadier and
    //              give it +2|+0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX015] Fallen Reckoner - COST:5
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              grant Can't block to the weakest enemy.
    //              Last Breath Create a Risen Reckoner in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX013] Fallen Rider - COST:2
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm discarded,
    //              create a Risen Rider in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [05NX012] Roar of the Slayer - COST:3
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: To play, discard a card.
    //              Kill the weakest enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [05NX014] Weapons of the Lost - COST:8
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 3 to a unit and
    //              summon a Trifarian Shieldbreaker.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX004] Grave Physician - COST:2
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Discard a card to draw a unit.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX016] The Lady of Blood - COST:4
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: When you discard a non-Fleeting unit,
    //              create a Fleeting copy of it in hand.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX002] Noble Rebel - COST:3
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Grant me +2|+1 once you've discarded
    //              3+ cards this game.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------
}

void AddNoxusNonCollect(entt::registry& registry)
{
    // ------------------------------------------- Unit - Noxus
    // [05NX017] Risen Reckoner - COST:3
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              grant Can't block to the weakest enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - Ephemeral = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX018] Risen Rider - COST:2
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX001T1] Sion Returned - COST:7
    // - Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, Rally.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - Ephemeral = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX001T3] Sion - COST:7
    // - Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Last Breath: Summon Sion Returned.
    //              When I'm discarded, grant your strongest
    //              ally Overwhelm and place me into your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [05NX001T2] Sion's Roar of the Slayer - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: To play, discard a card. Kill the weakest enemy.
    //              Create a Sion in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [05NX007] Twinblade Revenant - COST:4
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Last Breath: Create a Lost Soul in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Last Breath = 1
    // - Challenger = 1
    // --------------------------------------------------------
}

void AddPiltoverZaun(entt::registry& registry)
{
    // Do nothing
}

void AddPiltoverZaunNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddShadowIsles(entt::registry& registry)
{
    // Do nothing
}

void AddShadowIslesyNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddShurima(entt::registry& registry)
{
    // ----------------------------------------- Unit - Shurima
    // [05SH014] Xerath - COST:4
    // - Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: When an allied landmark is destroyed,
    //              deal 1 to the weakest enemy.
    // --------------------------------------------------------
    // Level Up Description: You've destroyed 4 allied landmarks
    //                       this game.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH017] Herald of the Magus - COST:5
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, if you've destroyed
    //              4+ allied landmarks this game, grant
    //              your champions everywhere +2|+2 and Overwhelm.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH011] Endless Devout - COST:3
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Last Breath: Summon a Sarcophagus.
    // --------------------------------------------------------
    // Keyword:
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [05SH003] Obelisk of Power - COST:1
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Countdown 3 or when I'm summoned or destroyed:
    //              Grant the strongest ally +2|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH016] Ruinous Acolyte - COST:2
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Destroy an allied landmark to grant
    //              allied Ruinous Acolytes everywhere +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH018] Servitude of Desolation - COST:7
    // - Set: Set5, Rarity: Epic
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a Stasis Statue to store all allied units
    //              and landmarks that died or were destroyed
    //              this round inside.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [05SH012] Risen Altar - COST:6
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Countdown 3 or when I'm destroyed:
    //              Summon a Dami'yin the Unbound.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH020] Construct of Desolation - COST:1
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create a Ruinous Acolyte or
    //              an Obelisk of Power in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH015] Sandseer - COST:5
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Draw 1. If you drew a landmark,
    //              repeat this effect.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH004] Unleashed Energy - COST:3
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+1 this round or destroy
    //              an allied landmark to give an ally +4|+2
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH002] Waste Walker - COST:3
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When an allied landmark is destroyed,
    //              grant me +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH007] Rite of the Arcane - COST:3
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy an allied landmark or
    //              one of your mana gems to deal 4 to an enemy unit.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
}

void AddShurimaNonCollect(entt::registry& registry)
{
    // ---------------------------------------- Spell - Shurima
    // [05SH014T3] Xerath's Rite of the Arcane - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy an allied landmark or
    //              one of your mana gems to deal 4 to an enemy unit.
    //              Create a Xerath in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH014T4] Xerath's Rite of the Arcane - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy one of your mana gems
    //              to deal 4 to an enemy unit.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH014T5] Xerath's Rite of the Arcane - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy an allied landmark
    //              to deal 4 to an enemy unit.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH014T1] Xerath - COST:4
    // - Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: When an allied landmark is destroyed,
    //              deal 3 to the weakest enemy.
    // --------------------------------------------------------
    // Level Up Description: You've restored the Sun Disc.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH014T2] Xerath - COST:4
    // - Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Round Start: Deal 5 to the weakest enemy
    //              and the enemy Nexus. If an enemy unit would die,
    //              Obliterate it instead.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH011T1] Restored Devout - COST:1
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [05SH011T2] Sarcophagus - COST:1
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Countdown 3 or when I'm destroyed:
    //              summon a Restored Devout.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [05SH012T1] Dami'yin the Unbound - COST:7
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - SpellShield = 1
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH004T2] Unleashed Energy - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+1 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH004T1] Unleashed Energy - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Destroy an allied landmark
    //              to give an ally +4|+2 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH007T1] Rite of the Arcane - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy an allied landmark
    //              to deal 4 to an enemy unit.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [05SH007T2] Rite of the Arcane - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy one of your mana gems to deal 4
    //              to an enemy unit.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
}

void AddTargon(entt::registry& registry)
{
    // ----------------------------------------- Spell - Targon
    // [05MT009] Battle Bonds - COST:4
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant 2 allies +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
}

void AddTargonNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddAll(entt::registry& registry)
{
    AddBandleCity(registry);
    AddBandleCityNonCollect(registry);

    AddBilgewater(registry);
    AddBilgewaterNonCollect(registry);

    AddDemacia(registry);
    AddDemaciaNonCollect(registry);

    AddFreljord(registry);
    AddFreljordNonCollect(registry);

    AddIonia(registry);
    AddIoniaNonCollect(registry);

    AddNoxus(registry);
    AddNoxusNonCollect(registry);

    AddPiltoverZaun(registry);
    AddPiltoverZaunNonCollect(registry);

    AddShadowIsles(registry);
    AddShadowIslesyNonCollect(registry);

    AddShurima(registry);
    AddShurimaNonCollect(registry);

    AddTargon(registry);
    AddTargonNonCollect(registry);

    AddBandleCity(registry);
    AddBandleCityNonCollect(registry);
}
}  // namespace Runeterra::Set5
