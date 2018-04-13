#include <curses.h>
#include <ncurses.h>
int main() {
       initscr();
       start_color();
       init_pair(1,COLOR_WHITE,COLOR_RED);
       init_pair(2,COLOR_WHITE,COLOR_YELLOW);
       bkgd(COLOR_PAIR(2));
       move(15,15);
       printw("Hola linux!");
       refresh();
       getch();
       endwin();
       return 0;

}
