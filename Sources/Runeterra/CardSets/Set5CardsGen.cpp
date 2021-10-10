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
    // ------------------------------------- Unit - Bandle-City
    // [05BC010] Shark Trainer - COST:7
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When allies attack, spend 1 spell mana
    //              to summon an attacking Short Tooth.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC102] Wizened Wizard - COST:3
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Round Start: Refill 1 spell mana.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC099] Swole Scout - COST:4
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I¡¯m summoned, if you've added 2+ cards
    //              to your hand this round, grant me +1|+0
    //              and Elusive.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC133] Tristana - COST:3
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: I have +1|+0 for each multi-region ally
    //              you've summoned this game.
    //              When you summon a multi-region ally
    //              grant it +1|+0.
    // --------------------------------------------------------
    // Level Up Description: You've summoned 4+ multi-region allies.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC073] Inventive Chemist - COST:1
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I¡¯m summoned, summon a Scrappy Bomb.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC039] Gruff Grenadier - COST:4
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Allegiance: Summon another Yordle follower
    //              that costs 3 or less.
    // --------------------------------------------------------
    // Keyword:
    // - Impact = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC148] Furious Faefolk - COST:7
    // - Subtype: Fae, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, if you've dealt damage
    //              to the enemy Nexus 4+ times,
    //              grant me Impact 4 times.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC093] Veigar - COST:4
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Darkness in hand
    //              if you don't have one.
    //              Round Start: Grant your Darkness everywhere
    //              1 extra damage.
    // --------------------------------------------------------
    // Level Up Description: You've dealt 12+ damage with Darkness.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC007] Stone Stackers - COST:2
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Tough = 1
    // - Impact = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC185] Shell Game - COST:5
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Refill your spell mana.
    //              Give an ally Elusive and +1|+1 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC096] Tenor of Terror - COST:4
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, if you've played
    //              a created card or killed a unit with
    //              a spell this game, summon a Bass of Burden.
    // --------------------------------------------------------
    // Keyword:
    // - Impact = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC042] Purpleberry Shake - COST:1
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grow an ally to 3|3 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC205] Event Horizon - COST:5
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Stun an enemy, then stun all enemies
    //              with 2 or less Power.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC223] Entrapment - COST:2
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick 1 of 3 units or spells from the enemy deck
    //              and plant 3 Poison Puffcaps on all copies of it.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC163] Ziggs - COST:3
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: Attack: Deal 1 to my blocker and the enemy Nexus.
    // --------------------------------------------------------
    // Level Up Description: You've destroyed 4+ allied landmarks
    //                       this game.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC151] Mirror Mage - COST:8
    // - Subtype: Yordle, Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: When you play a created follower,
    //              summon an exact copy.
    //              When you play a created spell,
    //              cast it again on the same targets.
    // --------------------------------------------------------

    // --------------------------------- Landmark - Bandle-City
    // [05BC027] Hexplosive Minefield - COST:1
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I¡¯m summoned or destroyed,
    //              Stun the strongest enemy.
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC021] Bouncing Bomb - COST:3
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to an enemy or deal 1 to two enemies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC167] Bandle Commando - COST:2
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Nexus Strike: Create a Hungry Owlcat in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC179] Yordle Ranger - COST:6
    // - Subtype: Yordle, Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Attack: Grant me and all allies
    //              with equal or less power than me +0|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Scout = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC214] Mega Inferno Bomb - COST:7
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to all enemies, then do it again.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC041] Poppy - COST:4
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: Attack: Grant me and all allies
    //              with equal or less power than me +1|+1.
    // --------------------------------------------------------
    // Level Up Description: I've attacked with allies 3 times.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC105] Bandle Gunners - COST:8
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, if you've summoned units
    //              from 4+ regions this game,
    //              grant me Impact 4 times.
    // --------------------------------------------------------
    // Keyword:
    // - SpellShield = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC164] Poison Dart - COST:1
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to anything and plant 3 Poison Puffcaps
    //              on random cards in the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // --------------------------------- Landmark - Bandle-City
    // [05BC194] The Bandle Tree - COST:5
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Create a follower from
    //              a new region in hand. Win the game
    //              if you've summoned units from 10 regions.
    // --------------------------------------------------------
    // Keyword:
    // - Landmark = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC216] Yordle Contraption - COST:5
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy a landmark or create 2 random
    //              multi-region followers in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC212] Safety Inspector - COST:6
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Round Start: Create a Inspection Passed! in hand.
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC209] Stress Defense - COST:3
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Set a unit's stats to 1|6 this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC013] Tricksy Tentacles - COST:2
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Your opponent discards their lowest cost card.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC100] Puffcap Pup - COST:2
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Strike: Plant 3 Poison Puffcaps
    //              on random cards in the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC098] Twisted Catalyzer - COST:2
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Strike: Grant your Darkness everywhere
    //              1 extra damage.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC122] Yordle Newbie - COST:3
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I¡¯m summoned, if you¡¯ve added 2+ cards
    //              to your hand this round, grant me +1|+2.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC018] Pompous Cavalier - COST:3
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Keyword:
    // - Double Attack = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC132] Buster Shot - COST:4
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Costs 2 less if you have a Tristana or
    //              if you've summoned or cast cards from
    //              4+ regions this game. Deal 3 to a unit.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC198] Group Shot - COST:1
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 1 to an enemy. If you have 4+ allies,
    //              deal 2 instead.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC160] Proto Poro - COST:1
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Impact = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC005] Kelp Maidens - COST:2
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Nexus Strike: Create a Prank in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC049] Conchologist - COST:2
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Manifest a spell from your regions
    //              that costs 3 or less.
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC001] Minimorph - COST:6
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Transform a unit into a 3|3 Mini-Minitee
    //              and Silence it.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC026] Hidden Pathways - COST:5
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Costs 2 less if you've created 2+ cards
    //              this game. Draw 2.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC152] Aloof Travelers - COST:4
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I¡¯m summoned, ALL players draw 1, then
    //              your opponent discards their highest cost card.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC070] Ava Achiever - COST:6
    // - Subtype: Yordle, Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned and Round End:
    //              Plant 3 Poison Puffcaps on random cards
    //              in the enemy deck. Traps on enemy cards
    //              are doubled when activated.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC145] Yordle Squire - COST:1
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Create a Tiny Spear
    //              or a Tiny Shield in hand.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC140] Poro Sled - COST:5
    // - Subtype: Poro, Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Attack: Summon an attacking random 1 cost Poro.
    // --------------------------------------------------------
    // Keyword:
    // - Impact = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC129] Arena Kingpin - COST:3
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC004] Otterpus - COST:1
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Prank in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Attune = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC192] Bomber Twins - COST:2
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a random landmark
    //              that costs 2 or less in hand.
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC166] Pokey Stick - COST:2
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 1 to anything. Draw 1.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC006] The Arsenal - COST:8
    // - Subtype: Yordle, Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: I have a random keyword for each allied
    //              landmark you've destroyed this game.
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC040] Trinket Trade - COST:1
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Manifest an Otterpus or one of 2 spells
    //              from your regions that cost 3 or less.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC208] Heroic Charge - COST:5
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: An ally strikes an enemy.
    //              If it survives, Stun it.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC135] Double Tap - COST:6
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: An ally strikes an enemy.
    //              If the ally is multi-region,
    //              it strikes the enemy again.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC184] Babbling Balladeers - COST:3
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned,
    //              create a Hungry Owlcat in hand.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC116] Bandle City Mayor - COST:3
    // - Subtype: Yordle, Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Your multi-region units cost 1 less.
    //              Play: Manifest a multi-region follower.
    // --------------------------------------------------------
    // Keyword:
    // - Missing Translation = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC111] Yordles in Arms  - COST:5
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Give allies +2|+2 this round.
    //              If you've summoned or cast cards
    //              from 4+ regions, give allies +4|+4 instead.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC191] Keeper's Verdict - COST:6
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Place an enemy unit on top of the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC052] Treasured Trash - COST:10
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Fill your hand with random cards.
    //              They cost 0 and are Fleeting.
    //              You can only play 3 more cards this round.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC050] Benemone - COST:4
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create 2 Pranks in hand.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC094] Darkbulb Acolyte - COST:2
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Darkness in hand
    //              if you don't have one.
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC146] Bandle Painter - COST:3
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Play: Discard a card to create
    //              a multi-region follower in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Augment = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC235] Yordle Smith - COST:2
    // - Subtype: Yordle, Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Attack: Give all allies with equal or
    //              less Power than me Quick Attack this round.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC175] Loping Telescope - COST:2
    // - Subtype: Fae, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Manifest a Celestial that costs 3 or
    //              less, Epic, or multi-region follower.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC069] Lecturing Yordle - COST:4
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned or Attack:
    //              Create a Fleeting Poison Dart in hand.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC057] Stilted Robemaker - COST:4
    // - Subtype: Yordle, Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, reduce the cost of
    //              your Darkness everywhere by 1.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC188] Curious Shellfolk - COST:6
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: When you pick a card from randomly
    //              selected options, create a copy
    //              in hand and reduce its cost by 1.
    // --------------------------------------------------------
}

