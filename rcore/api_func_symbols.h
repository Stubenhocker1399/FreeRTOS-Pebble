#include "common.h"
#include "rebbleos.h"
#include "librebble.h"
#include "log.h"

#include "graphics_wrapper.h"
GBitmap *gbitmap_create_with_resource_proxy(uint32_t resource_id);
ResHandle *resource_get_handle_proxy(uint16_t resource_id);
GFont *fonts_load_custom_font_proxy(ResHandle *handle);
bool persist_exists(void);
bool persist_exists(void) { return false; }

typedef void (*VoidFunc)(void);

void unalloc1() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 1"); }
void unalloc2() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 2"); }
void unalloc3() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 3"); }
void unalloc4() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 4"); }
void unalloc5() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 5"); }
void unalloc6() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 6"); }
void unalloc7() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 7"); }
void unalloc8() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 8"); }
void unalloc9() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 9"); }
void unalloc10() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 10"); }
void unalloc11() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 11"); }
void unalloc12() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 12"); }
void unalloc13() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 13"); }
void unalloc14() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 14"); }
void unalloc15() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 15"); }
void unalloc16() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 16"); }
void unalloc17() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 17"); }
void unalloc18() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 18"); }
void unalloc19() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 19"); }
void unalloc20() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 20"); }
void unalloc21() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 21"); }
void unalloc22() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 22"); }
void unalloc23() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 23"); }
void unalloc24() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 24"); }
void unalloc25() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 25"); }
void unalloc26() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 26"); }
void unalloc27() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 27"); }
void unalloc28() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 28"); }
void unalloc29() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 29"); }
void unalloc30() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 30"); }
void unalloc31() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 31"); }
void unalloc32() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 32"); }
void unalloc33() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 33"); }
void unalloc34() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 34"); }
void unalloc35() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 35"); }
void unalloc36() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 36"); }
void unalloc37() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 37"); }
void unalloc38() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 38"); }
void unalloc39() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 39"); }
void unalloc40() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 40"); }
void unalloc41() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 41"); }
void unalloc42() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 42"); }
void unalloc43() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 43"); }
void unalloc44() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 44"); }
void unalloc45() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 45"); }
void unalloc46() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 46"); }
void unalloc47() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 47"); }
void unalloc48() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 48"); }
void unalloc49() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 49"); }
void unalloc50() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 50"); }
void unalloc51() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 51"); }
void unalloc52() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 52"); }
void unalloc53() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 53"); }
void unalloc54() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 54"); }
void unalloc55() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 55"); }
void unalloc56() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 56"); }
void unalloc57() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 57"); }
void unalloc58() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 58"); }
void unalloc59() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 59"); }
void unalloc60() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 60"); }
void unalloc61() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 61"); }
void unalloc62() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 62"); }
void unalloc63() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 63"); }
void unalloc64() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 64"); }
void unalloc65() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 65"); }
void unalloc66() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 66"); }
void unalloc67() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 67"); }
void unalloc68() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 68"); }
void unalloc69() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 69"); }
void unalloc70() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 70"); }
void unalloc71() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 71"); }
void unalloc72() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 72"); }
void unalloc73() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 73"); }
void unalloc74() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 74"); }
void unalloc75() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 75"); }
void unalloc76() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 76"); }
void unalloc77() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 77"); }
void unalloc78() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 78"); }
void unalloc79() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 79"); }
void unalloc80() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 80"); }
void unalloc81() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 81"); }
void unalloc82() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 82"); }
void unalloc83() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 83"); }
void unalloc84() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 84"); }
void unalloc85() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 85"); }
void unalloc86() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 86"); }
void unalloc87() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 87"); }
void unalloc88() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 88"); }
void unalloc89() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 89"); }
void unalloc90() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 90"); }
void unalloc91() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 91"); }
void unalloc92() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 92"); }
void unalloc93() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 93"); }
void unalloc94() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 94"); }
void unalloc95() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 95"); }
void unalloc96() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 96"); }
void unalloc97() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 97"); }
void unalloc98() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 98"); }
void unalloc99() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 99"); }
void unalloc100() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 100"); }
void unalloc101() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 101"); }
void unalloc102() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 102"); }
void unalloc103() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 103"); }
void unalloc104() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 104"); }
void unalloc105() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 105"); }
void unalloc106() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 106"); }
void unalloc107() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 107"); }
void unalloc108() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 108"); }
void unalloc109() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 109"); }
void unalloc110() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 110"); }
void unalloc111() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 111"); }
void unalloc112() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 112"); }
void unalloc113() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 113"); }
void unalloc114() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 114"); }
void unalloc115() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 115"); }
void unalloc116() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 116"); }
void unalloc117() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 117"); }
void unalloc118() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 118"); }
void unalloc119() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 119"); }
void unalloc120() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 120"); }
void unalloc121() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 121"); }
void unalloc122() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 122"); }
void unalloc123() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 123"); }
void unalloc124() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 124"); }
void unalloc125() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 125"); }
void unalloc126() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 126"); }
void unalloc127() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 127"); }
void unalloc128() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 128"); }
void unalloc129() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 129"); }
void unalloc130() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 130"); }
void unalloc131() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 131"); }
void unalloc132() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 132"); }
void unalloc133() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 133"); }
void unalloc134() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 134"); }
void unalloc135() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 135"); }
void unalloc136() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 136"); }
void unalloc137() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 137"); }
void unalloc138() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 138"); }
void unalloc139() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 139"); }
void unalloc140() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 140"); }
void unalloc141() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 141"); }
void unalloc142() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 142"); }
void unalloc143() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 143"); }
void unalloc144() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 144"); }
void unalloc145() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 145"); }
void unalloc146() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 146"); }
void unalloc147() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 147"); }
void unalloc148() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 148"); }
void unalloc149() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 149"); }
void unalloc150() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 150"); }
void unalloc151() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 151"); }
void unalloc152() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 152"); }
void unalloc153() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 153"); }
void unalloc154() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 154"); }
void unalloc155() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 155"); }
void unalloc156() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 156"); }
void unalloc157() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 157"); }
void unalloc158() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 158"); }
void unalloc159() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 159"); }
void unalloc160() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 160"); }
void unalloc161() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 161"); }
void unalloc162() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 162"); }
void unalloc163() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 163"); }
void unalloc164() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 164"); }
void unalloc165() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 165"); }
void unalloc166() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 166"); }
void unalloc167() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 167"); }
void unalloc168() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 168"); }
void unalloc169() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 169"); }
void unalloc170() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 170"); }
void unalloc171() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 171"); }
void unalloc172() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 172"); }
void unalloc173() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 173"); }
void unalloc174() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 174"); }
void unalloc175() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 175"); }
void unalloc176() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 176"); }
void unalloc177() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 177"); }
void unalloc178() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 178"); }
void unalloc179() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 179"); }
void unalloc180() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 180"); }
void unalloc181() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 181"); }
void unalloc182() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 182"); }
void unalloc183() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 183"); }
void unalloc184() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 184"); }
void unalloc185() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 185"); }
void unalloc186() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 186"); }
void unalloc187() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 187"); }
void unalloc188() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 188"); }
void unalloc189() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 189"); }
void unalloc190() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 190"); }
void unalloc191() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 191"); }
void unalloc192() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 192"); }
void unalloc193() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 193"); }
void unalloc194() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 194"); }
void unalloc195() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 195"); }
void unalloc196() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 196"); }
void unalloc197() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 197"); }
void unalloc198() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 198"); }
void unalloc199() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 199"); }
void unalloc200() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 200"); }
void unalloc201() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 201"); }
void unalloc202() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 202"); }
void unalloc203() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 203"); }
void unalloc204() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 204"); }
void unalloc205() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 205"); }
void unalloc206() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 206"); }
void unalloc207() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 207"); }
void unalloc208() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 208"); }
void unalloc209() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 209"); }
void unalloc210() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 210"); }
void unalloc211() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 211"); }
void unalloc212() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 212"); }
void unalloc213() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 213"); }
void unalloc214() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 214"); }
void unalloc215() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 215"); }
void unalloc216() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 216"); }
void unalloc217() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 217"); }
void unalloc218() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 218"); }
void unalloc219() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 219"); }
void unalloc220() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 220"); }
void unalloc221() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 221"); }
void unalloc222() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 222"); }
void unalloc223() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 223"); }
void unalloc224() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 224"); }
void unalloc225() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 225"); }
void unalloc226() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 226"); }
void unalloc227() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 227"); }
void unalloc228() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 228"); }
void unalloc229() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 229"); }
void unalloc230() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 230"); }
void unalloc231() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 231"); }
void unalloc232() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 232"); }
void unalloc233() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 233"); }
void unalloc234() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 234"); }
void unalloc235() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 235"); }
void unalloc236() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 236"); }
void unalloc237() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 237"); }
void unalloc238() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 238"); }
void unalloc239() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 239"); }
void unalloc240() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 240"); }
void unalloc241() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 241"); }
void unalloc242() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 242"); }
void unalloc243() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 243"); }
void unalloc244() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 244"); }
void unalloc245() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 245"); }
void unalloc246() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 246"); }
void unalloc247() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 247"); }
void unalloc248() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 248"); }
void unalloc249() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 249"); }
void unalloc250() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 250"); }
void unalloc251() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 251"); }
void unalloc252() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 252"); }
void unalloc253() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 253"); }
void unalloc254() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 254"); }
void unalloc255() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 255"); }
void unalloc256() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 256"); }
void unalloc257() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 257"); }
void unalloc258() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 258"); }
void unalloc259() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 259"); }
void unalloc260() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 260"); }
void unalloc261() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 261"); }
void unalloc262() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 262"); }
void unalloc263() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 263"); }
void unalloc264() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 264"); }
void unalloc265() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 265"); }
void unalloc266() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 266"); }
void unalloc267() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 267"); }
void unalloc268() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 268"); }
void unalloc269() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 269"); }
void unalloc270() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 270"); }
void unalloc271() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 271"); }
void unalloc272() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 272"); }
void unalloc273() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 273"); }
void unalloc274() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 274"); }
void unalloc275() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 275"); }
void unalloc276() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 276"); }
void unalloc277() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 277"); }
void unalloc278() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 278"); }
void unalloc279() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 279"); }
void unalloc280() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 280"); }
void unalloc281() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 281"); }
void unalloc282() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 282"); }
void unalloc283() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 283"); }
void unalloc284() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 284"); }
void unalloc285() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 285"); }
void unalloc286() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 286"); }
void unalloc287() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 287"); }
void unalloc288() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 288"); }
void unalloc289() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 289"); }
void unalloc290() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 290"); }
void unalloc291() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 291"); }
void unalloc292() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 292"); }
void unalloc293() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 293"); }
void unalloc294() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 294"); }
void unalloc295() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 295"); }
void unalloc296() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 296"); }
void unalloc297() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 297"); }
void unalloc298() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 298"); }
void unalloc299() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 299"); }
void unalloc300() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 300"); }
void unalloc301() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 301"); }
void unalloc302() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 302"); }
void unalloc303() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 303"); }
void unalloc304() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 304"); }
void unalloc305() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 305"); }
void unalloc306() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 306"); }
void unalloc307() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 307"); }
void unalloc308() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 308"); }
void unalloc309() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 309"); }
void unalloc310() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 310"); }
void unalloc311() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 311"); }
void unalloc312() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 312"); }
void unalloc313() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 313"); }
void unalloc314() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 314"); }
void unalloc315() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 315"); }
void unalloc316() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 316"); }
void unalloc317() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 317"); }
void unalloc318() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 318"); }
void unalloc319() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 319"); }
void unalloc320() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 320"); }
void unalloc321() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 321"); }
void unalloc322() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 322"); }
void unalloc323() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 323"); }
void unalloc324() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 324"); }
void unalloc325() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 325"); }
void unalloc326() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 326"); }
void unalloc327() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 327"); }
void unalloc328() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 328"); }
void unalloc329() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 329"); }
void unalloc330() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 330"); }
void unalloc331() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 331"); }
void unalloc332() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 332"); }
void unalloc333() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 333"); }
void unalloc334() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 334"); }
void unalloc335() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 335"); }
void unalloc336() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 336"); }
void unalloc337() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 337"); }
void unalloc338() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 338"); }
void unalloc339() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 339"); }
void unalloc340() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 340"); }
void unalloc341() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 341"); }
void unalloc342() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 342"); }
void unalloc343() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 343"); }
void unalloc344() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 344"); }
void unalloc345() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 345"); }
void unalloc346() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 346"); }
void unalloc347() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 347"); }
void unalloc348() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 348"); }
void unalloc349() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 349"); }
void unalloc350() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 350"); }
void unalloc351() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 351"); }
void unalloc352() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 352"); }
void unalloc353() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 353"); }
void unalloc354() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 354"); }
void unalloc355() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 355"); }
void unalloc356() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 356"); }
void unalloc357() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 357"); }
void unalloc358() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 358"); }
void unalloc359() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 359"); }
void unalloc360() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 360"); }
void unalloc361() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 361"); }
void unalloc362() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 362"); }
void unalloc363() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 363"); }
void unalloc364() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 364"); }
void unalloc365() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 365"); }
void unalloc366() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 366"); }
void unalloc367() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 367"); }
void unalloc368() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 368"); }
void unalloc369() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 369"); }
void unalloc370() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 370"); }
void unalloc371() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 371"); }
void unalloc372() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 372"); }
void unalloc373() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 373"); }
void unalloc374() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 374"); }
void unalloc375() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 375"); }
void unalloc376() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 376"); }
void unalloc377() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 377"); }
void unalloc378() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 378"); }
void unalloc379() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 379"); }
void unalloc380() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 380"); }
void unalloc381() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 381"); }
void unalloc382() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 382"); }
void unalloc383() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 383"); }
void unalloc384() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 384"); }
void unalloc385() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 385"); }
void unalloc386() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 386"); }
void unalloc387() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 387"); }
void unalloc388() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 388"); }
void unalloc389() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 389"); }
void unalloc390() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 390"); }
void unalloc391() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 391"); }
void unalloc392() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 392"); }
void unalloc393() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 393"); }
void unalloc394() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 394"); }
void unalloc395() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 395"); }
void unalloc396() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 396"); }
void unalloc397() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 397"); }
void unalloc398() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 398"); }
void unalloc399() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 399"); }
void unalloc400() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 400"); }
void unalloc401() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 401"); }
void unalloc402() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 402"); }
void unalloc403() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 403"); }
void unalloc404() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 404"); }
void unalloc405() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 405"); }
void unalloc406() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 406"); }
void unalloc407() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 407"); }
void unalloc408() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 408"); }
void unalloc409() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 409"); }
void unalloc410() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 410"); }
void unalloc411() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 411"); }
void unalloc412() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 412"); }
void unalloc413() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 413"); }
void unalloc414() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 414"); }
void unalloc415() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 415"); }
void unalloc416() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 416"); }
void unalloc417() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 417"); }
void unalloc418() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 418"); }
void unalloc419() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 419"); }
void unalloc420() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 420"); }
void unalloc421() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 421"); }
void unalloc422() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 422"); }
void unalloc423() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 423"); }
void unalloc424() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 424"); }
void unalloc425() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 425"); }
void unalloc426() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 426"); }
void unalloc427() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 427"); }
void unalloc428() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 428"); }
void unalloc429() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 429"); }
void unalloc430() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 430"); }
void unalloc431() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 431"); }
void unalloc432() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 432"); }
void unalloc433() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 433"); }
void unalloc434() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 434"); }
void unalloc435() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 435"); }
void unalloc436() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 436"); }
void unalloc437() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 437"); }
void unalloc438() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 438"); }
void unalloc439() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 439"); }
void unalloc440() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 440"); }
void unalloc441() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 441"); }
void unalloc442() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 442"); }
void unalloc443() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 443"); }
void unalloc444() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 444"); }
void unalloc445() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 445"); }
void unalloc446() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 446"); }
void unalloc447() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 447"); }
void unalloc448() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 448"); }
void unalloc449() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 449"); }
void unalloc450() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 450"); }
void unalloc451() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 451"); }
void unalloc452() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 452"); }
void unalloc453() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 453"); }
void unalloc454() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 454"); }
void unalloc455() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 455"); }
void unalloc456() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 456"); }
void unalloc457() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 457"); }
void unalloc458() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 458"); }
void unalloc459() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 459"); }
void unalloc460() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 460"); }
void unalloc461() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 461"); }
void unalloc462() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 462"); }
void unalloc463() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 463"); }
void unalloc464() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 464"); }
void unalloc465() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 465"); }
void unalloc466() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 466"); }
void unalloc467() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 467"); }
void unalloc468() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 468"); }
void unalloc469() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 469"); }
void unalloc470() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 470"); }
void unalloc471() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 471"); }
void unalloc472() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 472"); }
void unalloc473() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 473"); }
void unalloc474() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 474"); }
void unalloc475() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 475"); }
void unalloc476() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 476"); }
void unalloc477() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 477"); }
void unalloc478() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 478"); }
void unalloc479() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 479"); }
void unalloc480() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 480"); }
void unalloc481() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 481"); }
void unalloc482() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 482"); }
void unalloc483() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 483"); }
void unalloc484() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 484"); }
void unalloc485() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 485"); }
void unalloc486() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 486"); }
void unalloc487() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 487"); }
void unalloc488() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 488"); }
void unalloc489() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 489"); }
void unalloc490() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 490"); }
void unalloc491() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 491"); }
void unalloc492() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 492"); }
void unalloc493() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 493"); }
void unalloc494() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 494"); }
void unalloc495() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 495"); }
void unalloc496() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 496"); }
void unalloc497() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 497"); }
void unalloc498() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 498"); }
void unalloc499() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 499"); }
void unalloc500() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 500"); }
void unalloc501() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 501"); }
void unalloc502() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 502"); }
void unalloc503() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 503"); }
void unalloc504() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 504"); }
void unalloc505() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 505"); }
void unalloc506() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 506"); }
void unalloc507() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 507"); }
void unalloc508() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 508"); }
void unalloc509() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 509"); }
void unalloc510() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 510"); }
void unalloc511() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 511"); }
void unalloc512() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 512"); }
void unalloc513() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 513"); }
void unalloc514() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 514"); }
void unalloc515() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 515"); }
void unalloc516() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 516"); }
void unalloc517() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 517"); }
void unalloc518() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 518"); }
void unalloc519() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 519"); }
void unalloc520() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 520"); }
void unalloc521() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 521"); }
void unalloc522() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 522"); }
void unalloc523() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 523"); }
void unalloc524() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 524"); }
void unalloc525() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 525"); }
void unalloc526() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 526"); }
void unalloc527() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 527"); }
void unalloc528() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 528"); }
void unalloc529() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 529"); }
void unalloc530() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 530"); }
void unalloc531() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 531"); }
void unalloc532() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 532"); }
void unalloc533() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 533"); }
void unalloc534() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 534"); }
void unalloc535() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 535"); }
void unalloc536() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 536"); }
void unalloc537() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 537"); }
void unalloc538() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 538"); }
void unalloc539() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 539"); }
void unalloc540() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 540"); }
void unalloc541() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 541"); }
void unalloc542() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 542"); }
void unalloc543() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 543"); }
void unalloc544() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 544"); }
void unalloc545() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 545"); }
void unalloc546() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 546"); }
void unalloc547() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 547"); }
void unalloc548() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 548"); }
void unalloc549() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 549"); }
void unalloc550() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 550"); }
void unalloc551() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 551"); }
void unalloc552() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 552"); }
void unalloc553() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 553"); }
void unalloc554() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 554"); }
void unalloc555() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 555"); }
void unalloc556() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 556"); }
void unalloc557() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 557"); }
void unalloc558() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 558"); }
void unalloc559() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 559"); }
void unalloc560() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 560"); }
void unalloc561() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 561"); }
void unalloc562() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 562"); }
void unalloc563() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 563"); }
void unalloc564() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 564"); }
void unalloc565() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 565"); }
void unalloc566() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 566"); }
void unalloc567() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 567"); }
void unalloc568() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 568"); }
void unalloc569() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 569"); }
void unalloc570() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 570"); }
void unalloc571() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 571"); }
void unalloc572() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 572"); }
void unalloc573() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 573"); }
void unalloc574() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 574"); }
void unalloc575() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 575"); }
void unalloc576() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 576"); }
void unalloc577() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 577"); }
void unalloc578() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 578"); }
void unalloc579() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 579"); }
void unalloc580() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 580"); }
void unalloc581() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 581"); }
void unalloc582() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 582"); }
void unalloc583() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 583"); }
void unalloc584() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 584"); }
void unalloc585() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 585"); }
void unalloc586() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 586"); }
void unalloc587() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 587"); }
void unalloc588() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 588"); }
void unalloc589() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 589"); }
void unalloc590() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 590"); }
void unalloc591() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 591"); }
void unalloc592() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 592"); }
void unalloc593() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 593"); }
void unalloc594() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 594"); }
void unalloc595() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 595"); }
void unalloc596() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 596"); }
void unalloc597() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 597"); }
void unalloc598() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 598"); }
void unalloc599() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 599"); }
void unalloc600() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 600"); }
void unalloc601() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 601"); }
void unalloc602() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 602"); }
void unalloc603() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 603"); }
void unalloc604() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 604"); }
void unalloc605() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 605"); }
void unalloc606() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 606"); }
void unalloc607() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 607"); }
void unalloc608() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 608"); }
void unalloc609() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 609"); }
void unalloc610() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 610"); }
void unalloc611() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 611"); }
void unalloc612() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 612"); }
void unalloc613() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 613"); }
void unalloc614() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 614"); }
void unalloc615() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 615"); }
void unalloc616() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 616"); }
void unalloc617() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 617"); }
void unalloc618() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 618"); }
void unalloc619() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 619"); }
void unalloc620() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 620"); }
void unalloc621() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 621"); }
void unalloc622() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 622"); }
void unalloc623() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 623"); }
void unalloc624() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 624"); }
void unalloc625() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 625"); }
void unalloc626() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 626"); }
void unalloc627() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 627"); }
void unalloc628() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 628"); }
void unalloc629() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 629"); }
void unalloc630() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 630"); }
void unalloc631() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 631"); }
void unalloc632() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 632"); }
void unalloc633() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 633"); }
void unalloc634() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 634"); }
void unalloc635() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 635"); }
void unalloc636() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 636"); }
void unalloc637() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 637"); }
void unalloc638() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 638"); }
void unalloc639() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 639"); }
void unalloc640() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 640"); }
void unalloc641() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 641"); }
void unalloc642() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 642"); }
void unalloc643() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 643"); }
void unalloc644() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 644"); }
void unalloc645() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 645"); }
void unalloc646() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 646"); }
void unalloc647() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 647"); }
void unalloc648() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 648"); }
void unalloc649() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 649"); }
void unalloc650() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 650"); }
void unalloc651() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 651"); }
void unalloc652() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 652"); }
void unalloc653() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 653"); }
void unalloc654() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 654"); }
void unalloc655() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 655"); }
void unalloc656() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 656"); }
void unalloc657() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 657"); }
void unalloc658() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 658"); }
void unalloc659() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 659"); }
void unalloc660() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 660"); }
void unalloc661() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 661"); }
void unalloc662() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 662"); }
void unalloc663() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 663"); }
void unalloc664() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 664"); }
void unalloc665() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 665"); }
void unalloc666() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 666"); }
void unalloc667() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 667"); }
void unalloc668() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 668"); }
void unalloc669() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 669"); }
void unalloc670() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 670"); }
void unalloc671() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 671"); }
void unalloc672() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 672"); }
void unalloc673() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 673"); }
void unalloc674() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 674"); }
void unalloc675() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 675"); }
void unalloc676() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 676"); }
void unalloc677() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 677"); }
void unalloc678() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 678"); }
void unalloc679() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 679"); }
void unalloc680() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 680"); }
void unalloc681() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 681"); }
void unalloc682() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 682"); }
void unalloc683() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 683"); }
void unalloc684() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 684"); }
void unalloc685() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 685"); }
void unalloc686() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 686"); }
void unalloc687() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 687"); }
void unalloc688() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 688"); }
void unalloc689() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 689"); }
void unalloc690() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 690"); }
void unalloc691() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 691"); }
void unalloc692() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 692"); }
void unalloc693() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 693"); }
void unalloc694() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 694"); }
void unalloc695() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 695"); }
void unalloc696() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 696"); }
void unalloc697() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 697"); }
void unalloc698() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 698"); }
void unalloc699() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 699"); }
void unalloc700() { SYS_LOG("apifs", APP_LOG_LEVEL_ERROR, "UNALLOC 700"); }

