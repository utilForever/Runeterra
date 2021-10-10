// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/CardSets/Set3CardsGen.hpp>

namespace Runeterra::Set3
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
    // [03BW006] Jack, the Winner - COST:5
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Create a Sleep with the Fishes in hand.
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW010] Bayou Brunch - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally Captures another ally and gains the captured ally's
    // stats.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW005] Sunk Cost - COST:8
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Place a unit or landmark into its deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW004] Tahm Kench - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Round Start: Create a An Acquired Taste in hand.
    // --------------------------------------------------------
    // Level Up Description: I've Captured 3+ units.
    //                       When I level up, Obliterate
    //                       my Captured enemies and
    //                       release my allies.
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW002] Lounging Lizard - COST:3
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Round Start: Deal 2 to me.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW014] Monkey Business - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Summon a Powder Monkey.
    //              Plunder: Summon another at the next Round Start.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW007] Boxtopus - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Deal 3 to me.
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW016] Boomship - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to a unit.
    //              Then summon Powder Kegs equal to the amount
    //              of damage dealt.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------- Landmark - Bilgewater
    // [03BW001] The Slaughter Docks - COST:3
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Toss 1. If you are Deep,
    //              destroy me to summon a random Sea Monster.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW015] Crusty Codger - COST:1
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Deal 2 to me.
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW003] Wise Fry - COST:6
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Deal 1 to all other allies and
    //              grant me +1|+0 for each of them.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - Vulnerable = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW017] Wiggly Burblefish - COST:6
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Reduce my cost by 1 for each spell
    //              you've cast this game.
    //              When I'm summoned, create in hand a random
    //              1 cost spell from your regions.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW008] Fortune Croaker - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Deal 1 to me and an ally to draw 1.
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW020] Powder Pandemonium - COST:4
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Summon a Powder Monkey and give a random
    //              enemy Vulnerable this round for each time
    //              you've activated Plunder this game.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW009] Shakedown - COST:1
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Deal 2 to an ally to grant 2 enemies Vulnerable.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
}

void AddBilgewaterNonCollect(entt::registry& registry)
{
    // ------------------------------------- Spell - Bilgewater
    // [03BW004T2] An Acquired Taste - COST:2
    // - Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Tahm Kench swallows an enemy unit. It strikes him, then he
    // Captures it.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [03BW004T3] Tahm Kench - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Round Start: Create a An Acquired Taste in hand.
    //              Attack: Obliterate my Captured enemies and
    //              release my allies.
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW004T4] Tahm Kench's Bayou Brunch - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally Captures another ally and gains
    //              the captured ally's stats.
    //              Create a Tahm Kench in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [03BW006T1] Sleep with the Fishes - COST:0
    // - Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to an ally to deal 2 to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // - Fleeting = 1
    // --------------------------------------------------------
}

void AddDemacia(entt::registry& registry)
{
    // ------------------------------------- Landmark - Demacia
    // [03DE010] The Grand Plaza - COST:3
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: When an ally is summoned, give it +1|+0
    //              and Challenger this round.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE004] Captain Arrika - COST:8
    // - Subtype: Elite, Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Capture a unit or landmark.
    // --------------------------------------------------------
    // Keyword:
    // - SpellShield = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE008] Dragonguard Lieutenant - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, if you Behold a Dragon,
    //              grant me Challenger.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [03DE001] Confront - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally Challenger.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE015] Stony Suppressor - COST:2
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: ALL spells cost 1 more.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE006] Screeching Dragon - COST:5
    // - Subtype: Dragon, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // - Fury = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [03DE025] Molten Breath - COST:6
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally with Fury strikes the 2 weakest enemies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [03DE002] Strafing Strike - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: An ally and an enemy strike each other.
    //              Then, if the ally is a Dragon, heal it 2.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE011] Shyvana - COST:4
    // - Subtype: Dragon, Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Attack: Give me +1|+1 this round.
    // --------------------------------------------------------
    // Level Up Description: I've seen Dragon allies deal 12+ damage.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE003] Dragonguard Lookout - COST:6
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, if you Behold a Dragon, Rally.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE013] Stalking Broodmother - COST:7
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // - Scout = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE005] Egghead Researcher - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a random Dragon in hand.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE007] Kadregrin the Infernal - COST:9
    // - Subtype: Dragon, Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              grant other Dragon allies everywhere +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [03DE012] For The Fallen - COST:8
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: When you summon an Elite, reduce my cost by 1.
    //              For each ally that died this round,
    //              summon a Dauntless Vanguard.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [03DE014] Sharpsight - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+2 and
    //              "I can block units with Elusive" this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
}