void AddBandleCityNonCollect(entt::registry& registry)
{
    // ------------------------------------- Unit - Bandle-City
    // [05BC010T1] Short Tooth - COST:1
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Overwhelm = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC202] Tristana's Buster Shot - COST:4
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Costs 2 less if you have a Tristana or
    //              if you've summoned or cast cards from
    //              4+ regions this game. Deal 3 to a unit.
    //              Create a Tristana in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC133T1] Tristana - COST:3
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: I have +1|+0 for each multi-region ally
    //              you've summoned this game.
    //              When you summon a multi-region ally,
    //              grant it +1|+0 and Impact.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC093T1] Veigar's Event Horizon - COST:5
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Stun an enemy, then stun all enemies
    //              with 2 or less Power.
    //              Create a Veigar in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC093T2] Grand Overseer Veigar - COST:4
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned and Round Start:
    //              Create a Darkness in hand if you don't have one.
    //              Round Start: Grant your Darkness everywhere
    //              1 extra damage.
    //              When you cast Darkness, it can target anything.
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC096T1] Bass of Burden - COST:4
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - Impact = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC223T2] Entrapment - COST:2
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick 1 of 3 spells from the enemy deck
    //              and plant 3 Poison Puffcaps on all copies of it.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC223T1] Entrapment - COST:2
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick 1 of 3 units from the enemy deck
    //              and plant 3 Poison Puffcaps on all copies of it.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC163T3] Ziggs' Bouncing Bomb - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to an enemy or deal 1 to two enemies.
    //              Create a Ziggs in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ---------------------------------- Ability - Bandle-City
    // [05BC163T4] Short Fuse - COST:0
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 1 to Ziggs' blocker and to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC163T6] Ziggs' Bouncing Bomb - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to two enemies.
    //              Create a Ziggs in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC163T7] Ziggs' Bouncing Bomb - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to an enemy.
    //              Create a Ziggs in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC163T1] Ziggs - COST:3
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Attack: Deal 2 to my blocker and the enemy Nexus.
    //              When an allied landmark is destroyed,
    //              deal 2 to the enemy Nexus.
    // --------------------------------------------------------

    // ---------------------------------- Ability - Bandle-City
    // [05BC163T5] Short Fuse - COST:0
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 2 to Ziggs' blocker and the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC195] Prank - COST:1
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Pick 1 of 2 non-champion cards
    //              in the enemy's hand or deck and Prank it.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC216T2] Yordle Contraption - COST:5
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy a landmark.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC216T1] Yordle Contraption - COST:5
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Create 2 random multi-region followers in hand.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC212T1] Inspection Passed! - COST:0
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Destroy an allied landmark to deal 3 to anything.
    // --------------------------------------------------------
    // Keyword:
    // - Fleeting = 1
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC041T1] Poppy - COST:4
    // - Subtype: Yordle, Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Attack: Grant me and all allies with equal
    //              or less power than me +2|+2 and Impact.
    // --------------------------------------------------------
    // Keyword:
    // - Impact = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC041T3] Poppy's Keeper's Verdict - COST:6
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Place an enemy unit on top of the enemy deck.
    //              Create a Poppy in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC167T1] Hungry Owlcat - COST:1
    // - Subtype: Fae, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Keyword:
    // - SpellShield = 1
    // --------------------------------------------------------

    // --------------------------------- Landmark - Bandle-City
    // [05BC073T1] Scrappy Bomb - COST:1
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Countdown 3 or when I'm destroyed:
    //              Deal 1 to the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Countdown = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC145T2] Tiny Shield - COST:1
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +0|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC145T1] Tiny Spear - COST:1
    // - Set: Set5, Rarity: None
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Grant an ally +1|+0.
    // --------------------------------------------------------
    // Keyword:
    // - Focus = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC021T1] Bouncing Bomb - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Spell - Bandle-City
    // [05BC021T2] Bouncing Bomb - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 1 to two enemies.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------- Unit - Bandle-City
    // [05BC001T1] Mini-Minitee - COST:3
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
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
    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ015] Justice Rider - COST:4
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Whenever your opponent draws,
    //              plant 1 Flashbomb Trap randomly
    //              in the top 10 cards in the enemy deck.
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ012] Station Archivist - COST:3
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Play: Pick a spell in the top 5 cards of your deck
    //              and create an exact Fleeting copy in hand.
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ019] Most Wanted - COST:5
    // - Set: Set5, Rarity: Epic
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Pick a player to discard their
    //              lowest cost card to draw 3.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ017] Sump Fumes - COST:3
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 2 to a unit. If you've added 2+ cards
    //              to your hand this round, deal 3 to it instead.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ013] Piltover Peacemaker - COST:3
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 2 to an enemy and plant 2 Flashbomb Traps
    //              randomly in the top 10 cards of the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ020] Ambush - COST:2
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Give an ally +2|+0 this round.
    //              If you've added 2+ cards to your hand
    //              this round, give it Elusive this round.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ010] Advanced Intel - COST:1
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Burst
    // --------------------------------------------------------
    // Description: Plant 2 Flashbomb Traps randomly
    //              in the top 10 cards of the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Burst = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ014] Corina, Mastermind - COST:6
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Play: Plant 5 Flashbomb Traps randomly or
    //              activate the effects of all traps
    //              in the top 5 cards of the enemy deck.
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ002] Insider Knowledge - COST:3
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: ALL players draw 2.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ006] Caitlyn - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: Strike: Plant 2 Flashbomb Traps randomly
    //              in the top 10 cards in the enemy deck.
    // --------------------------------------------------------
    // Level Up Description: 5 of your traps have been activated.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ004] Officer Squad - COST:5
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I¡¯m summoned, create a Most Wanted in hand.
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ009] Sting Officer - COST:2
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: Nexus Strike: Plant 2 Flashbomb Traps randomly
    //              in the top 10 cards of the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Elusive = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ016] Coup de Grace - COST:5
    // - Set: Set5, Rarity: Rare
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Place an enemy follower into the enemy deck,
    //              then your opponent draws 1.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ035] Stinky Whump - COST:1
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Last Breath: Create a copy of me
    //              in the enemy deck with 2 Poison Puffcaps attached.
    // --------------------------------------------------------
    // Keyword:
    // - Last Breath = 1
    // --------------------------------------------------------
}

