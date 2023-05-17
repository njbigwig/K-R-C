/* header file to define scope rules */
#ifndef CHAP4CALC_H
#define CHAP4CALC_H

#define NUMBER '0'   /* signal that a number was found */

void push(double f);
double pop(void);
int getop (char s[]);
int getch(void);
void ungetch(int c);

#endif