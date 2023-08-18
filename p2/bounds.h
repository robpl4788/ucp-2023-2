#ifndef BOUNDS_H
#define BOUNDS_H

#define BETWEEN(min, max, value) ((min) <= (value) && (value) <= (max))

int boundsInt(int min, int max, int value);
int boundsDouble(double min, double max, double value);
int boundsChar(char min, char max, char value);


#endif