void AddDemaciaNonCollect(entt::registry& registry)
{
    // -------------------------------------- Ability - Demacia
    // [03DE004T1] Claim - COST:0
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Capture a unit or landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [03DE011T1] Dragon Shyvana - COST:4
    // - Subtype: Dragon, Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Attack: Give me +2|+2 this round and
    //              create a Fleeting Strafing Strike in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [03DE011T2] Shyvana's Confront - COST:2
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally Challenger.
    //              Create a Shyvana in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
}

void AddFreljord(entt::registry& registry)
{
    // ------------------------------------ Landmark - Freljord
    // [03FR009] The Howling Abyss - COST:6
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Create in hand a random
    //              level 2 champion that's not in your hand,
    //              deck, or play.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR003] It That Stares - COST:8
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Obliterate ALL landmarks or
    //              deal 2 to ALL other units.
    // --------------------------------------------------------

    // ------------------------------------ Landmark - Freljord
    // [03FR020] The Scargrounds - COST:3
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: When an ally survives damage,
    //              grant it +1|+0 and Tough.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR007] Troll Scavenger - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, if you Behold an 8+ cost card,
    //              grant me +3|+0.
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR004] Revitalizing Roar - COST:7
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Pick a unit in your hand to reveal.
    //              Heal your Nexus equal to its Power.
    //              Enlightened: Reduce its cost to 0.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR017] Augur of the Old Ones - COST:6
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: If you Behold an 8+ cost card,
    //              grant an ally Overwhelm and Regeneration.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - Regeneration = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR006] Trundle - COST:5
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned, create an Ice Pillar in hand.
    // --------------------------------------------------------
    // Level Up Description: I've seen you play Ice Pillar.
    // --------------------------------------------------------
    // Keyword:
    // - Regeneration = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR008] Icequake  - COST:8
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give ALL units -3|-0 this round.
    //              Deal 3 to ALL units.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR002] Troll Chant - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +0|+2 to give an enemy
    //              -2|-0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR011] Uzgar the Ancient - COST:8
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // - Regeneration = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR005] Troll Ravager - COST:4
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, if you Behold
    //              an 8+ cost card, grant me Regeneration.
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR018] Call the Wild - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: For the top 4 cards in your deck,
    //              draw each Yeti, Poro, and Elnuk.
    //              Then place the rest into your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR010] Faces of the Old Ones - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Round Start: If you Behold an 8+ cost card,
    //              get an extra mana gem this round.
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR019] Voices of the Old Ones - COST:8
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Get 2 empty mana gems.
    //              For the top 4 cards in your deck,
    //              draw each card that costs 8+.
    //              Then place the rest into your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR025] Troll Gifts - COST:2
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally Regeneration.
    //              If they already have it, grant them +2|+2 instead.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR022] Feel The Rush - COST:12
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Summon 2 different, random champions
    //              from your hand and deck.
    //              Grow their stats up to 10|10.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
}

void AddFreljordNonCollect(entt::registry& registry)
{
    // ------------------------------------- Ability - Freljord
    // [03FR003T3] Extinguishing Ray - COST:0
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 2 to ALL other units.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ------------------------------------- Ability - Freljord
    // [03FR003T1] Destructive Ray - COST:0
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Obliterate ALL landmarks.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR006T2] Trundle - COST:5
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, create an Ice Pillar in hand.
    //              Attack: Grant me +1|+0 for each 8+ cost card
    //              you Behold.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - Regeneration = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [03FR006T3] Trundle's Icequake - COST:8
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give ALL units -3|-0 this round.
    //              Deal 3 to ALL units.
    //              Create a Trundle in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [03FR006T1] Ice Pillar - COST:8
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Play: Refill 8 mana.
    //              Play and Round Start: Give the strongest
    //              enemy Vulnerable this round.
    // --------------------------------------------------------
    // Keyword:
    // - Vulnerable = 1
    // --------------------------------------------------------
}

