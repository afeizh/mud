inherit ROOM;

void create()
{
        set("short", "密道");
        set("long", @LONG
这里是五毒教花园下面的一条狭窄的暗道。阴森可怕，到
处积满了灰尘，结满了蛛网，也不知道通往何处。
LONG);
        set("exits", ([
                "east"  : __DIR__"midao2",
                "north" : __DIR__"midao4",
        ]));
        setup();
        //replace_program(ROOM);
}
