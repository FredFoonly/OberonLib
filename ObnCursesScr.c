
#include ".obnc/ObnCursesScr.h"
#include <obnc/OBNC.h>
#include <ncurses.h>

#define OBERON_SOURCE_FILENAME "ObnCursesScr.obn"



void ObnCursesScr__AddStr_(const char s_[], OBNC_LONGI int s_len)
{
  addnstr(s_, s_len);
}


void ObnCursesScr__MvAddStr_(OBNC_LONGI int row_, OBNC_LONGI int col_, const char s_[], OBNC_LONGI int s_len)
{
  mvaddnstr(row_, col_, s_, s_len);
}


void ObnCursesScr__AddCh_(const char c_)
{
  addch(c_);
}

void ObnCursesScr__MvAddCh_(OBNC_LONGI int row_, OBNC_LONGI int col_, const char c_)
{
  mvaddch(row_, col_, c_);
}


void ObnCursesScr__AddLn_()
{
  addch('\n');
}


void ObnCursesScr__AddTab_()
{
  addch('\n');
}


void ObnCursesScr__Init(void)
{
}
