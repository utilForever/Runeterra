// Copyright (c) 2021 Runeterra Team
// Chris Ohk, Seokmin Hong, Woojin Kim
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Runeterra/CardSets/Set4CardsGen.hpp>

namespace Runeterra::Set4
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
    // ------------------------------------- Spell - Bilgewater
    // [04BW002] Bone Skewer - COST:2
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: An ally strikes an enemy,
    //              then moves to the top of your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [04BW007] Jaull-fish - COST:8
    // - Subtype: Lurker, Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Each Lurker ally strikes a random enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [04BW001] Redfin Hammersnout - COST:2
    // - Subtype: Lurker, Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Grant an enemy Vulnerable.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [04BW005] Pyke - COST:4
    // - Subtype: Lurker, Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I Lurk, transform me into Death From Below.
    // --------------------------------------------------------
    // Level Up Description: Allied Pykes have dealt 15+ damage.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW010] Monster Harpoon - COST:6
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 5 to a unit.
    //              Plunder: I cost 3 less.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW014] Line 'Em Up - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a Powder Keg.
    //              Create a Knock 'Em Down in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW011] Loaded Dice - COST:4
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: For the rest of the round,
    //              when you damage the enemy Nexus, Nab 1.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [04BW015] Sharkling - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [04BW003] Snapjaw Swarm - COST:2
    // - Subtype: Lurker, Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: I start a free attack.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // --------------------------------------------------------

    // ---------------------------------- Landmark - Bilgewater
    // [04BW009] Ripper's Bay - COST:1
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When allies attack, before Lurk tries to activate,
    //              obliterate the top card of your deck
    //              if it doesn't have Lurk.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW008] Lost Riches - COST:4
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Draw a Treasure. If there aren't any to draw,
    //              create 2 Treasures in your deck instead.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------- Landmark - Bilgewater
    // [04BW013] Reaver's Row - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I count down,
    //              summon a random 1 cost follower.
    //              Countdown 2: Grant 1 cost allies +2|+1
    //              and Fearsome.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW004] Bloodbait - COST:1
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create a Snapjaw Swarm on top of your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // - Lurk = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [04BW016] Ruined Rex - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Cast Cannon Barrage on randomly
    //              targeted enemies for each card
    //              you've drawn this round, up to 5 times.
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW006] The List - COST:0
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant an enemy Vulnerable.
    //              If it's already Vulnerable, the strongest
    //              ally starts a free attack Challenging it.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
}

void AddBilgewaterNonCollect(entt::registry& registry)
{
    // ------------------------------------- Spell - Bilgewater
    // [04BW005T3] Death From Below - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Summon Pyke striking an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // - Lurk = 1
    // --------------------------------------------------------

    // -------------------------------------- Unit - Bilgewater
    // [04BW005T2] Pyke - COST:4
    // - Subtype: Lurker, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I Lurk, transform me into Death From Below.
    //              When I kill an enemy, I strike the weakest enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW005T1] Pyke's Bone Skewer - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: An ally strikes an enemy,
    //              then moves to the top of your deck.
    //              Create a Pyke in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------- Spell - Bilgewater
    // [04BW014T1] Knock 'Em Down - COST:1
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to anything.
    // --------------------------------------------------------
    // Keyword:
    // - Fleeting = 1
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------- Ability - Bilgewater
    // [04BW007T1] Frenzied Feast - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Each Lurker ally strikes a random enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------
}

void AddDemacia(entt::registry& registry)
{
    // ----------------------------------------- Unit - Demacia
    // [04DE004] Ardent Tracker - COST:6
    // - Subtype: Elite, Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When you summon an Elite, reduce my cost by 1.
    // --------------------------------------------------------
    // Keyword:
    // - Scout = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE014] Dragon Chow - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When you play a Dragon,
    //              it strikes me and you draw 1.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE001] Honored Lord - COST:2
    // - Subtype: Elite, Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: The first time I Challenge an enemy,
    //              give me Barrier this round.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [04DE012] Field Promotion - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: The next time you play a unit this round,
    //              grant it Scout. It's now an Elite.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [04DE003] Cataclysm - COST:3
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally starts a free attack Challenging an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [04DE002] Golden Aegis - COST:4
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give an ally Barrier this round.
    //              Rally.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [04DE006] Battlefield Prowess - COST:1
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant an ally +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE008] Jarvan IV - COST:6
    // - Subtype: Elite, Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When you attack, pay my cost to summon me
    //              Challenging the strongest enemy.
    // --------------------------------------------------------
    // Level Up Description: Allies have survived 3+ strikes
    //                       from enemy blockers.
    // --------------------------------------------------------
    // Keyword:
    // - Barrier = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE005] Cithria, Lady of Clouds - COST:10
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned, double other allies' Power
    //              and Health and grant them Challenger.
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE020] Ruined Dragonguard - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When an ally with Fury kills a unit,
    //              grant it an additional +1|+1.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE010] King Jarvan III - COST:7
    // - Subtype: Elite, Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned, draw Jarvan IV.
    //              If he's already in play, instead give
    //              allies Challenger and Scout this round.
    // --------------------------------------------------------
    // Keyword:
    // - Tough = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE016] Kadregrin the Ruined - COST:6
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Grant an allied Champion
    //              or Dragon Challenger.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE013] Towering Stonehorn - COST:6
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: I don't take damage from enemy spells or skills.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE015] Swiftwing Flight - COST:4
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Create a Silverwing Vanguard,
    //              Blinding Assault, or Fleetfeather Tracker in hand.
    //              Attack: Give other Challenging allies +1|+1
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Challenger = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE007] Penitent Squire - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, if you Behold an Elite,
    //              create a Tattered Banner in hand.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE009] Gallant Rider - COST:4
    // - Subtype: Elite, Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: The first time I Challenge an enemy,
    //              transform me into Vanguard Cavalry.
    // --------------------------------------------------------
}

