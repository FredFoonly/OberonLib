
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
OBNC_LONGI int ObnCurses__AItalic_ = A_ITALIC;

OBNC_LONGI int ObnCurses__Black_ = COLOR_BLACK;
OBNC_LONGI int ObnCurses__Red_ = COLOR_RED;
OBNC_LONGI int ObnCurses__Green_ = COLOR_GREEN;
OBNC_LONGI int ObnCurses__Yellow_ = COLOR_YELLOW;
OBNC_LONGI int ObnCurses__Blue_ = COLOR_BLUE;
OBNC_LONGI int ObnCurses__Magenta_ = COLOR_MAGENTA;
OBNC_LONGI int ObnCurses__Cyan_ = COLOR_CYAN;
OBNC_LONGI int ObnCurses__White_ = COLOR_WHITE;




OBNC_LONGI int ObnCurses__KeyUp = KEY_UP;
OBNC_LONGI int ObnCurses__KeyLeft_ = KEY_LEFT;
OBNC_LONGI int ObnCurses__KeyRight_ = KEY_RIGHT;
OBNC_LONGI int ObnCurses__KeyHome_ = KEY_HOME;
OBNC_LONGI int ObnCurses__KeyBackspace_ = KEY_BACKSPACE;
OBNC_LONGI int ObnCurses__KeyF0_ = KEY_F0;
OBNC_LONGI int ObnCurses__KeyDl_ = KEY_DL;
OBNC_LONGI int ObnCurses__KeyIl_ = KEY_IL;
OBNC_LONGI int ObnCurses__KeyDc_ = KEY_DC;
OBNC_LONGI int ObnCurses__KeyIc_ = KEY_IC;
OBNC_LONGI int ObnCurses__KeyEic_ = KEY_EIC;
OBNC_LONGI int ObnCurses__KeyClear_ = KEY_CLEAR;
OBNC_LONGI int ObnCurses__KeyEos_ = KEY_EOS;
OBNC_LONGI int ObnCurses__KeyEol_ = KEY_EOL;
OBNC_LONGI int ObnCurses__KeySf_ = KEY_SF;
OBNC_LONGI int ObnCurses__KeySr_ = KEY_SR;
OBNC_LONGI int ObnCurses__KeyNpage_ = KEY_NPAGE;
OBNC_LONGI int ObnCurses__KeyPpage_ = KEY_PPAGE;
OBNC_LONGI int ObnCurses__KeyStab_ = KEY_STAB;
OBNC_LONGI int ObnCurses__KeyCtab_ = KEY_CTAB;
OBNC_LONGI int ObnCurses__KeyCatab_ = KEY_CATAB;
OBNC_LONGI int ObnCurses__KeyEnter_ = KEY_ENTER;
OBNC_LONGI int ObnCurses__KeyPrint_ = KEY_PRINT;
OBNC_LONGI int ObnCurses__KeyLl_ = KEY_LL;
OBNC_LONGI int ObnCurses__KeyA1_ = KEY_A1;
OBNC_LONGI int ObnCurses__KeyA3_ = KEY_A3;
OBNC_LONGI int ObnCurses__KeyB2_ = KEY_B2;
OBNC_LONGI int ObnCurses__KeyC1_ = KEY_C1;
OBNC_LONGI int ObnCurses__KeyC3_ = KEY_C3;
OBNC_LONGI int ObnCurses__KeyBtab_ = KEY_BTAB;
OBNC_LONGI int ObnCurses__KeyBeg_ = KEY_BEG;
OBNC_LONGI int ObnCurses__KeyCancel_ = KEY_CANCEL;
OBNC_LONGI int ObnCurses__KeyClose_ = KEY_CLOSE;
OBNC_LONGI int ObnCurses__KeyCommand_ = KEY_COMMAND;
OBNC_LONGI int ObnCurses__KeyCopy_ = KEY_COPY;
OBNC_LONGI int ObnCurses__KeyCreate_ = KEY_CREATE;
OBNC_LONGI int ObnCurses__KeyEnd_ = KEY_END;
OBNC_LONGI int ObnCurses__KeyExit_ = KEY_EXIT;
OBNC_LONGI int ObnCurses__KeyFind_ = KEY_FIND;
OBNC_LONGI int ObnCurses__KeyHelp_ = KEY_HELP;
OBNC_LONGI int ObnCurses__KeyMark_ = KEY_MARK;
OBNC_LONGI int ObnCurses__KeyMessage_ = KEY_MESSAGE;
OBNC_LONGI int ObnCurses__KeyMove_ = KEY_MOVE;
OBNC_LONGI int ObnCurses__KeyNext_ = KEY_NEXT;
OBNC_LONGI int ObnCurses__KeyOpen_ = KEY_OPEN;
OBNC_LONGI int ObnCurses__KeyOptions_ = KEY_OPTIONS;
OBNC_LONGI int ObnCurses__KeyPrevious_ = KEY_PREVIOUS;
OBNC_LONGI int ObnCurses__KeyRedo_ = KEY_REDO;
OBNC_LONGI int ObnCurses__KeyReference_ = KEY_REFERENCE;
OBNC_LONGI int ObnCurses__KeyRefresh_ = KEY_REFRESH;
OBNC_LONGI int ObnCurses__KeyReplace_ = KEY_REPLACE;
OBNC_LONGI int ObnCurses__KeyRestart_ = KEY_RESTART;
OBNC_LONGI int ObnCurses__KeyResume_ = KEY_RESUME;
OBNC_LONGI int ObnCurses__KeySave_ = KEY_SAVE;
OBNC_LONGI int ObnCurses__KeySbeg_ = KEY_SBEG;
OBNC_LONGI int ObnCurses__KeyScancel_ = KEY_SCANCEL;
OBNC_LONGI int ObnCurses__KeyScommand_ = KEY_SCOMMAND;
OBNC_LONGI int ObnCurses__KeyScopy_ = KEY_SCOPY;
OBNC_LONGI int ObnCurses__KeyScreate_ = KEY_SCREATE;
OBNC_LONGI int ObnCurses__KeySdc_ = KEY_SDC;
OBNC_LONGI int ObnCurses__KeySdl_ = KEY_SDL;
OBNC_LONGI int ObnCurses__KeySelect_ = KEY_SELECT;
OBNC_LONGI int ObnCurses__KeySend_ = KEY_SEND;
OBNC_LONGI int ObnCurses__KeySeol_ = KEY_SEOL;
OBNC_LONGI int ObnCurses__KeySexit_ = KEY_SEXIT;
OBNC_LONGI int ObnCurses__KeySfind_ = KEY_SFIND;
OBNC_LONGI int ObnCurses__KeyShelp_ = KEY_SHELP;
OBNC_LONGI int ObnCurses__KeyShome_ = KEY_SHOME;
OBNC_LONGI int ObnCurses__KeySic_ = KEY_SIC;
OBNC_LONGI int ObnCurses__KeySleft_ = KEY_SLEFT;
OBNC_LONGI int ObnCurses__KeySmessage_ = KEY_SMESSAGE;
OBNC_LONGI int ObnCurses__KeySmove_ = KEY_SMOVE;
OBNC_LONGI int ObnCurses__KeySnext_ = KEY_SNEXT;
OBNC_LONGI int ObnCurses__KeySoptions_ = KEY_SOPTIONS;
OBNC_LONGI int ObnCurses__KeySprevious_ = KEY_SPREVIOUS;
OBNC_LONGI int ObnCurses__KeySprint_ = KEY_SPRINT;
OBNC_LONGI int ObnCurses__KeySredo_ = KEY_SREDO;
OBNC_LONGI int ObnCurses__KeySreplace_ = KEY_SREPLACE;
OBNC_LONGI int ObnCurses__KeySright_ = KEY_SRIGHT;
OBNC_LONGI int ObnCurses__KeySrsume_ = KEY_SRSUME;
OBNC_LONGI int ObnCurses__KeySsave_ = KEY_SSAVE;
OBNC_LONGI int ObnCurses__KeySsuspend_ = KEY_SSUSPEND;
OBNC_LONGI int ObnCurses__KeySundo_ = KEY_SUNDO;
OBNC_LONGI int ObnCurses__KeySuspend_ = KEY_SUSPEND;
OBNC_LONGI int ObnCurses__KeyUndo_ = KEY_UNDO;
OBNC_LONGI int ObnCurses__KeyMouse_ = KEY_MOUSE;
OBNC_LONGI int ObnCurses__KeyResize_ = KEY_RESIZE;
OBNC_LONGI int ObnCurses__KeyEvent_ = KEY_EVENT;


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


