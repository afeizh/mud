#include <ansi.h>

int isAreaPattern() { return 1; }

string getName() { return "海軍戰艦 - 朝南"; }


private mapping getIcon()
{
    mapping icon =
        ([ 0: ({ BBLU+HIW"～"NOR, BBLU+HIW"～"NOR, "◢", "■", "■", "■", "■", "■", "■", "■", "■", "■", "◣", BBLU+HIW"～"NOR, BBLU+HIW"～"NOR, }),
           1: ({ BBLU+HIW"～"NOR, "◢", "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", "◣", BBLU+HIW"～"NOR, }),
           2: ({ "◢", "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", "◣", }),
           3: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", HIB"●"NOR, "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
           4: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", HIB"│"NOR, "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
           5: ({ "■", "  ", "  ", "  ", "  ", HIB"●"NOR, HIB"─"NOR, HIB"●"NOR, HIB"─"NOR, HIB"●"NOR, "  ", "  ", "  ", "  ", "■", }),
           6: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", HIB"│"NOR, "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
           7: ({ "■", "  ", "  ", "  ", HIB"WO"NOR, HIB"RL"NOR, HIB"D "NOR, HIB"●"NOR, HIB" G"NOR, HIB"OV"NOR, HIB"T."NOR, "  ", "  ", "  ", "■", }),
           8: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
           9: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          10: ({ "■", "  ", "  ", "■", "■", "■", "■", "■", "■", "■", "■", "■", "  ", "  ", "■", }),
          11: ({ "■", "  ", "  ", "■", BWHT"  "NOR, BWHT+RED"操"NOR, BWHT"  "NOR, BWHT+RED"舵"NOR, BWHT"  "NOR, BWHT+RED"室"NOR, BWHT"  "NOR, "■", "  ", "  ", "■", }),
          12: ({ "■", "  ", "  ", "■", BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, "■", "  ", "  ", "■", }),
          13: ({ "■", "二", "二", "■", BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, BWHT"  "NOR, "■", "二", "二", "■", }),
          14: ({ "■", "二", "二", "■", "■", "■", "■", "Ⅱ", "■", "■", "■", "■", "二", "二", "■", }),
          15: ({ "■", "  ", "  ", "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", "  ", "  ", "■", }),
          16: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          17: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          18: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          19: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          20: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          21: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          22: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          23: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          24: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          25: ({ "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", }),
          26: ({ BCYN"◥"NOR, "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", BCYN"◤"NOR, }),
          27: ({ BCYN+BLU"◣"NOR, BCYN"◥"NOR, "■", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "  ", "■", BCYN"◤"NOR, BCYN+BLU"◢"NOR, }),
          28: ({ BBLU+HIW"～"NOR, BCYN+BLU"◣"NOR, BCYN"◥"NOR, "■", "■", "■", "■", "■", "■", "■", "■", "■", BCYN"◤"NOR, BCYN+BLU"◢"NOR, BBLU+HIW"～"NOR, }),
        ]);
    return icon;
}

private mapping getBlock()
{
    mapping block =
        ([ 0: ({ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }),
           1: ({ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 }),
           2: ({ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 }),
           3: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
           4: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
           5: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
           6: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
           7: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
           8: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
           9: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          10: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          11: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          12: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          13: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          14: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          15: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          16: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          17: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          18: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          19: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          20: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          21: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          22: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          23: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          24: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          25: ({ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 }),
          26: ({ 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 }),
          27: ({ 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1 }),
          28: ({ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }),
        ]);
    return block;
}

mapping getMapStyle()
{
    mapping style = ([
        "icon": getIcon(),
        "block": getBlock(),
    ]);

    return style;
}
