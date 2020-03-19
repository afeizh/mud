
inherit ROOM;

void create()
{
        set("short", "山间小径");
        set("long", @LONG
这是一条位於终南山脚，鲜为人知的小径。但见四周古木
叁天，树林苍翠，遍地山花，枝头啼鸟唱和不绝。往东可看到
一条道路。往西北可通往山林深处。
LONG
        );
        set("outdoors", "quanzhen");
        set("exits", ([
                "east"      : __DIR__"shanlu13",
                "northwest" : __DIR__"shanlu15",
        ]));

        setup();
        replace_program(ROOM);
}