void AddDemaciaNonCollect(entt::registry& registry)
{
    // ---------------------------------------- Spell - Demacia
    // [04DE007T1] Tattered Banner - COST:1
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: The next time you summon an ally this round,
    //              grant it Challenger.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Demacia
    // [04DE008T1] Jarvan IV - COST:6
    // - Subtype: Elite, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When you attack, pay my cost to summon me
    //              Challenging the strongest enemy.
    //              Round Start: Create a Fleeting Cataclysm in hand.
    //              When I Challenge an enemy, give me Barrier this round.
    // --------------------------------------------------------
    // Keyword:
    // - Barrier = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Demacia
    // [04DE008T2] Jarvan IV's Cataclysm - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally starts a free attack Challenging an enemy.
    //              Create a Jarvan IV in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
}

void AddFreljord(entt::registry& registry)
{
    // ---------------------------------------- Unit - Freljord
    // [04FR006] Draklorn Inquisitor - COST:5
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Frozen Thrall.
    //              Round End: If the Countdown of any of your
    //              Frozen Thralls is 4 or less, advance them to 0.
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR012] Buried in Ice - COST:9
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Obliterate each enemy to summon a Frozen Tomb
    //              in place with the enemy stored inside.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR016] Spoils of War - COST:3
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +1|+2.
    //              Plunder: Grant +2|+4 instead.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR013] Cold Resistance - COST:5
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Get an empty mana gem and grant an ally +0|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [04FR005] Lissandra - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Frozen Thrall.
    // --------------------------------------------------------
    // Level Up Description: You've summoned 2+ allies that cost 8+.
    //                       When I level up, create a Watcher in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Tough = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR011] Succumb to the Cold - COST:4
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Frostbite an enemy.
    //              Summon a Frozen Thrall.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Landmark - Freljord
    // [04FR001] Frozen Thrall - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Countdown 8: Summon a Frostguard Thrall.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR007] Entomb - COST:5
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Obliterate a unit to summon a Frozen Tomb
    //              in place with the unit stored inside.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR017] Ancestral Boon - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant the top ally in your deck +2|+2.
    //              Enlightened: Instead, grant all allies
    //              in your deck +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Landmark - Freljord
    // [04FR014] Blighted Ravine - COST:4
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, heal your Nexus 4.
    //              Countdown 1: Deal 2 to EVERYTHING.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR009] Ice Shard - COST:3
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 1 to EVERYTHING.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [04FR015] Fabled Poro - COST:4
    // - Subtype: Poro, Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, grant all ally Poros
    //              a random keyword.
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [04FR019] Rimefang Denmother - COST:6
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Rimefang Pack.
    //              Grant it +1|+1 for each time you have
    //              Frostbitten enemies this game.
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [04FR018] Abominable Guardian - COST:8
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: If you have 2+ Yetis,
    //              summon me from hand and create a copy of me
    //              in your deck.
    //              Play: Draw a Yeti.
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR010] Three Sisters - COST:1
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create a Fleeting Flash Freeze,
    //              Fury of the North, or Entomb in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
}

void AddFreljordNonCollect(entt::registry& registry)
{
    // ---------------------------------------- Unit - Freljord
    // [04FR001T1] Frostguard Thrall - COST:8
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [04FR005T4] Watcher - COST:17
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: I cost 0 if you've summoned 5+ allies that
    //              cost 8+ this game.
    //              Attack: Obliterate the enemy deck,
    //              leaving 3 non-champions.
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [04FR005T1] Lissandra - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Your Nexus is Tough.
    //              When I'm summoned, summon a Frozen Thrall.
    //              Round Start: Create a Fleeting 0 cost
    //              Ice Shard in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Tough = 1
    // - Missing Translation = 1
    // --------------------------------------------------------

    // --------------------------------------- Spell - Freljord
    // [04FR005T2] Lissandra's Entomb - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Obliterate a unit and summon a Frozen Tomb
    //              in its place.
    //              Create a Lissandra in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Unit - Freljord
    // [04FR019T1] Rimefang Pack - COST:1
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------ Landmark - Freljord
    // [04FR007T1] Frozen Tomb - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Countdown 2: Summon exact copies of the units
    //              and landmarks stored inside.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------
}

void AddIonia(entt::registry& registry)
{
    // ------------------------------------------ Spell - Ionia
    // [04IO008] Defiant Dance - COST:4
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Recall a unit.
    //              Blade Dance 1.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO005] Irelia - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned or Round Start:
    //              If you have the attack token,
    //              create a Flawless Duet in hand.
    // --------------------------------------------------------
    // Level Up Description: 14+ allies have attacked.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO020] Scattered Pod - COST:6
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Draw a Slow, Fast, or Burst spell.
    //              Enlightened: I have Elusive.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO004] Blossoming Blade - COST:5
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Blade Dance 2.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [04IO003] Vanguard's Edge - COST:7
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Pick an ally to attack alongside the Blades,
    //              then Blade Dance 3.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO015] Dancing Droplet - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm Recalled, draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO014] Shadow Apprentice - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, grant me +1|+1
    //              if an ally has Ephemeral.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO002] Zinneia, Steel Crescendo - COST:8
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When you Blade Dance, I attack with the Blades.
    //              Play: Blade Dance 1.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [04IO007] Syncopation - COST:2
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Swap 2 allies.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [04IO011] Lead and Follow - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Recall an ally to create a Flawless Duet in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO013] Sacred Protector - COST:7
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned, draw a Shen.
    //              Allies with Barrier have Double Attack.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [04IO012] Shadows of the Past - COST:5
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Recall each ally and summon a Living Shadow
    //              in its place.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO009] Ribbon Dancer - COST:2
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Blade Dance 1.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO001] Field Musicians - COST:4
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Each round, once you've summoned 3 other
    //              allies, refill your spell mana and draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO006] Coastal Defender - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When you summon an ally,
    //              give me +2|+0 this round.
    // --------------------------------------------------------
}

