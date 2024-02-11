

#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap( const Rect* t, const Rect* s){
    
    double x_left,y_top;
    if(t->x<=s->x) x_left=s->x;
    else         x_left=t->x;
    if(t->y<=s->y) y_top=t->y;
    else         y_top=s->y;
    
    double x_right,y_bottom;
    if(t->x+t->w <= s->x+s->w) x_right=t->x+t->w;
    else                       x_right=s->x+s->w;
    if(t->y-t->h <= s->y-s->h) y_bottom=s->y-s->h;
    else                       y_bottom=t->y-t->h;
    
    double height = y_top   - y_bottom ;
    double wide   = x_right - x_left;
    
    if(height > 0 and wide >0) return height * wide;
    else         return 0;

}