void AddIonia(entt::registry& registry)
{
    // --------------------------------------- Landmark - Ionia
    // [03IO006] Monastery of Hirana - COST:3
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Create a Sanctuary in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO005] Homecoming - COST:4
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Recall an ally unit or landmark to Recall
    //              an enemy unit or landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO025] Flurry of Fists - COST:4
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +1|+0 and Quick Attack.
    //              If it already has it, grant it Double Attack instead.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO017] Pix! - COST:1
    // - Subtype: Fae, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Support: Give my supported ally +2|+1 this round.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO008] Whimsy! - COST:4
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Transform a follower into a 1|1 Squirrel
    //              and Silence it this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO001] Flower Child - COST:1
    // - Subtype: Fae, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm supported, grant me +2|+0.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO019] Singular Will - COST:10
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Pick an ally. Recall ALL other units and landmarks.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO002] Lulu - COST:3
    // - Subtype: Yordle, Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Support: My supported ally grows up to
    //              4|4 this round.
    // --------------------------------------------------------
    // Level Up Description: Allies have been supported 3+ times.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO011] Swole Squirrel - COST:4
    // - Subtype: Fae, Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Strike: Double my Power.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO009] Tasty Faefolk - COST:3
    // - Subtype: Fae, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Lifesteal = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO003] Fae Guide - COST:4
    // - Subtype: Yordle, Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Grant an ally Elusive.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO007] Trevor Snoozebottom - COST:3
    // - Subtype: Yordle, Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Support: Create an attacking Mumblesprite
    //              with my supported ally's stats.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO010] Young Witch - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Support: Give my supported ally Quick Attack
    //              and +1|+0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO020] Nopeify! - COST:2
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Stop a Fast or Slow spell that costs 3 or less.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO022] Go Get It - COST:5
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Recall an ally to summon an exact Ephemeral
    //              copy in its place.
    //              Reduce its cost to 0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO018] Fuzzy Caretaker - COST:3
    // - Subtype: Yordle, Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm supported, give me +0|+3 this round.
    //              Support: Give my supported ally +3|+0 this round.
    // --------------------------------------------------------
}

void AddIoniaNonCollect(entt::registry& registry)
{
    // ------------------------------------------ Spell - Ionia
    // [03IO016] Sanctuary - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Recall an ally.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO008T1] Squirrel - COST:1
    // - Subtype: Fae, Set: Set3, Rarity: None
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO002T4] Help, Pix! - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally Barrier or an enemy Vulnerable
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [03IO002T5] Lulu's Whimsy! - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Transform a follower into a 1|1 Squirrel
    //              and Silence it this round.
    //              Create a Lulu in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO002T1] Lulu - COST:3
    // - Subtype: Yordle, Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Round Start: Create a Fleeting Help, Pix! in hand.
    //              Support: My supported ally grows up to 5|5 this round.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [03IO007T1] Mumblesprite - COST:3
    // - Subtype: Fae, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // - Ephemeral = 1
    // --------------------------------------------------------
}

void AddNoxus(entt::registry& registry)
{
    // ------------------------------------------ Spell - Noxus
    // [03NX019] Hunt the Weak - COST:2
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Your opponent discards the weakest follower from hand.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX022] Wild Claws - COST:5
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally strikes an enemy. If it has Overwhelm, deal excess
    // damage to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX007] Riven - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned, if you have the attack token, or when you
    // gain the attack token, Reforge.
    // --------------------------------------------------------
    // Level Up Description: I see Blade of the Exile in your hand.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX006] Weapon Hilt - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+0 this round. Reforge.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX002] Arrel the Tracker - COST:6
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round End: If you cast a spell on me this round,
    //              I strike the weakest enemy.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX018] Apprehend - COST:2
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Stun an enemy.
    //              If you have a Darius, Rally.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX009] Wrathful Rider - COST:5
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX017] Basilisk Bloodseeker - COST:7
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Deal 1 to an ally and an enemy 4 times.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX015] Survival Skills - COST:5
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Allies can't drop below 1 health this round.
    //              When discarded, your strongest ally can't drop
    //              below 1 health this round.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX014] Sharpened Resolve - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +3|+2 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX003] Blade Squire - COST:1
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Last Breath: Reforge.
    // --------------------------------------------------------
    // Keyword:
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX001] Runeweaver - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, Reforge.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX005] Brutal Hunter - COST:4
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, give me Quick Attack
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX013] Scorched Earth - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill a damaged unit or destroy a landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // --------------------------------------- Landmark - Noxus
    // [03NX004] Noxkraya Arena - COST:5
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round End: Your strongest ally and
    //              the weakest enemy strike each other.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------
}

void AddNoxusNonCollect(entt::registry& registry)
{
    // ------------------------------------------ Spell - Noxus
    // [03NX008] Heavy Blade Fragment - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally Overwhelm this round.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX007T3] Riven's Weapon Hilt - COST:2
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+0 this round. Reforge.
    //              Create a Riven in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX011] Blade of the Exile - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant an ally +2|+0, Overwhelm, and Quick Attack.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX010] Keen Blade Fragment - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally Quick Attack this round.
    //
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [03NX007T1] Riven - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, if you have the attack token,
    //              or when you gain the attack token, Reforge.
    //              Each round, the first time you increase my Power,
    //              increase it by twice the amount.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [03NX012] Glinting Blade Fragment - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+0 this round.
    //
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Ability - Noxus
    // [03NX016] Gouge - COST:0
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 1 to an ally and an enemy 4 times.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------
}

