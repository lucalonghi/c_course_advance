#include <stdio.h>
#include <stdbool.h>

#define OPAQUE 1
#define TRASPARENCY 0

#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA (BLUE | RED)
#define CYAN (BLUE | GREEN)
#define WHITE (BLUE | YELLOW)

#define SOLID 0
#define DOTTED 1
#define DASHED 2

const char * colors[8] = {"black", "red", "green", "yellow", "blue", "magenta", "cyan", "white"};

struct onscreen_box{
        unsigned int type_color: 1;
        unsigned int fill_color: 3;
        unsigned int : 4;   //padding - space unutilized - end of a byte
        bool show_border: 1;
        unsigned int border_color: 3;
        unsigned int border_style: 2;
        unsigned int : 2;   //padding - end of second byte
    };

void PrintBox(const struct onscreen_box *);

int main(){
    struct onscreen_box *pbox;
    struct onscreen_box box = {OPAQUE, YELLOW, true, GREEN, DASHED};

    pbox = &box;

    printf("Original box settings:\n");
    PrintBox(pbox);
    
    pbox->type_color = TRASPARENCY;
    pbox->fill_color = WHITE;
    pbox->border_color = MAGENTA;
    pbox->border_style = SOLID;

    printf("Modified box settings:\n");
    PrintBox(pbox);

    return 0;
}

void PrintBox(const struct onscreen_box *b){
    printf("Box is ");
    if (b->type_color == OPAQUE)
        printf("opaque\n");
    else
        printf("transparent\n");

    printf("The fill color is %s\n",colors[b->fill_color]);
    if (b->show_border)
        printf("Border shown.\n");
    else
        printf("Border not shown.\n");
    printf("The border color is %s\n",colors[b->border_color]);
    printf("The border style is ");
    if (b->border_style == SOLID)
        printf("solid\n");
    else if (b->border_style == DOTTED)
        printf("dotted\n");
    else
        printf("dashed\n");
}