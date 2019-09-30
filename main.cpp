#include <ncurses.h>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  initscr(); // Initialize ncurses
  raw(); // Do not hold keyboard input in buffer (no CTL-C to quit)
  noecho(); // Do not print keyboard input unless instructed to
  keypad(stdscr, true); // allows the use of arrow keys, function keys
  clear(); // clear up the screen before we start


  /* The main components I want to include are
   * - Weather
   * - Current music playing
   * - ToDo list
   * - Calendar/appointment list
   * - RSS reader
   * - IRC channel watcher
   * - Neomutt email tracker
   * - rtorrent tracker?
   */


  /* This is just an experiment to learn how to work with ncurses. */

  printw("Type character to see it in bold\n");
  int ch = getch();
  if(ch==KEY_F(1))
    printw("F1 Key pressed");

  else
  {
    printw("The pressed key is ");
    attron(A_BOLD);
    printw("%c",ch);
    attroff(A_BOLD);
  }
  refresh();
  getch();






  // Close ncurses
  endwin();
  return 0;
}
