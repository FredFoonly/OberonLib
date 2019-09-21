#include ".obnc/ObnCursesWin.h"
#include <obnc/OBNC.h>
#include <ncurses.h>

#define OBERON_SOURCE_FILENAME "ObnCursesWin.obn"

const int ObnCursesWin__WindowDesc_id;
const int *const ObnCursesWin__WindowDesc_ids[1] = {&ObnCursesWin__WindowDesc_id};
const OBNC_Td ObnCursesWin__WindowDesc_td = {ObnCursesWin__WindowDesc_ids, 1};

ObnCursesWin__Window_ ObnCursesWin__OpenWin_(OBNC_LONGI int lines_, OBNC_LONGI int cols_, OBNC_LONGI int y_, OBNC_LONGI int x_)
{
  return (ObnCursesWin__Window_)newwin(lines_, cols_, y_, x_);;
}


void ObnCursesWin__CloseWin_(ObnCursesWin__Window_ W_)
{
  delwin((WINDOW*)W_);
}


void ObnCursesWin__MoveWin_(ObnCursesWin__Window_ W_, OBNC_LONGI int row_, OBNC_LONGI int col_)
{
  mvwin((WINDOW*)W_, row_, col_);
}


void ObnCursesWin__AddStr_(ObnCursesWin__Window_ W_, const char s_[], OBNC_LONGI int s_len)
{
  waddnstr((WINDOW*)W_, s_, s_len);
}


void ObnCursesWin__MvAddStr_(ObnCursesWin__Window_ W_, OBNC_LONGI int row_, OBNC_LONGI int col_, const char s_[], OBNC_LONGI int s_len)
{
  mvwaddnstr((WINDOW*)W_, row_, col_, s_, s_len);
}


void ObnCursesWin__AddCh_(ObnCursesWin__Window_ W_, OBNC_LONGI int c_)
{
  waddch((WINDOW*)W_, (chtype)c_);
}


void ObnCursesWin__MvAddCh_(ObnCursesWin__Window_ W_, OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int c_)
{
  mvwaddch((WINDOW*)W_, row_, col_, (chtype)c_);
}


void ObnCursesWin__AddLn_(ObnCursesWin__Window_ W_)
{
  waddch((WINDOW*)W_, '\n');
}


void ObnCursesWin__AddTab_(ObnCursesWin__Window_ W_)
{
  waddch((WINDOW*)W_, '\t');
}


void ObnCursesWin__ClrToEol_(ObnCursesWin__Window_ W_)
{
  wclrtoeol((WINDOW*)W_);
}


void ObnCursesWin__GetYX_(ObnCursesWin__Window_ W_, OBNC_LONGI int *row_, OBNC_LONGI int *col_)
{
  getyx((WINDOW*)W_, *row_, *col_);
}


void ObnCursesWin__GetBegYX_(ObnCursesWin__Window_ W_, OBNC_LONGI int *row_, OBNC_LONGI int *col_)
{
  getbegyx((WINDOW*)W_, *row_, *col_);
}


void ObnCursesWin__GetMaxYX_(ObnCursesWin__Window_ W_, OBNC_LONGI int *row_, OBNC_LONGI int *col_)
{
  getmaxyx((WINDOW*)W_, *row_, *col_);
}


void ObnCursesWin__Move_(ObnCursesWin__Window_ W_, OBNC_LONGI int row_, OBNC_LONGI int col_)
{
  wmove((WINDOW*)W_, row_, col_);
}


void ObnCursesWin__Refresh_(ObnCursesWin__Window_ W_)
{
  wrefresh((WINDOW*)W_);
}

void ObnCursesWin__Redraw_(ObnCursesWin__Window_ W_)
{
  redrawwin((WINDOW*)W_);
}

void ObnCursesWin__RedrawLn_(ObnCursesWin__Window_ W_, OBNC_LONGI int firstLine_, OBNC_LONGI int numLines_)
{
  wredrawln((WINDOW*)W_, firstLine_, numLines_);
}

void ObnCursesWin__MvHLine_(ObnCursesWin__Window_ W_, OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  mvwhline((WINDOW*)W_, row_, col_, (chtype)c_, n_);
}


void ObnCursesWin__HLine_(ObnCursesWin__Window_ W_, OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  whline((WINDOW*)W_, (chtype)c_, n_);
}


void ObnCursesWin__MvVLine_(ObnCursesWin__Window_ W_, OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  mvwvline((WINDOW*)W_, row_, col_, (chtype)c_, n_);
}


void ObnCursesWin__VLine_(ObnCursesWin__Window_ W_, OBNC_LONGI int c_, OBNC_LONGI int n_)
{
  wvline((WINDOW*)W_, (chtype)c_, n_);
}


void ObnCursesWin__SetBorder_(ObnCursesWin__Window_ W_, OBNC_LONGI int l_, OBNC_LONGI int r_, OBNC_LONGI int t_, OBNC_LONGI int b_, OBNC_LONGI int tl_, OBNC_LONGI int tr_, OBNC_LONGI int bl_, OBNC_LONGI int br_)
{
  wborder((WINDOW*)W_, (chtype)l_, (chtype)r_, (chtype)t_, (chtype)b_, (chtype)tl_, (chtype)tr_, (chtype)bl_, (chtype)br_);
}

void ObnCursesWin__BorderSet_(ObnCursesWin__Window_ W_, OBNC_LONGI int l_, OBNC_LONGI int r_, OBNC_LONGI int t_, OBNC_LONGI int b_, OBNC_LONGI int tl_, OBNC_LONGI int tr_, OBNC_LONGI int bl_, OBNC_LONGI int br_)
{
  wborder((WINDOW*)W_, (chtype)l_, (chtype)r_, (chtype)t_, (chtype)b_, (chtype)tl_, (chtype)tr_, (chtype)bl_, (chtype)br_);
}


void ObnCursesWin__ChgAt_(ObnCursesWin__Window_ W_, OBNC_LONGI int n_, OBNC_LONGI int attr_, unsigned char color_)
{
  wchgat((WINDOW*)W_, n_, (attr_t)attr_, color_, NULL);
}


void ObnCursesWin__MvChgAt_(ObnCursesWin__Window_ W_, OBNC_LONGI int row_, OBNC_LONGI int col_, OBNC_LONGI int n_, OBNC_LONGI int attr_, unsigned char color_)
{
  mvwchgat((WINDOW*)W_, row_, col_, n_, (attr_t)attr_, color_, NULL);
}


void ObnCursesWin__Clear_(ObnCursesWin__Window_ W_)
{
  wclear((WINDOW*)W_);
}



void ObnCursesWin__Init(void)
{
}
