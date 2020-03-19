#include <command.h>
#include <ansi.h>

inherit NPC;

void create()
{
        set_name("八卦弟子", ({ "bagua dizi", "dizi", "bagua" }));
        set("age", 23);
        set("gender", "男性");
        set("long", "真武剑阵八卦方位弟子。\n");
        set("attitude", "peaceful");

        set("str", 24);
        set("dex", 16);
        set("combat_exp", 150000);
        set("shen_type", 1);

        set("max_qi", 10);
        set("max_jing", 10);

        set_skill("unarmed", 120);
        set_skill("sword", 120);
        set_skill("force", 120);

        set("chat_chance", 1);
        set("chat_msg", ({
                CYN "八卦弟子齐声吆喝：真武剑阵，天下第一！\n" NOR,
        }));
        create_family("武当派", 3, "弟子");

        setup();
        carry_object("/clone/weapon/changjian");
        carry_object("/d/wudang/obj/baguafu")->wear();
}

void unconcious()
{
        die();
}