void AddIoniaNonCollect(entt::registry& registry)
{
    // ------------------------------------------ Spell - Ionia
    // [04IO005T4] Bladesurge - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Swap Irelia with an ally.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [04IO005T1] Irelia's Vanguard's Edge - COST:7
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Pick an ally to attack alongside the Blades,
    //              then Blade Dance 3.
    //              Create an Irelia in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO005T2] Irelia - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned or Round Start:
    //              If you have the attack token,
    //              create a Flawless Duet in hand.
    //              When allies attack, create a Bladesurge in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Ionia
    // [04IO005T5] Flawless Duet - COST:2
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Blade Dance 2.
    // --------------------------------------------------------
    // Keyword:
    // - Fleeting = 1
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO010] Blade - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Obliterate me when I leave combat.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO020T1] Scattered Pod - COST:6
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Draw a Slow spell.
    //              Enlightened: I have Elusive.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO020T2] Scattered Pod - COST:6
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Draw a Fast spell.
    //              Enlightened: I have Elusive.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Ionia
    // [04IO020T3] Scattered Pod - COST:6
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Draw a Burst spell.
    //              Enlightened: I have Elusive.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------
}

void AddNoxus(entt::registry& registry)
{
    // ------------------------------------------ Spell - Noxus
    // [04NX002] Whispered Words - COST:4
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Reputation: I cost 2.
    //              Draw 2.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX010] Thorn of the Rose - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Guile in hand.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX021] Retired Reckoner - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When you target me, grant me +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX022] Ruined Reckoner - COST:4
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Midnight Raid in hand.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [04NX015] Bloody Business - COST:4
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: An ally with 5+ Power strikes an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX019] Thrashing Snapper - COST:1
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When an enemy blocks me, give me +3|+0 this round.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX008] Incisive Tactician - COST:8
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Reputation: I cost 6.
    //              When I'm summoned, Rally.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX006] Black Rose Spy - COST:2
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Reputation: When I'm summoned,
    //              transform me into an exact copy of
    //              the strongest ally that struck this round.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [04NX001] Mimic - COST:3
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Reputation: I cost 1.
    //              Pick a spell in play or in hand and
    //              create a Fleeting copy of it in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX004] LeBlanc - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Level Up Description: I've seen you deal 15+ damage.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX016] Shrieking Spinner - COST:4
    // - Subtype: Spider, Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Attack: Grant Spider allies +1|+0.
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX007] Atakhan, Bringer of Ruin - COST:10
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Attack: Increase my Power by
    //              the total Power of all allies.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX018] Crimson Bloodletter  - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: The next time you summon another ally,
    //              deal 1 to it and grant me +1|+1.
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [04NX003] Sigil of Malice - COST:4
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Reputation: I cost 1.
    //              Deal 2 to anything.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [04NX017] Strength in Numbers - COST:8
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Summon 2 Legion Marauders.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [04NX009] Thorned Blade - COST:4
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +5|+0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
}

void AddNoxusNonCollect(entt::registry& registry)
{
    // ------------------------------------------ Spell - Noxus
    // [04NX022T1] Midnight Raid - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally starts a free attack.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [04NX004T1] LeBlanc's Sigil of Malice - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Reputation: I cost 1.
    //              Deal 2 to anything.
    //              Create a LeBlanc in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------------ Spell - Noxus
    // [04NX005] Mirror Image - COST:2
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Summon an exact Ephemeral copy of an ally
    //              with 5+ Power.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------------- Unit - Noxus
    // [04NX004T2] LeBlanc - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Each time I see you deal 15+ damage,
    //              create a Mirror Image in hand.
    //              If you already have one,
    //              reduce its cost by 1 instead.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------
}

void AddPiltoverZaun(entt::registry& registry)
{
    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ001] Ekko - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: Strike: Create a Fleeting Time Trick in hand.
    // --------------------------------------------------------
    // Level Up Description: You've Predicted 5+ times.
    //                       When I level up,
    //                       create 3 Chronobreaks in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ005] Chirean Sumpworker - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When you summon another Chirean Sumpworker,
    //              Obliterate me and transform allied
    //              Chirean Sumpworkers everywhere into
    //              Sumpworks Posses.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ014] Production Surge - COST:0
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: To play, spend all your mana.
    //              Summon random Turrets whose total cost
    //              equals the mana spent.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ003] Timewinder - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: To Play, discard 1.
    //              Deal 1 to an enemy or the enemy Nexus,
    //              then deal 1 to another.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ011] Called Shot - COST:2
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Draw 1.
    //              Create a Parallel Convergence in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ002] Fallen Feline - COST:1
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Hexite Crystal
    //              in the bottom 10 cards of your deck.
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ020] Defective Swapbot - COST:4
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Swap my stats with another unit.
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ013] Volunteer Elnuk - COST:3
    // - Subtype: Elnuk, Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, create a random Elnuk
    //              in the top 6 cards of your deck.
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ010] Concurrent Timelines - COST:1
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: For the rest of the game, the first time
    //              you play a follower each round,
    //              pick 1 of 3 followers with the same cost
    //              to transform it into.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ016] Boom Baboon - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              create a Flame Chompers! in hand.
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ007] Time Trick - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Predict, then draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ012] Practical Perfectionist - COST:3
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Predict. Create 3 copies of
    //              the chosen card in your deck.
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ017] Glorious Evolution - COST:10
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Your cards have -1 cost, Augment, are created
    //              by Glorious Evolution, and are now Tech.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ015] Adaptatron 3000 - COST:1
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When you summon a Tech, we share keywords.
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ004] Dropboarder - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: If you see me in a Prediction, summon me.
    // --------------------------------------------------------
}