VoidFunc sym[700] = {
unalloc1,
unalloc2,
unalloc3,
unalloc4,
unalloc5,
unalloc6,
unalloc7,
unalloc8,
unalloc9,
unalloc10,
unalloc11,
unalloc12,
unalloc13,
unalloc14,
unalloc15,
unalloc16,
unalloc17,
unalloc18,
unalloc19,
unalloc20,
unalloc21,
unalloc22,
unalloc23,
unalloc24,
unalloc25,
unalloc26,
unalloc27,
unalloc28,
unalloc29,
unalloc30,
unalloc31,
(VoidFunc)app_event_loop,
unalloc33,
unalloc34,
(VoidFunc)app_log_trace,
unalloc36,
unalloc37,
unalloc38,
unalloc39,
unalloc40,
unalloc41,
unalloc42,
unalloc43,
unalloc44,
unalloc45,
unalloc46,
unalloc47,
(VoidFunc)app_timer_cancel,
(VoidFunc)app_timer_register,
(VoidFunc)app_timer_reschedule,
unalloc51,
unalloc52,
unalloc53,
unalloc54,                // battery_state_service_peek,
unalloc55,                // battery_state_service_subscribe,
unalloc56,                // battery_state_service_unsubscribe,
(VoidFunc)bitmap_layer_create,
(VoidFunc)bitmap_layer_destroy,
(VoidFunc)bitmap_layer_get_layer,
unalloc60,
unalloc61,
(VoidFunc)bitmap_layer_set_bitmap,
unalloc63,
unalloc64,
unalloc65,
unalloc66,
unalloc67,
unalloc68,
unalloc69,
(VoidFunc)pbl_clock_is_24h_style,                   //clock_is_24h_style
(VoidFunc)cos_lookup,
unalloc72,
unalloc73,
unalloc74,
unalloc75,
unalloc76,
unalloc77,
unalloc78,
unalloc79,
unalloc80,
unalloc81,
unalloc82,
unalloc83,
unalloc84,
unalloc85,
unalloc86,
unalloc87,
unalloc88,
unalloc89,
unalloc90,
unalloc91,
unalloc92,
unalloc93,
unalloc94,
unalloc95,
unalloc96,
(VoidFunc)fonts_get_system_font,
(VoidFunc)fonts_load_custom_font_proxy,                                              //custom font
unalloc99,
(VoidFunc)app_free,
(VoidFunc)gbitmap_create_as_sub_bitmap,
(VoidFunc)gbitmap_create_with_data,
(VoidFunc)gbitmap_create_with_resource_proxy,
(VoidFunc)gbitmap_destroy,
unalloc105,
(VoidFunc)n_gpath_create,
(VoidFunc)n_gpath_destroy,
unalloc108,
(VoidFunc)gpath_draw_app,
(VoidFunc)gpath_move_to_app,
(VoidFunc)gpath_rotate_to_app,
unalloc112, //(VoidFunc)gpoint_equal,
unalloc113,
unalloc114,
unalloc115,
unalloc116,
unalloc117, // (VoidFunc)graphics_draw_bitmap_in_rect_app,
(VoidFunc)graphics_draw_circle,
(VoidFunc)graphics_draw_line,
(VoidFunc)graphics_draw_pixel,
(VoidFunc)graphics_draw_rect,
unalloc122,
(VoidFunc)graphics_fill_circle,
(VoidFunc)graphics_fill_rect,
unalloc125,
unalloc126,
unalloc127,
(VoidFunc)n_graphics_center_point_rect,
unalloc129,
unalloc130,
unalloc131,
(VoidFunc)grect_equal,
unalloc133,
unalloc134,
unalloc135,
unalloc136,
unalloc137,
unalloc138,
(VoidFunc)layer_add_child,
(VoidFunc)layer_create,
unalloc141,
unalloc142,
(VoidFunc)layer_get_bounds,
unalloc144,
unalloc145,
(VoidFunc)layer_get_frame,
unalloc147,
unalloc148,
unalloc149,
unalloc150,
(void*)layer_mark_dirty,
unalloc152,
unalloc153,
unalloc154,
unalloc155,
(VoidFunc)layer_set_frame,
(VoidFunc)layer_set_hidden,
(VoidFunc)layer_set_update_proc,
unalloc159,
unalloc160,
(VoidFunc)rebble_time_get_tm,
unalloc162,
unalloc163,
unalloc164,
(VoidFunc)memset,
unalloc166,
unalloc167,
unalloc168,
unalloc169,
unalloc170,
unalloc171,
unalloc172,
unalloc173,
unalloc174,
unalloc175,
unalloc176,
unalloc177,
unalloc178,
unalloc179,
unalloc180,
unalloc181,
unalloc182,
unalloc183,
unalloc184,
unalloc185,
unalloc186,
unalloc187,
unalloc188,
(VoidFunc)persist_exists,
unalloc190,
unalloc191,
unalloc192,
unalloc193,
unalloc194,
unalloc195,
unalloc196,
unalloc197,
unalloc198,
unalloc199,
unalloc200,
unalloc201,
unalloc202,
unalloc203,
unalloc204,
unalloc205,
(VoidFunc)rand,
(VoidFunc)resource_get_handle_proxy,
unalloc208,
unalloc209,
unalloc210,
unalloc211,
unalloc212,
unalloc213,
unalloc214,
unalloc215,
unalloc216,
unalloc217,
unalloc218,
unalloc219,
unalloc220,
unalloc221,
unalloc222,
unalloc223,
unalloc224,
unalloc225,
unalloc226,
unalloc227,
unalloc228,
unalloc229,
unalloc230,
unalloc231,
unalloc232,
unalloc233,
unalloc234,
unalloc235,
unalloc236,
unalloc237,
unalloc238,
(VoidFunc)sin_lookup,
(VoidFunc)snprintf,                        // snprintf,
(VoidFunc)srand,                        // srand,
(VoidFunc)strcat,                        // strcat,
(VoidFunc)strcmp,                        // strcmp,
(VoidFunc)strcpy,                        // strcpy,
unalloc245,    //strftime
unalloc246,
unalloc247,
unalloc248,
unalloc249,
unalloc250,
unalloc251,
unalloc252,
unalloc253,
unalloc254,
unalloc255,
unalloc256,
unalloc257,
unalloc258,
unalloc259,
unalloc260,
unalloc261,
unalloc262,
(VoidFunc)tick_timer_service_subscribe,
unalloc264,
(VoidFunc)pbl_time_deprecated,
(VoidFunc)pbl_time_ms_deprecated,
unalloc267,
unalloc268,
unalloc269,
unalloc270,
unalloc271,
(VoidFunc)window_create,
(VoidFunc)window_destroy,
unalloc274,
unalloc275,
(VoidFunc)window_get_root_layer,
unalloc277,
unalloc278,
unalloc279,
unalloc280,
unalloc281,
unalloc282,
(VoidFunc)window_set_window_handlers,
unalloc284,
unalloc285,
unalloc286,
unalloc287,
(VoidFunc)window_stack_push,
unalloc289,
unalloc290,
unalloc291,
unalloc292,
unalloc293,
unalloc294,
unalloc295,
unalloc296,
unalloc297,
unalloc298,
unalloc299,
unalloc300,
unalloc301,
unalloc302,
unalloc303,
(VoidFunc)window_long_click_subscribe,             // UNVERIFIED
(VoidFunc)window_multi_click_subscribe,            // UNVERIFIED
(VoidFunc)window_raw_click_subscribe,              // UNVERIFIED
(VoidFunc)window_set_click_context,                // UNVERIFIED
(VoidFunc)window_single_click_subscribe,           // UNVERIFIED
(VoidFunc)window_single_repeating_click_subscribe, // UNVERIFIED
(VoidFunc)graphics_draw_text,
unalloc311,
unalloc312,
unalloc313,
unalloc314,
unalloc315,
unalloc316,
unalloc317,
unalloc318,
(VoidFunc)app_calloc,
unalloc320,
unalloc321,
unalloc322,
unalloc323,
unalloc324,
unalloc325,
unalloc326,
unalloc327,
unalloc328,
unalloc329,
unalloc330,
unalloc331,
unalloc332,
unalloc333,
unalloc334,
unalloc335,
unalloc336,
unalloc337,
unalloc338,
unalloc339,
unalloc340,
unalloc341,
unalloc342,
unalloc343,
(VoidFunc)gpath_fill_app, //unalloc344,
unalloc345,
unalloc346,
unalloc347,
unalloc348,
unalloc349,
unalloc350,
unalloc351,
unalloc352,
unalloc353,
unalloc354,
unalloc355,
unalloc356,
unalloc357,
unalloc358,
unalloc359,
unalloc360,
unalloc361,
unalloc362,
unalloc363,
unalloc364,
unalloc365,
unalloc366,
unalloc367,
unalloc368,
unalloc369,
unalloc370,
unalloc371,
(VoidFunc)graphics_context_set_fill_color,
(VoidFunc)graphics_context_set_stroke_color,
(VoidFunc)graphics_context_set_text_color,
unalloc375,
unalloc376,
unalloc377,
unalloc378,
unalloc379,
unalloc380,
(VoidFunc)animation_create, // animation_create
(VoidFunc)animation_destroy, // animation_destroy
unalloc383,
unalloc384,
(VoidFunc)animation_schedule,
unalloc386,
unalloc387,
unalloc388,
(VoidFunc)animation_set_duration,
unalloc390,
(VoidFunc)animation_set_implementation,
unalloc392,
unalloc393,
unalloc394,
unalloc395,
unalloc396,
unalloc397,
unalloc398,
unalloc399,
unalloc400,
unalloc401,
unalloc402,
unalloc403,
unalloc404,
unalloc405,
unalloc406,
unalloc407,
(VoidFunc)gbitmap_get_bounds,
(VoidFunc)gbitmap_get_bytes_per_row,
(VoidFunc)gbitmap_get_data,
unalloc411,
unalloc412,
unalloc413,
unalloc414,
unalloc415,
unalloc416,
unalloc417,
unalloc418,
unalloc419,
unalloc420,
unalloc421,
unalloc422,
unalloc423,
unalloc424,
unalloc425,
unalloc426,
unalloc427,
unalloc428,
unalloc429,
unalloc430,
unalloc431,
unalloc432,
unalloc433,
unalloc434,
unalloc435,
unalloc436,
unalloc437,
unalloc438,
unalloc439,
unalloc440,
unalloc441,
unalloc442,
unalloc443,
unalloc444,
unalloc445,
(VoidFunc)graphics_context_set_stroke_width,
unalloc447,
unalloc448,
unalloc449,
unalloc450,
unalloc451,
unalloc452,
unalloc453,
unalloc454,
unalloc455,
unalloc456,
unalloc457,
unalloc458,
unalloc459,
unalloc460,
unalloc461,
unalloc462,
(VoidFunc)text_layer_create, //unalloc463,
(VoidFunc)text_layer_destroy,                        // text_layer_destroy,
(VoidFunc)text_layer_get_content_size,                        // text_layer_get_content_size,
(VoidFunc)text_layer_get_layer,                        // text_layer_get_layer,
(VoidFunc)text_layer_get_text,                        // text_layer_get_text,
(VoidFunc)text_layer_set_background_color,                        // text_layer_set_background_color,
(VoidFunc)text_layer_set_font,                        // text_layer_set_font,
(VoidFunc)text_layer_set_overflow_mode,                        // text_layer_set_overflow_mode,
(VoidFunc)text_layer_set_size,                        // text_layer_set_size,
(VoidFunc)text_layer_set_text,                        // text_layer_set_text,
(VoidFunc)text_layer_set_text_alignment,                        // text_layer_set_text_alignment,
(VoidFunc)text_layer_set_text_color,
(VoidFunc)unalloc475,
(VoidFunc)n_gdraw_command_draw,                        // gdraw_command_draw,unalloc476,
(VoidFunc)n_gdraw_command_frame_draw,                        // gdraw_command_frame_draw,unalloc477,
(VoidFunc)n_gdraw_command_frame_get_duration,                        // gdraw_command_frame_get_duration,unalloc478,
(VoidFunc)n_gdraw_command_frame_set_duration,                        // gdraw_command_frame_set_duration,unalloc479,
(VoidFunc)n_gdraw_command_get_fill_color,                        // gdraw_command_get_fill_color,unalloc480,
(VoidFunc)n_gdraw_command_get_hidden,                        // gdraw_command_get_hidden,unalloc481,
(VoidFunc)n_gdraw_command_get_num_points,                        // gdraw_command_get_num_points,unalloc482,
(VoidFunc)n_gdraw_command_get_path_open,                        // gdraw_command_get_path_open,unalloc483,
(VoidFunc)n_gdraw_command_get_point,                        // gdraw_command_get_point,unalloc484,
(VoidFunc)n_gdraw_command_get_radius,                        // gdraw_command_get_radius,unalloc485,
(VoidFunc)n_gdraw_command_get_stroke_color,                        // gdraw_command_get_stroke_color,unalloc486,
(VoidFunc)n_gdraw_command_get_stroke_width,                        // gdraw_command_get_stroke_width,unalloc487,
(VoidFunc)n_gdraw_command_get_type,                        // gdraw_command_get_type,unalloc488,
(VoidFunc)n_gdraw_command_image_clone,                        // gdraw_command_image_clone,unalloc489,
(VoidFunc)n_gdraw_command_image_create_with_resource,                        // gdraw_command_image_create_with_resource,unalloc490,
(VoidFunc)n_gdraw_command_image_destroy,                        // gdraw_command_image_destroy,unalloc491,
(VoidFunc)n_gdraw_command_image_draw,                        // gdraw_command_image_draw,unalloc492,
(VoidFunc)n_gdraw_command_image_get_bounds_size,                        // gdraw_command_image_get_bounds_size,unalloc493,
(VoidFunc)n_gdraw_command_image_get_command_list,                        // gdraw_command_image_get_command_list,unalloc494,
(VoidFunc)n_gdraw_command_image_set_bounds_size,                        // gdraw_command_image_set_bounds_size,unalloc495,
(VoidFunc)n_gdraw_command_list_draw,                        // gdraw_command_list_draw,unalloc496,
(VoidFunc)n_gdraw_command_list_get_command,                        // gdraw_command_list_get_command,unalloc497,
(VoidFunc)n_gdraw_command_list_get_num_commands,                        // gdraw_command_list_get_num_commands,unalloc498,
(VoidFunc)n_gdraw_command_list_iterate,                        // gdraw_command_list_iterate,unalloc499,
(VoidFunc)n_gdraw_command_sequence_clone,                        // gdraw_command_sequence_clone,unalloc500,
(VoidFunc)n_gdraw_command_sequence_create_with_resource,                        // gdraw_command_sequence_create_with_resource,unalloc501,
(VoidFunc)n_gdraw_command_sequence_destroy,                        // gdraw_command_sequence_destroy,unalloc502,
(VoidFunc)n_gdraw_command_sequence_get_bounds_size,                        // gdraw_command_sequence_get_bounds_size,unalloc503,
(VoidFunc)n_gdraw_command_sequence_get_frame_by_elapsed,                        // gdraw_command_sequence_get_frame_by_elapsed,unalloc504,
(VoidFunc)n_gdraw_command_sequence_get_frame_by_index,                        // gdraw_command_sequence_get_frame_by_index,unalloc505,
(VoidFunc)n_gdraw_command_sequence_get_num_frames,                        // gdraw_command_sequence_get_num_frames,unalloc506,
(VoidFunc)n_gdraw_command_sequence_get_play_count,                        // gdraw_command_sequence_get_play_count,unalloc507,
(VoidFunc)n_gdraw_command_sequence_get_total_duration,                        // gdraw_command_sequence_get_total_duration,unalloc508,
(VoidFunc)n_gdraw_command_sequence_set_bounds_size,                        // gdraw_command_sequence_set_bounds_size,unalloc509,
(VoidFunc)n_gdraw_command_sequence_set_play_count,                        // gdraw_command_sequence_set_play_count,unalloc510,
(VoidFunc)n_gdraw_command_set_fill_color,                        // gdraw_command_set_fill_color,unalloc511,
(VoidFunc)n_gdraw_command_set_hidden,                        // gdraw_command_set_hidden,unalloc512,
(VoidFunc)n_gdraw_command_set_path_open,                        // gdraw_command_set_path_open,unalloc513,
(VoidFunc)n_gdraw_command_set_point,                        // gdraw_command_set_point,unalloc514,
(VoidFunc)n_gdraw_command_set_radius,                        // gdraw_command_set_radius,unalloc515,
(VoidFunc)n_gdraw_command_set_stroke_color,                        // gdraw_command_set_stroke_color,unalloc516,
(VoidFunc)n_gdraw_command_set_stroke_width,                        // gdraw_command_set_stroke_width,unalloc517,
unalloc518,
(VoidFunc)gpath_draw_app,
unalloc520,
unalloc521,
unalloc522,
unalloc523,
unalloc524,
unalloc525,
unalloc526,
unalloc527,
unalloc528,
unalloc529,
unalloc530,
unalloc531,
unalloc532,
unalloc533,
unalloc534,
unalloc535,
unalloc536,
unalloc537,
unalloc538,
unalloc539,
unalloc540,
unalloc541,
unalloc542,
unalloc543,
unalloc544,
unalloc545,
unalloc546,
unalloc547,
unalloc548,
unalloc549,
unalloc550,
unalloc551,
unalloc552,
unalloc553,
unalloc554,
unalloc555,
unalloc556,
unalloc557,
unalloc558,
unalloc559,
unalloc560,
unalloc561,
unalloc562,
unalloc563,
unalloc564,
unalloc565,
unalloc566,
unalloc567,
unalloc568,
unalloc569,
unalloc570,
unalloc571,
unalloc572,
unalloc573,
unalloc574,
unalloc575,
unalloc576,
unalloc577,
unalloc578,
unalloc579,
unalloc580,
unalloc581,
unalloc582,
unalloc583,
unalloc584,
unalloc585,
unalloc586,
unalloc587,
unalloc588,
unalloc589,
unalloc590,
unalloc591,
unalloc592,
(VoidFunc)layer_convert_point_to_screen,
unalloc594,
unalloc595,
unalloc596,
unalloc597,
unalloc598,
unalloc599,
unalloc600,
unalloc601,
unalloc602,
unalloc603,
unalloc604,
unalloc605,
unalloc606,
unalloc607,
unalloc608,
unalloc609,
unalloc610,
unalloc611,
unalloc612,
unalloc613,
unalloc614,
unalloc615,
unalloc616,
unalloc617,
unalloc618,
unalloc619,
unalloc620,
unalloc621,
unalloc622,
(VoidFunc)layer_get_unobstructed_bounds,
unalloc624,
unalloc625,
unalloc626,
unalloc627,
unalloc628,
unalloc629,
unalloc630,
unalloc631,
unalloc632,
unalloc633,
unalloc634,
unalloc635,
unalloc636,
unalloc637,
unalloc638,
unalloc639,
unalloc640,
unalloc641,
unalloc642,
unalloc643,
unalloc644,
unalloc645,
unalloc646,
unalloc647,
unalloc648,
unalloc649,
unalloc650,
unalloc651,
unalloc652,
unalloc653,
unalloc654,
unalloc655,
unalloc656,
unalloc657,
unalloc658,
unalloc659,
unalloc660,
unalloc661,
unalloc662,
unalloc663,
unalloc664,
unalloc665,
unalloc666,
unalloc667,
unalloc668,
unalloc669,
unalloc670,
unalloc671,
unalloc672,
unalloc673,
unalloc674,
unalloc675,
unalloc676,
unalloc677,
unalloc678,
unalloc679,
unalloc680,
unalloc681,
unalloc682,
unalloc683,
unalloc684,
unalloc685,
unalloc686,
unalloc687,
unalloc688,
unalloc689,
unalloc690,
unalloc691,
unalloc692,
unalloc693,
unalloc694,
unalloc695,
unalloc696,
unalloc697,
unalloc698,
unalloc699,
unalloc700,
};
