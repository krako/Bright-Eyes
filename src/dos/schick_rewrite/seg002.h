extern unsigned int get_readlength2(signed short index);
extern void set_to_ff();
extern unsigned short mod_timer(short val);
extern short can_merge_group();
extern unsigned short div16(unsigned char val);
extern unsigned short check_hero(Bit8u* hero);
extern void add_hero_ae(Bit8u* hero, short ae);
extern short test_attrib(Bit8u* hero, unsigned short attrib, short bonus);
extern short test_attrib3(Bit8u* hero, unsigned short attrib1, unsigned short attrib2, unsigned short attrib3, char bonus);
extern unsigned int get_party_money();
extern void add_hero_ap(Bit8u* hero, int ap);
extern void add_hero_ap_all(Bit8u* hero, int ap);
extern unsigned short get_hero_index(Bit8u* hero);
extern int get_item_pos(Bit8u* hero, unsigned short item);
extern unsigned short count_heroes_available_in_group();