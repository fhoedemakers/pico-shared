#ifndef SETTINGS
#define SETTINGS
#include "ff.h"
#include "FrensHelpers.h"
#define SETTINGSFILE "/settings.dat" // File to store settings
extern struct settings settings;

struct settings
{
    ScreenMode screenMode;
    int firstVisibleRowINDEX;
    int selectedRow;
    int horzontalScrollIndex;
    int fgcolor;
    int bgcolor;
    // int reserved[3];
    char currentDir[FF_MAX_LFN];
};
namespace Frens
{
    void savesettings();
    void loadsettings();
    void resetsettings();
}
#endif