void AddPiltoverZaun(entt::registry& registry)
{
    // ----------------------------- Landmark - Piltover-&-Zaun
    // [03PZ001] The University of Piltover - COST:5
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Discard your hand.
    //              Create 3 random cards in hand
    //              and grant them Fleeting.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [03PZ019] Patched Porobot - COST:2
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: While in hand, I have a random keyword that
    //              changes each round. When I'm summoned,
    //              grant me this keyword.
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [03PZ005] Ballistic Bot - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Round Start: Create a Ignition in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ004] Death Ray - Mk 1 - COST:1
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 1 to a unit. Create a Death Ray - Mk 2
    //              in the top 3 cards of your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [03PZ003] Viktor - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned or Round Start:
    //              Create a Hex Core Upgrade in hand.
    // --------------------------------------------------------
    // Level Up Description: You've played 7+ created cards.
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [03PZ010] Mechanized Mimic - COST:5
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Attack: Grant me all keywords on allies.
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ022] Give It All - COST:8
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grow all allies' Power and Health to
    //              the highest Power or Health among allies.
    //              Grant all allies allied keywords.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ014] Calculated Creations - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create a Armed Gearhead, Ballistic Bot,
    //              or Nyandroid in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ013] Iterative Improvement - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick a follower.
    //              Create a copy of it in hand with +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ025] Stress Testing - COST:1
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Remove Fleeting from all cards in hand.
    //              When I'm discarded, draw 1 Fleeting.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [03PZ012] Armed Gearhead - COST:1
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ----------------------------- Landmark - Piltover-&-Zaun
    // [03PZ020] Hexcore Foundry - COST:3
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Round Start: ALL players draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [03PZ002] Nyandroid - COST:3
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // - Elusive = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ011] Aftershock - COST:4
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 3 to anything or destroy a landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ017] Tri-beam Improbulator - COST:5
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to a unit.
    //              Summon a random 1 cost follower.
    //              While I'm in hand, increase both by 1
    //              when you play a 3 cost card.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ018] Poro Cannon - COST:0
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: To play, discard 1.
    //              Create 2 Daring Poros in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
}

void AddPiltoverZaunNonCollect(entt::registry& registry)
{
    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ004T2] Death Ray - Mk 3 - COST:3
    // - Set: Set3, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 3 to a unit.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ004T1] Death Ray - Mk 2 - COST:2
    // - Set: Set3, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 2 to a unit. Create a Death Ray - Mk 3
    //              in the top 3 cards of your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [03PZ003T1] Viktor - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Your created cards cost 1 less.
    //              When I'm summoned or Round Start:
    //              Create a Hex Core Upgrade in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ003T15] Viktor's Death Ray - Mk 1 - COST:1
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 1 to a unit. Create a Death Ray - Mk 2
    //              in the top 3 cards of your deck.
    //              Create a Viktor in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ003T11] Hex Core Upgrade - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant Viktor a random keyword.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [03PZ016] Ignition - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // - Fleeting = 1
    // --------------------------------------------------------
}

void AddShadowIsles(entt::registry& registry)
{
    // -------------------------------- Landmark - Shadow-Isles
    // [03SI009] Vaults of Helia - COST:5
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: If you can, kill your
    //              most expensive ally to summon an ally
    //              from your deck that costs 1 more.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI008] Crumble - COST:5
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Kill an ally to kill a unit
    //              or destroy a landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI004] Stalking Shadows - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick a follower from the top 4 cards
    //              in your deck. Draw it, place the rest
    //              into your deck, then create an exact
    //              Ephemeral copy in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [03SI001] Evershade Stalker - COST:2
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Nightfall: Create a copy of me in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Ephemeral = 1
    // - Fearsome = 1
    // - Can't Block = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI018] Gluttony - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill an ally with Last Breath to summon
    //              a follower from your deck that costs 1 more.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI012] Passage Unearned - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Obliterate all units that were summoned,
    //              but not played, this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI014] Encroaching Shadows - COST:4
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant ALL allies in deck and
    //              hand +2|+2 and Ephemeral.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI016] Go Hard - COST:1
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Drain 1 from a unit and create 2 copies of
    //              me in your deck. Once you've cast me 3 times,
    //              transform all copies of me everywhere into
    //              Pack Your Bags.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI007] Shroud of Darkness - COST:1
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: The next time you summon an ally this round,
    //              give it +1|+0 and SpellShield this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI013] Risen Mists - COST:4
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a Mistwraith.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [03SI005] Nocturne - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Nightfall: Grant an enemy Vulnerable and
    //              give enemies -1|-0 this round.
    // --------------------------------------------------------
    // Level Up Description: You've attacked with 5+ Nightfall allies.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [03SI006] Doombeast - COST:3
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Nightfall: Drain 2 from the enemy Nexus.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [03SI015] Pesky Specter - COST:0
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Last Breath: Create 2 copies of me
    //              in the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Ephemeral = 1
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [03SI003] Stygian Onlooker - COST:1
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Nightfall: Give me +2|+0 and Fearsome
    //              this round.
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI002] Unspeakable Horror - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Drain 1 from anything.
    //              Nightfall: Create a random Nightfall card
    //              in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [03SI010] Duskrider - COST:5
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Nightfall: Grant me +1|+0 for each time
    //              we've activated Nightfall this game.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------
}