void AddPiltoverZaunNonCollect(entt::registry& registry)
{
    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ001T4] Chronobreak - COST:3
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Revive all allies that died this round,
    //              then Rally.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ001T2] Ekko's Called Shot - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Draw 1.
    //              Create a Parallel Convergence in your deck.
    //              Create an Ekko in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ001T3] Ekko - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Strike: Create a Fleeting 0 cost Time Trick
    //              in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------ Ability - Piltover-&-Zaun
    // [04PZ005T2] Circuit Breaker - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 1 to enemies and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [04PZ005T1] Sumpworks Posse - COST:2
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Attack: Deal 1 to enemies and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ011T1] Parallel Convergence - COST:4
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Start a free attack with an exact Ephemeral
    //              copy of each ally.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [04PZ002T1] Hexite Crystal - COST:2
    // - Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: If you see me in a Prediction, draw me.
    //              Deal 2 to enemies and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------ Ability - Piltover-&-Zaun
    // [04PZ020T1] Swapbot's Swap - COST:0
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Swap my Power and Health with that of another unit.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------
}

void AddShadowIsles(entt::registry& registry)
{
    // ------------------------------------ Unit - Shadow-Isles
    // [04SI005] Kindred - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: The first time you slay a unit each round,
    //              I mark the weakest enemy.
    //              Round End: Kill units with my mark.
    // --------------------------------------------------------
    // Level Up Description: I've seen you slay 2 units with my mark.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI055] Viego - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: Each round, the first time an ally dies,
    //              summon an Encroaching Mist.
    // --------------------------------------------------------
    // Level Up Description: I've seen allies with 20+ total power die.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI016] Spirit Leech  - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Kill an ally to draw 2.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI007] The Etherfiend - COST:7
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Kill an ally to kill an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [04SI011] Unto Dusk - COST:2
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Draw 1.
    //              Nightfall: Activate an ally's Nightfall effect,
    //              ignoring any targeted portions.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // -------------------------------- Landmark - Shadow-Isles
    // [04SI018] The Twisted Treeline - COST:3
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Once I've seen 3 Fearsome allies attack,
    //              destroy me to summon Vilemaw.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI015] Sea Scarab - COST:2
    // - Subtype: Sea monster, Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When another ally dies, or Last Breath: Toss 1.
    // --------------------------------------------------------
    // Keyword:
    // - Deep = 1
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI004] The Wings and The Wave - COST:1
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Play me as First Wave or Last Wind.
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [04SI017] Song of the Isles - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally Lifesteal, Fearsome, and Ephemeral.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI054] Camavoran Soldier - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, summon an Encroaching Mist.
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [04SI001] Lamb's Respite - COST:2
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give the weakest ally "I can't take damage or die"
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [04SI056] Withering Mist - COST:5
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Drain 2 from 2 enemies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI012] Astral Fox - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Kill an ally to deal 3 to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [04SI029] Despair - COST:4
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Pick a unit to strike your Nexus, then kill it.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI009] Soulspinner - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, grant me +1|+1 and
    //              Fearsome if an ally died this round.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI013] Mask Mother - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Kill an ally to grant me its stats
    //              and keywords.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI021] Crawling Viperwyrm - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: I strike an ally or deal 3 to your Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [04SI002] Spirit Journey - COST:5
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill a unit, then revive it.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI053] Invasive Hydravine - COST:7
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned or Round Start:
    //              Summon an Encroaching Mist.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI003] Fading Icon - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Prey.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI028] Camavoran Dragon - COST:4
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: I strike an ally or deal 3 to your Nexus.
    //              When I slay a unit, drain 1 from the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Fury = 1
    // - Fearsome = 1
    // --------------------------------------------------------
}

void AddShadowIslesyNonCollect(entt::registry& registry)
{
    // ----------------------------------- Spell - Shadow-Isles
    // [04SI005T4] Kindred's Spirit Journey - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill a unit, then revive it.
    //              Create a Kindred in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI005T1] Kindred - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: The first time you slay a unit each round,
    //              grant me +2|+2 and I mark the weakest enemy.
    //              Round End: Kill units with my mark.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [04SI055T1] Viego's Despair - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Pick a unit to strike your Nexus, then kill it.
    //              Create a Viego in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI055T2] Viego - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: Each round, the first time a unit dies,
    //              summon an Encroaching Mist.
    //              Round Start: Steal the strongest enemy this round.
    //              If it's a champion, kill it instead.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI045] Encroaching Mist - COST:1
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, grant all allied Viegos
    //              and other Encroaching Mists everywhere +1|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Ephemeral = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI004T1] Last Wind - COST:1
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: To play me, kill an ally.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI004T2] First Wave - COST:1
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Prey.
    // --------------------------------------------------------

    // --------------------------------- Ability - Shadow-Isles
    // [04SI012T1] Symmetry In Stars - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Kill an ally to deal 3 to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // --------------------------------- Ability - Shadow-Isles
    // [04SI007T3] The Second Death - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Kill an ally to kill an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [04SI014] Prey - COST:0
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
}

