#if defined(CONFIG_MACH_QUATTRO)
#include <Quattro-headset.c>
#elif defined(CONFIG_MACH_RANT3)
#include <Rant3-headset.c>
#elif defined(CONFIG_MACH_VINO)
#include <Vino-headset.c>
#elif defined(CONFIG_MACH_MARZO)
#include <Marzo-headset.c>
#elif defined(CONFIG_MACH_REALITY2)
#include <Reality2-headset.c>
#elif defined(CONFIG_MACH_ROOKIE) || defined(CONFIG_MACH_GIO)
#include <Rookie-headset.c>
#elif defined(CONFIG_MACH_ESCAPE)
#include <Escape-headset.c>
#elif defined(CONFIG_MACH_CHIEF)
#include <Chief-headset.c>
#endif