void AddShadowIslesyNonCollect(entt::registry& registry)
{
    // ----------------------------------- Spell - Shadow-Isles
    // [03SI016T1] Pack Your Bags - COST:5
    // - Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 5 to all enemies and the enemy Nexus.
    //              Transform all copies of me everywhere back
    //              to Go Hard.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [03SI005T3] Nocturne's Unspeakable Horror - COST:2
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Drain 1 from anything.
    //              Create a Nocturne in your deck.
    //              Nightfall: Create a random non-champion
    //              Nightfall card in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [03SI005T1] Nocturne - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Other allies have Fearsome.
    //              When you play a unit,
    //              give enemies -1|-0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // - Missing Translation = 1
    // --------------------------------------------------------

    // --------------------------------- Ability - Shadow-Isles
    // [03SI006T1] Torment - COST:0
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Drain 2 from the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------
}

void AddShurima(entt::registry& registry)
{
    // Do nothing
}

void AddShurimaNonCollect(entt::registry& registry)
{
    // Do nothing
}

void AddTargon(entt::registry& registry)
{
    // ----------------------------------------- Spell - Targon
    // [03MT005] Divergent Paths - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Draw a landmark or destroy a landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------------- Landmark - Targon
    // [03MT052] Star Spring - COST:2
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round End: Heal damaged allies 1.
    //              Then, once I've seen you heal 22+ damage
    //              from allies, win the game.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // -------------------------------------- Landmark - Targon
    // [03MT064] Targon's Peak - COST:5
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Reduce the cost of
    //              a random card in each player's hand
    //              to 0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT079] Starry Scamp - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: I cost 2 less if you Behold a Celestial.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT015] Behold the Infinite - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Invoke.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT221] The Fangs - COST:4
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Invoke a Celestial card that
    //              costs 3 or less.
    // --------------------------------------------------------
    // Keyword:
    // - Lifesteal = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT073] Lunari Duskbringer - COST:1
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              create a Duskpetal Dust in hand.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT217] Aphelios - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Nightfall: Pick a Moon Weapon to create in hand.
    //              Each round, the first time you play 2 other cards,
    //              create the Phased Moon Weapon in hand
    //              if you don't already have one.
    // --------------------------------------------------------
    // Level Up Description: You've cast 4+ Moon Weapons.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT001] Sneaky Zeebles - COST:5
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Stun enemies with 2 or less Power.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT060] Broadbacked Protector - COST:4
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Heal your Nexus 3.
    //              Deal damage to me equal to the amount healed.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT033] Grandfather Rumul - COST:8
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Grant 2 allies +0|+4.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT021] The Infinite Mindsplitter - COST:8
    // - Subtype: Dragon, Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Pick 2 enemies.
    //              Round Start: Stun them.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT056] Diana - COST:2
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Nightfall: Give me Challenger this round.
    // --------------------------------------------------------
    // Level Up Description: You've activated Nightfall 4+ times.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT067] Crystal Ibex - COST:4
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Grant an ally Overwhelm.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT092] Mountain Goat - COST:2
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Strike: Create a Gem in hand.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT055] Soraka - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Support: Heal me and my supported ally 4.
    // --------------------------------------------------------
    // Level Up Description: You've healed damaged allies 4+ times.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT048] Gift Giver - COST:1
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Gem in hand.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT063] Moondreamer - COST:5
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Invoke.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT006] Inviolus Vox - COST:6
    // - Subtype: Dragon, Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: When an ally with Fury kills an enemy for
    //              the first time each round,
    //              create a random Dragon follower in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT054] Leona - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Daybreak: Stun the strongest enemy.
    // --------------------------------------------------------
    // Level Up Description: You've activated Daybreak 4+ times.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT014] Herald of Dragons - COST:2
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Dragon allies cost 1 less.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT058] Taric - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Support: Give me and my supported ally
    //              Tough this round. Copy the last spell
    //              you cast on only me this round onto that
    //              ally (It can't be copied again).
    // --------------------------------------------------------
    // Level Up Description: I've seen you target or
    //                       support allies 7+ times.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT098] Sunblessed Vigor - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +0|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT040] Sparklefly - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // - Lifesteal = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT085] Hush - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Silence a unit this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT220] The Cloven Way - COST:5
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Nightfall: Stun an enemy. If it's a follower,
    //              Stun it again at the next Round Start.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT075] Lunari Priestess - COST:3
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Nightfall: Invoke.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT020] Resplendent Stellacorn - COST:5
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Heal an ally and your Nexus 3.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT071] Tyari the Traveler - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Support: Grant my supported ally +0|+2.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT002] The Skies Descend - COST:15
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 15 to all enemies.
    //              Costs 2 less for each Dragon or Celestial
    //              ally you have.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT009] Zoe - COST:1
    // - Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Nexus Strike: Create a Supercool Starchart
    //              in hand or, if you have one,
    //              reduce its cost by 1.
    // --------------------------------------------------------
    // Level Up Description: I've seen you play 10 cards
    //                       with different names.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT086] Spacey Sketcher - COST:1
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Discard 1 to Invoke a Celestial card
    //              that costs 3 or less.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT087] Aurelion Sol - COST:10
    // - Subtype: Dragon, Supertype: Champion, Set: Set3, Rarity: Champion
    // --------------------------------------------------------
    // Description: Play: Invoke a Celestial card that costs 7 or more.
    //              Round Start: Create a random Celestial card in hand.
    // --------------------------------------------------------
    // Level Up Description: Round End: Your allies have 25+ total Power.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT019] Bastion - COST:4
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +1|+1 and SpellShield.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT214] The Flight - COST:1
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Nexus Strike: Draw 1 and shuffle me into
    //              the top 3 cards of your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT013] Moonlight Affliction - COST:5
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Silence 2 enemy units this round.
    //              Nightfall: They can't block this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT008] Wish - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Fully heal damaged allies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT023] Sunburst - COST:6
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 6 to a unit.
    //              Daybreak: Instead, Silence it this round
    //              and deal 6 to it.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT096] Solari Priestess - COST:3
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Daybreak: Invoke a Celestial card that
    //              costs 4, 5, or 6.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT045] Astral Protection - COST:4
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Heal an ally 4 and grant it +0|+4.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT080] Spring Guardian - COST:3
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Spring Gifts in hand.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT042] Spell Thief - COST:1
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Manifest an enemy spell played this game.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT057] Solari Sunforger - COST:4
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Daybreak: Give me Lifesteal this round.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT091] Supercool Starchart - COST:2
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Invoke a Celestial card that costs 3 or less.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT044] Sun Guardian - COST:6
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Daybreak: Give me +4|+4 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT041] Mentor of the Stones - COST:3
    // - Subtype: Yordle, Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Support: Grant my supported ally +2|+2.
    //              Last Breath: Create 3 Gems in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT028] Solari Shieldbearer - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Daybreak: Give me +0|+4 this round.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT072] Fused Firebrand - COST:5
    // - Subtype: Dragon, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT025] Shards of the Mountain - COST:4
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Fill your hand with Gems.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT017] Messenger's Sigil - COST:1
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create 5 The Messengers in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT051] Guiding Touch - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Heal an ally or your Nexus 2. Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT012] Arbiter of the Peak - COST:10
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Reduce my cost by 1 for each time you've
    //              targeted or supported allies this game.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT094] Lunari Shadestalker - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Nightfall: Grant me Elusive.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT076] Mountain Scryer - COST:4
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Your Celestial cards cost 1 less.
    //              Allegiance: Invoke.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT215] Gifts From Beyond - COST:1
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick a Moon Weapon to create in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT100] Eclipse Dragon - COST:7
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Daybreak: The next Dragon or Celestial unit
    //              you play costs 2 less.
    //              Nightfall: Create a random Dragon and
    //              Celestial follower in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT029] Star Shepherd - COST:1
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: When you heal a damaged ally, grant me +2|+0.
    // --------------------------------------------------------

    // -------------------------------------- Landmark - Targon
    // [03MT219] The Veiled Temple - COST:4
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Each round, the first time you play
    //              2 other cards, refill 2 mana and
    //              grant your strongest ally +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT062] Giddy Sparkleologist - COST:3
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: If you Behold a Celestial card,
    //              grant an ally +1|+1 and SpellShield.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT082] Morning Light - COST:5
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give allies +2|+2 this round.
    //              Daybreak: Activate all ally Daybreak effects
    //              at once.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT047] Cygnus the Moonstalker - COST:6
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Nightfall: Give me and an ally Elusive this round.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT038] Whiteflame Protector - COST:4
    // - Subtype: Dragon, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT081] Mountain Sojourners - COST:5
    // - Set: Set3, Rarity: Epic
    // --------------------------------------------------------
    // Description: Support: Grant my supported ally +2|+2.
    //              If it has Support, grant its supported ally
    //              +2|+2 and continue for each supported ally
    //              in succession.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT007] Fledgling Stellacorn - COST:3
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Lifesteal = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT216] The Sky Shadows - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, refill 2 spell mana
    //              if you Behold a Nightfall card.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT026] Rahvun, Daylight's Spear - COST:5
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Daybreak: Create a random Daybreak card in hand.
    //              It's always Day for us.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT093] Paddle Star - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 4 to an enemy that attacked this round
    //              or is Stunned.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT110] Out Of The Way - COST:5
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: For the rest of the game, allied buffs
    //              (except Barrier) are permanent. Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT003] Dragon's Clutch - COST:3
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Draw 2 different Dragons or
    //              grant Dragon allies +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT030] Stargazer - COST:4
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: When you heal a damaged ally,
    //              give it Elusive this round.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT088] Solari Soldier - COST:1
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Daybreak: Give me +1|+1 this round.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT089] Crescent Guardian - COST:3
    // - Set: Set3, Rarity: Rare
    // --------------------------------------------------------
    // Description: Nightfall: Grant me +2|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT027] Zenith Blade - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant an ally +1|+2 and Overwhelm.
    //              Daybreak: Draw a Zenith Blade.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT218] Starbone - COST:2
    // - Set: Set3, Rarity: Epic
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: If you Behold The Messenger,
    //              grant Celestial allies everywhere +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT084] Starshaping - COST:5
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Invoke a Celestial card that costs 7 or more,
    //              then heal an ally or your Nexus 4.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT016] Startled Stomper - COST:2
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT074] Sleepy Trouble Bubble - COST:2
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Stun an enemy.
    //              Create a Fleeting Paddle Star in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT035] Pale Cascade - COST:2
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +1|+1 this round.
    //              Nightfall: Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT036] Blessing of Targon - COST:5
    // - Set: Set3, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +3|+3.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT039] Porofly - COST:1
    // - Subtype: Poro, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - SpellShield = 1
    // --------------------------------------------------------
}