void ObnCurses__InitColorPair_(OBNC_LONGI int id_, unsigned char fg_, unsigned char bg_)
{
  init_pair(id_, fg_, bg_);
}


OBNC_LONGI int ObnCurses__ColorPair_(OBNC_LONGI int id_)
{
  return COLOR_PAIR(id_);
}


void ObnCurses__Refresh_(void)
{
  refresh();
}


OBNC_LONGI int ObnCurses__Ch_(char c_)
{
  return (OBNC_LONGI int)c_;
}  


OBNC_LONGI int ObnCurses__ChAttr_(char c_, OBNC_LONGI int attr_, OBNC_LONGI int color_)
{
  return (OBNC_LONGI int) (((chtype)c_) | attr_ | color_);
}  


char ObnCurses__Char_(OBNC_LONGI int c_)
{
  return (char)(c_ & A_CHARTEXT);
}  


OBNC_LONGI int ObnCurses__Attr(OBNC_LONGI int c_)
{
  return (char)(c_ & A_ATTRIBUTES);
}


OBNC_LONGI int ObnCurses__Color(OBNC_LONGI int c_)
{
  return (char)(c_ & A_COLOR);
}  


OBNC_LONGI int ObnCurses__GetKey_(void)
{
  return getch();
}



OBNC_LONGI int ObnCurses__KeyF_(OBNC_LONGI int n_)
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