void AddShurima(entt::registry& registry)
{
    // ---------------------------------------- Spell - Shurima
    // [04SH100] Careful Preparation - COST:3
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: To Play, place a card from your hand
    //              into your deck. Predict, then create
    //              an exact copy of the chosen card in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH070] Unworthy - COST:2
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give an enemy follower -4|-0 this round.
    //              If you have fewer mana gems than your opponent,
    //              kill it instead.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH081] Baccai Sandspinner - COST:4
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Grant an enemy -1|-0 and Vulnerable.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH077] Voice of the Risen - COST:4
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: If you've leveled a champion,
    //              allies have +2|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH019] Rek'Sai - COST:3
    // - Subtype: Lurker, Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I Lurk or Attack: Grant Lurker allies
    //              everywhere +1|+0.
    //              Round End: Place me into your deck.
    // --------------------------------------------------------
    // Level Up Description: I've attacked with 10+ Power.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH138] The Absolver - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+1 this round.
    //              If you have leveled a champion this game,
    //              create a The Absolver's Return in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH089] Desert Naturalist - COST:4
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Destroy a landmark. If it's allied,
    //              summon a Grumpy Rockbear.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH015] Raz Bloodmane - COST:7
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Attack: Give enemies -2|-0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH058] Sandcrafter - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Attack: Summon an attacking Sand Soldier.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH080] Call the Pack - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: To play, put a card from hand on top of your deck.
    //              Create 2 random Lurkers in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // - Lurk = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH035] Payday - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create a Lucky Find in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH028] Ancient Preparations - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Predict.
    //              Countdown 2: Summon a Clockling.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH054] Treasure Seeker - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Waking Sands
    //              in hand.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH002] Baccai Reaper - COST:1
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When you slay a unit, grant me +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH042] Hibernating Rockbear - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Countdown 3: Summon a Grumpy Rockbear.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH032] Callous Bonecrusher - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Reputation: I cost 2.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH055] Ruin Runner - COST:5
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH039] Zilean - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: Play: Create 4 Time Bombs in your deck,
    //              then Predict.
    // --------------------------------------------------------
    // Level Up Description: I've seen you destroy 2 allied Time Bombs.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH073] Taliyah - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: Play: Summon an exact copy of an allied landmark.
    // --------------------------------------------------------
    // Level Up Description: You've summoned 5+ landmarks.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH091] Khahiri the Student - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, grant me +1|+1
    //              if you've Predicted this game.
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH024] Salt Spire - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Countdown 2: Summon a Grumpy Rockbear.
    //              Then, if you've summoned 4+ landmarks this game,
    //              grant the strongest ally +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003] Azir - COST:3
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When allies attack,
    //              summon an attacking Sand Soldier.
    // --------------------------------------------------------
    // Level Up Description: You've summoned 13+ allies.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH011] Xenotype Researchers - COST:3
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, grant 3 random allies
    //              in your deck +3|+3.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH130] Akshan - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned or Strike: Summon
    //              a Warlord's Palace or advance it 1 round.
    // --------------------------------------------------------
    // Level Up Description: Warlord's Palace has finished
    //                       its Countdown.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH114] Desert's Wrath - COST:4
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant allied Sand Soldiers everywhere +1|+0.
    //              Summon 2 Sand Soldiers.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH067] Renekton - COST:4
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I Challenge an enemy,
    //              give me +2|+1 this round.
    // --------------------------------------------------------
    // Level Up Description: I've dealt 12+ damage.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH120] Imagined Possibilities - COST:1
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create a random landmark with Countdown in hand,
    //              or advance your landmarks 1 round.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH119] Ricochet - COST:6
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Reputation: I cost 3.
    //              Deal 1 to a random enemy or the enemy Nexus 5 times.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH068] Xer'sai Caller - COST:3
    // - Subtype: Lurker, Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Predict.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH093] Shaped Stone - COST:1
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +1|+1 this round.
    //              If you've summoned a landmark this game,
    //              give it +2|+1 instead.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH079] Scrying Sands - COST:1
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Predict.
    //              Give an enemy -2|-0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH038] Rock Hopper - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Roiling Sands.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH104] Preservationist - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Advance an allied landmark 3 rounds.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH128] Vekauran Vagabond - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Warlord's Palace
    //              or advance it 2 rounds.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH043] Shifting Sands - COST:6
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 4 to a unit.
    //              Summon 2 Sand Soldiers.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH099] Arise! - COST:3
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a Sand Soldier.
    //              Create a Fleeting Arise! in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH048] Inner Sanctum - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Reputation: I cost 0.
    //              Countdown 1: Create 2 Lucky Finds in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH056] Profiteer - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Lucky Find in hand.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH020] Sivir - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Level Up Description: You've dealt 30+ damage.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH057] Inspiring Marshal - COST:6
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When you summon another ally,
    //              give it +2|+0 this round.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH103] Merciless Hunter - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Grant an enemy Vulnerable.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH065] Xerxa'Reth, The Undertitan - COST:5
    // - Subtype: Lurker, Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Attack: If I have 8+ Power, give me Fearsome,
    //              Overwhelm, and SpellShield this round.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH034] The Clock Hand - COST:8
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              create 2 Instant Centuries in hand.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH082] Ruinous Path - COST:2
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Draw 1.
    //              If you've slain a unit this round,
    //              drain 2 from the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH075] Emperor's Divide - COST:7
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give enemies Vulnerable this round and
    //              summon 6 Sand Soldiers.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH018] Rite of Dominance - COST:4
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill an ally or destroy one of your mana gems
    //              to give all enemies -2|-0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH009] Rampaging Baccai - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: If you've slain 4+ units this game,
    //              an enemy and I strike each other.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH049] Destined Poro - COST:1
    // - Subtype: Poro, Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Round Start: If you've leveled a champion,
    //              transform me into Exalted Poro.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH045] Exhaust - COST:1
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an enemy -2|-0 and Vulnerable this round.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH037] Unraveled Earth - COST:3
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon 2 Roiling Sands.
    //              Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH107] Ascended's Rise - COST:7
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Level up all level 1 Ascended allies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH047] Nasus - COST:6
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: I have +1|+1 for each unit
    //              you've slain this game.
    // --------------------------------------------------------
    // Level Up Description: I've struck for 10+ damage.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH097] Sanctum Conservator - COST:8
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: If you've slain 13+ units this game,
    //              kill all enemy followers,
    //              then summon a copy of me.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH026] Dunekeeper - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, summon a Sand Soldier.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH102] Golden Ambassador - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Allegiance: Draw a champion and grant it +2|+2.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH001] Aspiring Chronomancer - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Predict.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH022] Xer'sai Dunebreaker - COST:6
    // - Subtype: Lurker, Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH030] Chronoshift - COST:7
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an allied Champion "The next time
    //              I'd die this round, fully heal me and
    //              grant me +3|+3 instead".
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH013] Preservarium - COST:2
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, draw 1.
    //              Countdown 2: Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH062] Buried Sun Disc - COST:1
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Start of Game: Draw 1 of me
    //              if all your cards are Shuriman.
    //              Countdown 25: Restore the Sun Disc.
    //              When an Ascended ally levels up,
    //              advance me 10 rounds.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH016] Siphoning Strike - COST:5
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally strikes a unit.
    //              If it dies, grant allied champions
    //              everywhere +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH125] Vekauran Safecracker - COST:4
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Give an ally +2|+0 to give an enemy
    //              -2|-0 this round.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH108] Boomerang Blade - COST:7
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally strikes the strongest and weakest enemies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH066] Time in a Bottle - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Predict and advance an allied landmark 2 rounds.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH021] Khahiri the Returned - COST:6
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              create a copy of me in your deck.
    //              When you see me in a Prediction, grant all
    //              allied copies of me everywhere +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH101] Devoted Council - COST:3
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Round Start: If you've leveled a champion,
    //              heal your champions and Nexus 2.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH012] Esteemed Hierophant - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              advance your Buried Sun Disc 3 rounds.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH031] Promising Future - COST:4
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant an allied landmark "My Countdown
    //              completion effect activates twice".
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH004] Weight of Judgment - COST:4
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to a champion or 7 to a follower.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH059] Rite of Negation - COST:4
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill an ally or destroy one of your mana gems
    //              to stop all enemy Fast spells, Slow spells,
    //              and Skills.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH044] Clockwork Curator - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Advance an allied landmark 2 rounds.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH076] Ancient Hourglass - COST:2
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Obliterate an ally to summon a Stasis Statue
    //              in place with the ally stored inside.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH118] Waking Sands - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Summon a Sandstone Charger.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH072] Soothsayer - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, grant allied champions
    //              and landmarks SpellShield.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH041] Sai Scout - COST:3
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Predict. If you pick a landmark,
    //              grant me Elusive.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH005] Bloodthirsty Marauder - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH083] Feral Prescience - COST:0
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Predict.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH092] The Time Has Come - COST:5
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a Clockling.
    //              If you've Predicted this game,
    //              summon 2 instead.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH046] Sandstone Chimera - COST:12
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Reduce my cost by 1 for each time an ally
    //              attacked this game.
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH105] Sandswept Tomb - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When allies attack,
    //              summon an attacking Sandstone Charger.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH131] Grappling Hook - COST:3
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally you've targeted this round
    //              strikes an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH074] Xer'sai Hatchling - COST:1
    // - Subtype: Lurker, Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // - Fearsome = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH137] Thrumming Swarm - COST:7
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned, create a copy of me in hand
    //              if you've leveled a champion this game.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH069] Ruthless Predator - COST:2
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+0 to give an enemy Vulnerable
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH121] Rite of Calling - COST:0
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Kill an ally or destroy one of your mana gems
    //              to draw a champion.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH110] Stoneweaving - COST:1
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Manifest a landmark you can afford.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH051] Emperor's Dais - COST:2
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: When allies attack, summon an attacking Sand Soldier.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH106] Spirit Fire - COST:7
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give enemies -2|-0 and
    //              "Round End: Deal 2 to me" this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH129] Vekauran Bruiser - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Strike: Create a Lucky Find in hand.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH109] Quicksand - COST:3
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an enemy -4|-0 and disable its keywords
    //              (excluding any negative keywords) this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------
}