void AddPiltoverZaunNonCollect(entt::registry& registry)
{
    // ------------------------------ Ability - Piltover-&-Zaun
    // [05PZ014T1] Beguiling Blossom - COST:0
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Play: Plant 5 Flashbomb Traps randomly
    //              in the top 5 cards of the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // ------------------------------ Ability - Piltover-&-Zaun
    // [05PZ014T2] Volatile Bloom - COST:0
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Play: Activate the effects of all traps
    //              in the top 5 cards of the enemy deck.
    // --------------------------------------------------------
    // Keyword:
    // - Skill = 1
    // --------------------------------------------------------

    // --------------------------------- Trap - Piltover-&-Zaun
    // [05PZ008] Flashbomb Trap - COST:0
    // - Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Deal 1 damage to a random ally.
    // --------------------------------------------------------
    // Keyword:
    // - Trap = 1
    // --------------------------------------------------------

    // --------------------------------- Unit - Piltover-&-Zaun
    // [05PZ006T2] Caitlyn - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: Strike: Plant 4 Flashbomb Traps randomly
    //              in the top 10 cards in the enemy deck and
    //              deal damage to the enemy Nexus equal to
    //              the number of your traps activated this round.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // -------------------------------- Spell - Piltover-&-Zaun
    // [05PZ006T1] Caitlyn's Piltover Peacemaker - COST:3
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Fast
    // --------------------------------------------------------
    // Description: Deal 2 to an enemy and
    //              plant 2 Flashbomb Traps randomly
    //              in the top 10 cards of the enemy deck.
    //              Create a Caitlyn in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Fast = 1
    // --------------------------------------------------------
}

