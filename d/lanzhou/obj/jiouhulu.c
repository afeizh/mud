// jiouhulu.c

inherit ITEM;
inherit F_LIQUID;

void create()
{
    set_name("葫芦", ({"jiouhulu", "hulu"}));
    set_weight(700);
    if (clonep())
        set_default_object(__FILE__);
    else {
        set("long", "一个用葫芦制成的酒壶。\n");
        set("unit", "个");
        set("value", 100);
        set("max_liquid", 10);
    }

    // because a container can contain different liquid
    // we set it to contain water at the beginning
    set("liquid", ([
        "type": "water",
        "name": "百年陈酿--女儿红",
        "remaining": 10,
        "drunk_supply": 10,
    ]));
}