void AddShurimaNonCollect(entt::registry& registry)
{
    // ---------------------------------------- Spell - Shurima
    // [04SH059T2] Rite of Negation - COST:4
    // - Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Destroy one of your mana gems to stop
    //              all enemy Fast spells, Slow spells, and Skills.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH059T1] Rite of Negation - COST:4
    // - Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill an ally to stop all enemy Fast spells,
    //              Slow spells, and Skills.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH019T2] Rek'Sai's Call the Pack - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: To play, put a card from hand on top of your deck.
    //              Create 2 random Lurkers in hand.
    //              Create a Rek'Sai in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // - Lurk = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH019T1] Rek'Sai - COST:3
    // - Subtype: Lurker, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I level up, create 3 random Lurkers in hand.
    //              When I Lurk or Attack: Grant Lurker allies
    //              everywhere +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Lurk = 1
    // - Overwhelm = 1
    // --------------------------------------------------------

    // -------------------------------------- Ability - Shurima
    // [04SH089T1] Teen Spirit - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Destroy a landmark. If it's allied,
    //              summon a Grumpy Rockbear.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH060T1] Time Bomb - COST:2
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, draw 1 and advance other
    //              allied Time Bombs 1 round.
    //              Countdown 1: Deal 1 to enemies and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH039T2] Zilean's Chronoshift - COST:7
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an allied Champion "The next time
    //              I'd die this round, fully heal me and
    //              grant me +3|+3 instead".
    //              Create a Zilean in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH039T1] Zilean - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Round Start: Create a Fleeting copy of each
    //              non-Fleeting card I saw you play last round.
    //              Play: Create 4 Time Bombs in your deck, then Predict.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH073T2] Taliyah - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Play: Summon an exact copy of an allied landmark.
    //              Attack: Deal 2 to my blocker 3 times.
    //              If it's dead or gone,
    //              deal 2 to the enemy Nexus instead.
    // --------------------------------------------------------

    // -------------------------------------- Ability - Shurima
    // [04SH073T1] Threaded Volley - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 2 to Taliyah's blocker.
    //              If it's dead or gone,
    //              deal 2 to the enemy Nexus instead.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH073T3] Taliyah's Stoneweaving - COST:1
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Manifest a landmark you can afford.
    //              Create a Taliyah in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003T2] Azir - COST:3
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I level up, replace your deck
    //              with the Emperor's Deck, then draw 1.
    //              When allies attack,
    //              summon an attacking Sandstone Charger.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003T3] Azir - COST:3
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When allies attack,
    //              summon an attacking Sand Soldier.
    //              When you summon an ally,
    //              give us both +1|+0 this round.
    // --------------------------------------------------------
    // Level Up Description: You've restored the Sun Disc.
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003T14] Sandstone Charger - COST:2
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Ephemeral = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003T5] Golden Herald - COST:5
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Play and Round Start: Summon 2 Sand Soldiers
    //              and grant them +2|+2.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH003T4] Azir's Arise! - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a Sand Soldier.
    //              Create a Fleeting Arise! in hand.
    //              Create a Azir in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH003T10] General's Palace - COST:5
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Enemies are Vulnerable.
    //              Round Start: Rally.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003T1] Sand Soldier - COST:1
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Nexus Strike: Deal 1 to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Ephemeral = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003T8] Eternal Gladiator - COST:7
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, draw 1.
    //              Round End: The Strongest enemy
    //              and I strike each other.
    // --------------------------------------------------------
    // Keyword:
    // - Barrier = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH003T6] Crumbling Sands - COST:4
    // - Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Obliterate an enemy follower.
    //              Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH003T12] Sandstorm - COST:9
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Obliterate 3 enemy units or landmarks.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH003T11] Emperor's Guard - COST:2
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned, draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH003T7] Shimmering Mirage - COST:3
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon an exact copy of an ally.
    //              It's Ephemeral. Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH003T13] Ascended's Call - COST:10
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Rally.
    //              Summon Renekton and Nasus.
    //              Immediately level them up to level 3.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH003T9] Emperor's Prosperity - COST:2
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Draw 2.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T5] Akshan's Grappling Hook - COST:3
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally you've targeted this round strikes
    //              an enemy. Create an Akshan in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH130T2] Akshan - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned, level up, or Strike:
    //              Summon a Warlord's Hoard or advance it 1 round.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH130T1] Warlord's Palace - COST:1
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Countdown 8: Create a Relic of Power in hand.
    //              When you target allies advance me 1.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH130T6] Warlord's Hoard - COST:1
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Countdown 8: Create a Sentinel's Hoard in hand.
    //              When you target allies advance me 1.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T13] Sentinel's Hoard - COST:0
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Cast a The Absolver's Resurrection,
    //              a Fount of Power, or a Shield of the Sentinels.
    // --------------------------------------------------------
    // Keyword:
    // - Fleeting = 1
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T7] Fount of Power - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Draw 2. Your cards cost 1 less this round.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T14] The Absolver's Resurrection - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant all enemies Vulnerable and create
    //              in hand a 0 cost copy of the strongest
    //              ally that died this game.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T8] Shield of the Sentinels - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant your champions everywhere SpellShield
    //              and +2|+2.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T10] Relic of Power - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick 1 - Predict then draw 1,
    //              summon a Sandstone Charger,
    //              or grant all allies +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Fleeting = 1
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T12] Relic of Power - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a Sandstone Charger.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T9] Relic of Power - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant all allies +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH130T11] Relic of Power - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Predict, then draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH067T1] Renekton - COST:4
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I block or Attack: Deal 2 to enemies
    //              and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH067T4] Renekton - COST:4
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Attack: Give me +3|+3 this round.
    // --------------------------------------------------------
    // Level Up Description: You've restored the Sun Disc.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH067T2] Renekton's Ruthless Predator - COST:2
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+0 to give an enemy Vulnerable
    //              this round. Create a Renekton in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // -------------------------------------- Ability - Shurima
    // [04SH067T5] Dominus Destruction - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 2 to enemies and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH138T1] The Absolver's Return - COST:2
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally Overwhelm and +2|+1 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T3] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Fearsome
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T12] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Overwhelm
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T7] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Quick Attack
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T6] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: +1|+1
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T2] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Challenger
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T10] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Tough
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T5] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: +2|+0
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T8] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: +0|+2
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098T1] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: SpellShield
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH098] Lucky Find - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick a buff from among 3 to grant an ally.
    // --------------------------------------------------------
    // Keyword:
    // - Fleeting = 1
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH120T2] Imagined Possibilities - COST:1
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Advance your landmarks 1 round.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH120T1] Imagined Possibilities - COST:1
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Create a random landmark with Countdown in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH006] Roiling Sands - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When an enemy is summoned,
    //              destroy me to grant it Vulnerable.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH076T1] Stasis Statue - COST:2
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Countdown 1: Summon exact copies of
    //              the units and landmarks stored inside.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH034T1] Instant Century - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a random landmark with Countdown,
    //              or advance a landmark 4 rounds.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH034T2] Instant Century - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Advance a landmark 4 rounds.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH034T3] Instant Century - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Summon a random landmark with Countdown.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH049T1] Exalted Poro - COST:1
    // - Subtype: Poro, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: I have 3 random keywords.
    // --------------------------------------------------------

    // -------------------------------------- Ability - Shurima
    // [04SH009T1] Baccai Rampage - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Rampaging Baccai and an enemy strike each other.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH014] Clockling - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH047T1] Nasus' Siphoning Strike - COST:5
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally strikes a unit. If it dies,
    //              grant allied champions everywhere +2|+2.
    //              Create a Nasus in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH047T2] Nasus - COST:6
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: I have +1|+1 for each unit you've slain this game.
    //              Enemies have -3|-0.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // - SpellShield = 1
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH047T3] Nasus - COST:6
    // - Subtype: Ascended, Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: I have +1|+1 for each unit you've slain this game.
    //              Enemies have -1|-0.
    // --------------------------------------------------------
    // Level Up Description: You've restored the Sun Disc.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // - SpellShield = 1
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH020T2] Sivir's Ricochet - COST:6
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Reputation: I cost 3.
    //              Deal 1 to a random enemy or the enemy Nexus 5 times.
    //              Create a Sivir in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH020T1] Sivir - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: While I'm attacking,
    //              attacking allies have my keywords.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // - SpellShield = 1
    // --------------------------------------------------------

    // ------------------------------------- Landmark - Shurima
    // [04SH062T1] Restored Sun Disc - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Immediately draw 1 of each of your Ascended allies.
    //              For the rest of the game, your level 2 Ascended
    //              allies are level 3.
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH018T2] Rite of Dominance - COST:4
    // - Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Kill an ally to give all enemies -2|-0
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH018T1] Rite of Dominance - COST:4
    // - Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Destroy one of your mana gems
    //              to give all enemies -2|-0 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH121T1] Rite of Calling - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy one of your mana gems to draw a Champion.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------------- Spell - Shurima
    // [04SH121T2] Rite of Calling - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Kill an ally to draw a Champion.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------------- Ability - Shurima
    // [04SH097T1] Conservator's Judgment - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: If you've slain 13+ units this game,
    //              kill all enemy followers,
    //              then summon a copy of me.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ----------------------------------------- Unit - Shurima
    // [04SH090] Grumpy Rockbear - COST:5
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
}

