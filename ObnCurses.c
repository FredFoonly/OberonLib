
#include ".obnc/ObnCurses.h"
#include <obnc/OBNC.h>
#include <ncurses.h>

#define OBERON_SOURCE_FILENAME "ObnCurses.obn"


OBNC_LONGI int ObnCurses__ANormal_ = A_NORMAL;
OBNC_LONGI int ObnCurses__AStandout_ = A_STANDOUT;
OBNC_LONGI int ObnCurses__AUnderline_ = A_UNDERLINE;
OBNC_LONGI int ObnCurses__AReverse_ = A_REVERSE;
OBNC_LONGI int ObnCurses__ABlink_ = A_BLINK;
OBNC_LONGI int ObnCurses__ADim_ = A_DIM;
OBNC_LONGI int ObnCurses__ABold_ = A_BOLD;
OBNC_LONGI int ObnCurses__AAltCharSet_ = A_ALTCHARSET;
OBNC_LONGI int ObnCurses__AInvis_ = A_INVIS;
OBNC_LONGI int ObnCurses__AProtect_ = A_PROTECT;
OBNC_LONGI int ObnCurses__AHorizontal_ = A_HORIZONTAL;
OBNC_LONGI int ObnCurses__ALeft_ = A_LEFT;
OBNC_LONGI int ObnCurses__ALow_ = A_LOW;
OBNC_LONGI int ObnCurses__ARight_ = A_RIGHT;
OBNC_LONGI int ObnCurses__ATop_ = A_TOP;
OBNC_LONGI int ObnCurses__AVertical_ = A_VERTICAL;

OBNC_LONGI int ObnCurses__Black_ = COLOR_BLACK;
OBNC_LONGI int ObnCurses__Red_ = COLOR_RED;
OBNC_LONGI int ObnCurses__Green_ = COLOR_GREEN;
OBNC_LONGI int ObnCurses__Yellow_ = COLOR_YELLOW;
OBNC_LONGI int ObnCurses__Blue_ = COLOR_BLUE;
OBNC_LONGI int ObnCurses__Magenta_ = COLOR_MAGENTA;
OBNC_LONGI int ObnCurses__Cyan_ = COLOR_CYAN;
OBNC_LONGI int ObnCurses__White_ = COLOR_WHITE;


void ObnCurses__InitScr_(void)
{
  initscr();
}


void ObnCurses__Raw_(void)
{
  raw();
}


void ObnCurses__NoEcho_(void)
{
  noecho();
}


void ObnCurses__Keypad_(int on_)
{
  keypad(stdscr, on_);
}


int ObnCurses__HasColors_()
{
  return has_colors();
}

void ObnCurses__StartColor_()
{
  start_color();
}


void ObnCurses__InitColorPair_(unsigned char id_, unsigned char fg_, unsigned char bg_)
{
  init_pair(id_, fg_, bg_);
}

void ObnCurses__AddStr_(const char s_[], OBNC_LONGI int s_len)
{
  addnstr(s_, s_len);
}


void ObnCurses__MvAddStr_(OBNC_LONGI int row_, OBNC_LONGI int col_, const char s_[], OBNC_LONGI int s_len)
{
  mvaddnstr(row_, col_, s_, s_len);
}


void ObnCurses__AddCh_(const char c_)
{
  addch(c_);
}

void ObnCurses__MvAddCh_(OBNC_LONGI int row_, OBNC_LONGI int col_, const char c_)
{
  mvaddch(row_, col_, c_);
}


void ObnCurses__AddLn_()
{
  addch('\n');
}


void ObnCurses__AddTab_()
{
  addch('\n');
}



void ObnCurses__Refresh_(void)
{
  refresh();
}


char ObnCurses__GetCh_(void)
{
  return getch();
}



char ObnCurses__KeyF_(OBNC_LONGI int n_)
{
  return KEY_F(n_);
}


void ObnCurses__AttrSet_(OBNC_LONGI int f_)
{
  attrset(f_);
}


OBNC_LONGI int ObnCurses__Attrget_()
{
  attr_t attrs;
  short color;
  attr_get(&attrs, &color, NULL);
  return (int)attrs;
}

void ObnCurses__AttrOn_(OBNC_LONGI int f_)
{
  attron(f_);
}


void ObnCurses__AttrOff_(OBNC_LONGI int f_)
{
  attroff(f_);
}


void ObnCurses__EndWin_(void)
{
  endwin();
}


void ObnCurses__Init(void)
{
}
