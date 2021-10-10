import json


def generate_card_comment(card):
    div = "\n// --------------------------------------------------------"
    comm = "\n// "
    if "region" in card.keys():
        str_format = "//#" + \
                     '%56s' % ("#" + card['type'] + "#-#" + card['region'])
    else:
        str_format = "//#" + '%56s' % ("#" + card['type'])
    str_format = str_format.replace(" ", "-")
    str_format = str_format.replace("#", " ")
    str_format = str_format + comm + "[" + card['cardCode'] + "] " + card['name'] + " - COST:"
    if "cost" in card.keys():
        str_format = str_format + str(card['cost'])
    else:
        str_format = str_format + str(0)
    if card['type'] == "MINION":
        str_format = str_format + \
                     " [ATK:" + str(card['attack']) + "/HP:" + \
                     str(card['health']) + "]"
    str_format = str_format + comm + "- "
    if "subtype" in card.keys() and card['subtype'] != "":
        str_format = str_format + "Subtype: " + card['subtype'].capitalize() + ", "
    if "supertype" in card.keys() and card['supertype'] != "":
        str_format = str_format + "Supertype: " + card['supertype'].capitalize() + ", "
    str_format = str_format + "Set: " + card['set']
    if "rarity" in card.keys():
        str_format = str_format + ", " + \
                     "Rarity: " + card['rarity'].capitalize()
    if "spellSpeed" in card.keys() and card['spellSpeed'] != "":
        str_format = str_format + comm
        str_format = str_format + "- " + "Spell Speed: " + card['spellSpeed'].capitalize()
    str_format = str_format + div
    if "descriptionRaw" in card.keys() and card['descriptionRaw'] != "":
        card['descriptionRaw'] = card['descriptionRaw'].replace("\r", "")
        card['descriptionRaw'] = card['descriptionRaw'].replace("\n", "\n//              ")
        str_format = str_format + comm + "Description: " + card['descriptionRaw'] + div
    if "levelupDescriptionRaw" in card.keys() and card['levelupDescriptionRaw'] != "":
        card['levelupDescriptionRaw'] = card['levelupDescriptionRaw'].replace("\r", "")
        card['levelupDescriptionRaw'] = card['levelupDescriptionRaw'].replace("\n", "\n//              ")
        str_format = str_format + comm + "Level Up Description: " + card['levelupDescriptionRaw'] + div
    # If card has keywords, add it.
    if "keywords" in card.keys() and len(card['keywords']) > 0:
        str_format = str_format + comm + "Keyword:"
        for keyword in card['keywords']:
            str_format = str_format + comm + "- " + keyword + " = 1"
        str_format = str_format + div
    return str_format


def generate_cards_comment(set_num):
    bandle_city = []
    bandle_city_non_collect = []
    bilgewater = []
    bilgewater_non_collect = []
    demacia = []
    demacia_non_collect = []
    freljord = []
    freljord_non_collect = []
    ionia = []
    ionia_non_collect = []
    noxus = []
    noxus_non_collect = []
    piltover_zaun = []
    piltover_zaun_non_collect = []
    shadow_isles = []
    shadow_isles_non_collect = []
    shurima = []
    shurima_non_collect = []
    targon = []
    targon_non_collect = []

    all = [bandle_city, bandle_city_non_collect, bilgewater, bilgewater_non_collect, demacia, demacia_non_collect,
           freljord, freljord_non_collect, ionia, ionia_non_collect, noxus, noxus_non_collect, piltover_zaun,
           piltover_zaun_non_collect, shadow_isles, shadow_isles_non_collect, shurima, shurima_non_collect, targon,
           targon_non_collect]
    all_names = ["BandleCity", "BandleCityNonCollect", "Bilgewater", "BilgewaterNonCollect", "Demacia",
                 "DemaciaNonCollect", "Freljord", "FreljordNonCollect", "Ionia", "IoniaNonCollect", "Noxus",
                 "NoxusNonCollect", "PiltoverZaun", "PiltoverZaunNonCollect", "ShadowIsles", "ShadowIslesNonCollect",
                 "Shurima", "ShurimaNonCollect", "Targon", "TargonNonCollect"]

    # coding=utf8
    file_path = "../Resources/set" + set_num + "-en_us.json"
    with open(file_path, "r", encoding='UTF8') as json_file:
        card_data = json.load(json_file)
    # Empty the list
    total_cnt = 0
    collectible_cnt = 0
    for card in card_data:
        # count the number of cards in target set
        total_cnt += 1
        if "collectible" in card.keys() and card["collectible"] is True:
            collectible_cnt += 1

        if card["region"] == "Bandle City":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                bandle_city.append(data)
            else:
                bandle_city_non_collect.append(data)
        elif card["region"] == "Bilgewater":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                bilgewater.append(data)
            else:
                bilgewater_non_collect.append(data)
        elif card["region"] == "Demacia":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                demacia.append(data)
            else:
                demacia_non_collect.append(data)
        elif card["region"] == "Freljord":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                freljord.append(data)
            else:
                freljord_non_collect.append(data)
        elif card["region"] == "Ionia":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                ionia.append(data)
            else:
                ionia_non_collect.append(data)
        elif card["region"] == "Noxus":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                noxus.append(data)
            else:
                noxus_non_collect.append(data)
        elif card["region"] == "Piltover & Zaun":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                piltover_zaun.append(data)
            else:
                piltover_zaun_non_collect.append(data)
        elif card["region"] == "Shadow Isles":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                shadow_isles.append(data)
            else:
                shadow_isles_non_collect.append(data)
        elif card["region"] == "Shurima":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                shurima.append(data)
            else:
                shurima_non_collect.append(data)
        elif card["region"] == "Targon":
            data = generate_card_comment(card)
            data = data + "\n" + "\n"
            if "collectible" in card.keys() and card["collectible"]:
                targon.append(data)
            else:
                targon_non_collect.append(data)

    name = iter(all_names)
    with open(target_set + "_comments" + ".txt", 'w+', -1, 'utf-8') as f:
        for group in all:
            f.write(next(name))
            f.write(" =" * 57 + "\n\n\n")
            for data in group:
                f.write(data)
        f.close()
    return total_cnt, collectible_cnt


if __name__ == '__main__':
    target_set = input(
        "Enter the number of set to generate comments (1 ~ 5): ")
    total_count, collectible_count = generate_cards_comment(target_set)
    print("Total of {total_count} card comments are generated. "
          "\nTotal of {collectible_count} collectible card comments are generated.\n".
          format(total_count=total_count, collectible_count=collectible_count))