void AddShadowIsles(entt::registry& registry)
{
    // -------------------------------- Landmark - Shadow-Isles
    // [05SI014] Catalogue of Regrets - COST:4
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: Round Start: Create in hand a Fleeting copy
    //              of a non-Fleeting spell you cast last round.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI013] Mistkeepers - COST:5
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Each round, the first time you slay a unit
    //              with a spell, summon an Ephemeral Mistwraith.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI009] Senna - COST:5
    // - Supertype: Champion, Set: Set5, Rarity: Champion
    // --------------------------------------------------------
    // Description: When I'm summoned or Attack: Create a Darkness
    //              in hand if you don't have one. Your damage
    //              and kill spells accelerate to Fast.
    // --------------------------------------------------------
    // Level Up Description: I've seen you slay 3+ units with
    //                       spells or an allied Lucian die.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [05SI016] Dawning Shadow - COST:7
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Kill an enemy and give all enemies -2|-0
    //              this round.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI004] Watcher on the Isles - COST:4
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: Each round, the first time you slay
    //              a unit with a spell, deal 2 to the enemy Nexus.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI012] Solari Sentinel - COST:3
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Darkness in hand
    //              if you don't have one.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI008] Ixtali Sentinel - COST:6
    // - Set: Set5, Rarity: Rare
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Darkness in hand
    //              if you don't have one.
    //              When you play your next Darkness this round,
    //              copy it targeting the enemy Nexus.
    // --------------------------------------------------------
    // Keyword:
    // - Lifesteal = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [05SI003] Piercing Darkness - COST:6
    // - Set: Set5, Rarity: Common
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Drain 5 from a unit.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI010] Dess & Ada - COST:8
    // - Set: Set5, Rarity: Epic
    // --------------------------------------------------------
    // Description: When I'm summoned, create a Darkness in hand
    //              if you don't have one.
    //              Your next Darkness this round costs 0 and
    //              deals 2 to all enemies.
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI011] Burgeoning Sentinel - COST:1
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: The first time you slay a unit with a spell,
    //              grant me +2|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI015] Buhru Sentinel - COST:3
    // - Set: Set5, Rarity: Common
    // --------------------------------------------------------
    // Description: The first time you slay a unit with a spell,
    //              grant me +2|+1.
    // --------------------------------------------------------
    // Keyword:
    // - Fearsome = 1
    // --------------------------------------------------------
}

void AddShadowIslesyNonCollect(entt::registry& registry)
{
    // ----------------------------------- Spell - Shadow-Isles
    // [05SI029] Darkness - COST:3
    // - Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Deal 2 to an enemy.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------

    // ------------------------------------ Unit - Shadow-Isles
    // [05SI009T1] Senna - COST:5
    // - Supertype: Champion, Set: Set5, Rarity: None
    // --------------------------------------------------------
    // Description: When I'm summoned or Attack:
    //              Create a Darkness in hand if you don't have one.
    //              Your damage and kill spells accelerate to Fast
    //              and cost 1 less.
    // --------------------------------------------------------
    // Keyword:
    // - Quick Attack = 1
    // --------------------------------------------------------

    // ----------------------------------- Spell - Shadow-Isles
    // [05SI009T2] Senna's Dawning Shadow - COST:7
    // - Supertype: Champion, Set: Set5, Rarity: None
    // - Spell Speed: Slow
    // --------------------------------------------------------
    // Description: Kill an enemy and give all enemies -2|-0
    //              this round. Create a Senna in your deck.
    // --------------------------------------------------------
    // Keyword:
    // - Slow = 1
    // --------------------------------------------------------
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