void AddTargon(entt::registry& registry)
{
    // -------------------------------------- Landmark - Targon
    // [04MT014] Eye of the Ra-Horak - COST:5
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Countdown 1: Stun the 2 weakest enemies.
    //              Daybreak: Summon a copy of me with Countdown 2.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [04MT008] Malphite - COST:7
    // - Supertype: Champion, Set: Set4, Rarity: Champion
    // --------------------------------------------------------
    // Level Up Description: You've summoned 10+ mana of landmarks.
    //                       When I level up, if you have the attack token,
    //                       create an Unstoppable Force in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Tough = 1
    // --------------------------------------------------------

    // -------------------------------------- Landmark - Targon
    // [04MT010] Startipped Peak - COST:2
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Countdown 2: Create 2 random Celestial cards
    //              that cost 3 or less in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [04MT005] Chip - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Once you've summoned a landmark this game,
    //              grant me +2|+2.
    // --------------------------------------------------------

    // -------------------------------------- Landmark - Targon
    // [04MT009] Spiral Stairs - COST:3
    // - Set: Set4, Rarity: Rare
    // --------------------------------------------------------
    // Description: Countdown 3: Create a Seed of Strength in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // -------------------------------------- Landmark - Targon
    // [04MT001] Rockfall Path - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Countdown 2: Obliterate the weakest enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [04MT018] Frightened Ibex - COST:1
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm supported, give me and
    //              my supporting ally +1|+1 this round.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [04MT004] Blue Sentinel - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Last Breath: Summon a Crest of Insight.
    // --------------------------------------------------------
    // Keyword:
    // - Last Breath = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [04MT013] Solari Sunhawk - COST:2
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Daybreak: Stun the strongest enemy.
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [04MT003] Earth Elemental - COST:4
    // - Set: Set4, Rarity: Common
    // --------------------------------------------------------
    // Description: Once you've summoned 4+ landmarks this game,
    //              grant me +3|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------------ Unit - Targon
    // [04MT002] Stonebreaker - COST:6
    // - Set: Set4, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: If you've summoned 4+ landmarks this game,
    //              deal 4 to an enemy and 2 to the enemy Nexus.
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [04MT006] Starlit Epiphany - COST:3
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Invoke.
    //              If you have a Celestial ally, replace your deck
    //              with 20 copies of Behold the Infinite.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [04MT012] Destiny's Call - COST:8
    // - Set: Set4, Rarity: Epic
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally in hand +8|+8.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [04MT007] Ground Slam  - COST:4
    // - Set: Set4, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Stun an enemy. Deal 3 to it
    //              if you've summoned a landmark this game.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [04MT015] Heavens Aligned - COST:1
    // - Set: Set4, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Daybreak: Create a random Nightfall card in hand.
    //              Nightfall: Create a random Daybreak card in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------
}

