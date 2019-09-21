
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


void ObnCursesScr__AddCh_(OBNC_LONGI int c_)
{
  addch((chtype)c_);
}

void ObnCursesScr__MvAddCh_(OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int c_)
{
  mvaddch(row_, col_, (chtype)c_);
}


void ObnCursesScr__Sp_()
{
  addch(' ');
}

void ObnCursesScr__Ln_()
{
  addch('\n');
}


void ObnCursesScr__Tab_()
{
  addch('\t');
}


void ObnCursesScr__ClrToEol_()
{
  clrtoeol();
}


void ObnCursesScr__GetYX_(OBNC_LONGI int *row_, OBNC_LONGI int* col_)
{
  getyx(stdscr, *row_, *col_);
}

void ObnCursesScr__GetBegYX_(OBNC_LONGI int *row_, OBNC_LONGI int* col_)
{
  getbegyx(stdscr, *row_, *col_);
}

void ObnCursesScr__GetMaxYX_(OBNC_LONGI int *row_, OBNC_LONGI int* col_)
{
  getmaxyx(stdscr, *row_, *col_);
}

void ObnCursesScr__Move_(OBNC_LONGI int row_, OBNC_LONGI int col_)
{
  move(row_, col_);
}

void ObnCursesScr__Refresh_()
{
  refresh();
}

void ObnCursesScr__Redraw_()
{
  redrawwin(stdscr);
}

void ObnCursesScr__RedrawLn_(OBNC_LONGI int firstLine_, OBNC_LONGI int numLines_)
{
  wredrawln(stdscr, firstLine_, numLines_);
}

void ObnCursesScr__MvHLine_(OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  mvhline(row_, col_, (chtype)c_, n_);
}

void ObnCursesScr__HLine_(OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  hline((chtype)c_, n_);
}

void ObnCursesScr__MvVLine_(OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  mvvline(row_, col_, (chtype)c_, n_);
}

void ObnCursesScr__VLine_(OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  vline((chtype)c_, n_);
}

void ObnCursesScr__Box_(OBNC_LONGI int v_, OBNC_LONGI int h_)
{
  box(stdscr, (chtype)v_, (chtype)h_);
}

void ObnCursesScr__Border_(OBNC_LONGI int l_, OBNC_LONGI int r_, OBNC_LONGI int t_, OBNC_LONGI int b_, OBNC_LONGI int tl_, OBNC_LONGI int tr_, OBNC_LONGI int bl_, OBNC_LONGI int br_)
{
  border((chtype)l_, (chtype)r_, (chtype)t_, (chtype)b_, (chtype)tl_, (chtype)tr_, (chtype)bl_, (chtype)br_);
}

void ObnCursesScr__ChgAt_(OBNC_LONGI int n_, OBNC_LONGI int attr_, unsigned char color_)
{
  chgat(n_, (attr_t)attr_, color_, NULL);
}

void ObnCursesScr__MvChgAt_(OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int n_, OBNC_LONGI int attr_, unsigned char color_)
{
  mvchgat(row_, col_, n_, (attr_t)attr_, color_, NULL);
}

void ObnCursesScr__Clear_()
{
  clear();
}



void ObnCursesScr__Init(void)
{
}