void AddTargonNonCollect(entt::registry& registry)
{
    // ----------------------------------------- Spell - Targon
    // [03MT005T2] Path of Destruction - COST:3
    // - Set: Set3, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Destroy a landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT005T1] Path of Discovery - COST:3
    // - Set: Set3, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Draw a landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT018] The Messenger - COST:2
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, draw 1.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT034] The Serpent - COST:0
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT083] The Immortal Fire - COST:8
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, grant me +1|+0 for
    //              each Celestial card you played this game.
    //              The first time I would die,
    //              fully heal me instead.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT004] Moonsilver - COST:0
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Reduce the cost of a card in hand by 1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT037] The Scourge - COST:10
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, grant me +1|+0 for
    //              each Celestial card you played this game.
    //              Attack: Give other allies +2|+2 and
    //              Overwhelm this round.
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT059] The Golden Sister - COST:6
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, summon The Silver Sister.
    // --------------------------------------------------------
    // Keyword:
    // - Lifesteal = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT053] Moonglow - COST:2
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant an ally +0|+2 and SpellShield.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT032] Written in Stars - COST:4
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Draw a champion. Reduce its cost by 1
    //              and grant it +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT024] Supernova - COST:9
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: If you Behold a Celestial card,
    //              Obliterate 2 enemy units or landmarks.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT066] Cosmic Inspiration - COST:7
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: If you Behold a Celestial card,
    //              grant allies everywhere +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT077] Living Legends - COST:10
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Fill your hand with random Fleeting Celestial
    //              cards. Refill your mana to full.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT010] The Destroyer - COST:7
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, grant me +1|+0 for
    //              each Celestial card you played this game.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT070] The Traveler - COST:4
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Play: Invoke.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT049] Meteor Shower - COST:5
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 4 to an enemy and 1 to another.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT043] Falling Comet - COST:6
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Obliterate an enemy unit or landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT022] The Great Beyond - COST:9
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, grant me +1|+0 for
    //              each Celestial card you played this game.
    //              I am a Dragon.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // - Fury = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT078] Cosmic Rays - COST:8
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: If you Behold a Celestial card,
    //              Obliterate enemies with 3 or less Power.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT065] Equinox - COST:1
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Silence a follower.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT050] The Warrior - COST:5
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT011] Crescent Strike - COST:3
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Stun 2 enemies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT095] The Trickster - COST:3
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT059T1] The Silver Sister - COST:6
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT090] The Charger - COST:1
    // - Subtype: Celestial, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT073T1] Duskpetal Dust - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: The next unit with Nightfall you play
    //              this round costs 1 less.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT217T10] Crescendum - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Summon a 2 cost follower from your deck.
    //              If it has Nightfall, activate it.
    //              Phase Calibrum or Severum.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT217T14] Infernum - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give an ally +2|+1 and Overwhelm this round.
    //              Phase Crescendum or Calibrum.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT217T11] Aphelios' Gifts From Beyond - COST:1
    // - Supertype: Champion, Set: Set3, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick a Moon Weapon to create in hand.
    //              Create an Aphelios in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT217T9] Severum - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give an ally +1|+2 and Lifesteal this round.
    //              Phase Gravitum or Infernum.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT217T8] Calibrum - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 3 to a follower. Phase Severum or Gravitum.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT217T13] Aphelios - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Nightfall: Pick a Moon Weapon to create in hand.
    //              Each round, the first time you play 2 other cards
    //              or Round Start: Create the Phased Moon Weapon
    //              in hand if you don't already have one.
    //              Your Moon Weapons cost 1 less.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT217T12] Gravitum - COST:3
    // - Set: Set3, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Stun an enemy. If it's a follower,
    //              Stun it again at the next Round Start.
    //              Phase Infernum or Crescendum.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT056T1] Diana - COST:2
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Nightfall or when you activate another Nightfall:
    //              Give me +2|+0 and Challenger this round.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT056T2] Diana's Pale Cascade - COST:2
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +1|+1 this round.
    //              Nightfall: Draw 1.
    //              Create a Diana in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT055T1] Soraka - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: The first time you heal a damaged ally
    //              each round, draw 1.
    //              Support: Fully heal me and my supported ally.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT055T2] Soraka's Wish - COST:3
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Fully heal damaged allies.
    //              Create a Soraka in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT054T2] Leona's Morning Light - COST:5
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give allies +2|+2 this round.
    //              Create a Leona in your deck.
    //              Daybreak: Activate all ally Daybreak effects
    //              at once.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------------- Ability - Targon
    // [03MT054T3] Solar Flare - COST:0
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Stun the strongest enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT054T1] Leona - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Daybreak or when you activate another Daybreak:
    //              Stun the strongest enemy.
    // --------------------------------------------------------

    // --------------------------------------- Ability - Targon
    // [03MT001T1] Mischief - COST:0
    // - Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Stun enemies with 2 or less Power.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT009T2] Zoe's Sleepy Trouble Bubble - COST:2
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Stun an enemy. Create a Fleeting Paddle Star
    //              in hand. Create a Zoe in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT009T1] Zoe - COST:1
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: When I level up, grant your Nexus "When you
    //              summon an ally, grant its keywords to all allies."
    //              Nexus Strike: Create a Behold the Infinite that
    //              costs 0 in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT087T1] Aurelion Sol - COST:10
    // - Subtype: Dragon, Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Play: Invoke a Celestial card that costs 7 or more.
    //              Round Start: Create a random Celestial card in hand.
    //              Your Celestial cards cost 0.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT087T2] Aurelion Sol's The Skies Descend - COST:15
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 15 to all enemies.
    //              Costs 2 less for each Dragon or Celestial
    //              ally you have.
    //              Create an Aurelion Sol in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT080T1] Spring Gifts - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Fully heal an ally.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [03MT058T1] Taric - COST:4
    // - Supertype: Champion, Set: Set3, Rarity: None
    // --------------------------------------------------------
    // Description: Support: My supported ally and I can't
    //              take damage or die this round.
    //              Copy the last spell you cast on only me
    //              this round onto that ally
    //              (It can't be copied again).
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT058T2] Taric's Blessing of Targon - COST:5
    // - Supertype: Champion, Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +3|+3.
    //              Create a Taric in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT092T1] Gem - COST:1
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Heal an ally 1 and grant it +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // --------------------------------------- Ability - Targon
    // [03MT220T1] Sky Charge - COST:0
    // - Set: Set3, Rarity: Common
    // --------------------------------------------------------
    // Description: Stun an enemy. If it's a follower,
    //              Stun it again at the next Round Start.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT003T1] Hatched Egg - COST:3
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Draw 2 different Dragons.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [03MT003T2] Crushed Egg - COST:3
    // - Set: Set3, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant Dragon allies +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
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
}  // namespace Runeterra::Set3