void AddTargonNonCollect(entt::registry& registry)
{
    // ------------------------------------------ Unit - Targon
    // [04MT008T1] Malphite - COST:7
    // - Supertype: Champion, Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned or Round Start:
    //              If you have the attack token,
    //              create an Unstoppable Force in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Tough = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [04MT008T4] Unstoppable Force - COST:2
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Stun all enemies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [04MT008T5] Malphite's Ground Slam - COST:4
    // - Supertype: Champion, Set: Set4, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Stun an enemy. Deal 3 to it
    //              if you've summoned a landmark this game.
    //              Create a Malphite in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ----------------------------------------- Spell - Targon
    // [04MT009T1] Seed of Strength - COST:0
    // - Set: Set4, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Grant an ally +3|+2 and Overwhelm.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // - Fleeting = 1
    // --------------------------------------------------------

    // -------------------------------------- Landmark - Targon
    // [04MT004T1] Crest of Insight - COST:2
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Countdown 1: Get an extra mana gem this round.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // - Landmark = 1
    // --------------------------------------------------------

    // --------------------------------------- Ability - Targon
    // [04MT013T1] Blinding Crest - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: Stun the Strongest enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // --------------------------------------- Ability - Targon
    // [04MT002T2] Shaken Ground - COST:0
    // - Set: Set4, Rarity: None
    // --------------------------------------------------------
    // Description: If you've summoned 4+ landmarks this game,
    //              deal 4 to an enemy and 2 to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
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
}  // namespace Runeterra::Set4
