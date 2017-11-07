#include<allegro.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"pegs.h"

#define WHITE makecol(255,255,255)
#define RED makecol(255,0,0)
#define BLUE makecol(0,0,255)
#define GREEN makecol(0,255,0)
#define ORANGE makecol(255,165,0)
#define YELLOW makecol(255,255,0)

void init();
void deinit();

using namespace std;

int main() {
	init();
	
	pegs p;
	
	
	while (!key[KEY_ESC]) {
		
		BITMAP *buffer = create_bitmap(900,900);
		int y1 = 200;
		int y2 = 100;
		int x1 = 100;
		int x2 = 300;
		
		
		int x3 = 350;
		int x4 = 550;
		
		int x5 = 600;
		int x6 = 800;
		
		/*
		int pegy = 200;
		int p1x = 200;
		int p2x = 500;
		int p3x = 800;
		
		BITMAP *buffer = create_bitmap(900,900);
		BITMAP *peg1 = NULL;
    	BITMAP *peg2 = NULL;
    	BITMAP *peg3 = NULL;
    	BITMAP *ring1 = NULL;
    	BITMAP *ring2 = NULL; 
    	BITMAP *ring3 = NULL;
    	BITMAP *ring4 = NULL;
    	BITMAP *ring5 = NULL;
    	
    	
		show_mouse(screen);
         
    	//load bitmaps of pictures into the program
    	peg1 = load_bitmap("peg1.bmp", NULL);
    	peg2 = load_bitmap("peg2.bmp", NULL);
    	peg3 = load_bitmap("peg3.bmp", NULL); 
    	ring1 = load_bitmap("ring1.bmp", NULL);
    	ring2 = load_bitmap("ring2.bmp", NULL);
    	ring3 = load_bitmap("ring3.bmp", NULL);
    	ring4 = load_bitmap("ring4.bmp", NULL);
    	ring5 = load_bitmap("ring5.bmp", NULL);
           
    	//draws the bitmaps onto the screen
    	draw_sprite(screen, peg1, p1x, 200);
    	draw_sprite(screen, peg2, p2x, 200);
    	draw_sprite(screen, peg3, p3x, 200);
    	draw_sprite(screen, ring1, 200, 300);
    	draw_sprite(screen, ring2, 200, 400);
    	draw_sprite(screen, ring3, 200, 500);
    	draw_sprite(screen, ring4, 200, 600);
    	draw_sprite(screen, ring5, 200, 700);
           
    	blit(peg1, screen, 0,0,p1x,200, 900, 900);
    	blit(peg2, screen, 0,0,p2x,200, 900, 900);
    	blit(peg3, screen, 0,0,p3x,200, 900, 900);  
    	blit(ring1, screen, 0,0,200,300, 900, 900);
    	blit(ring2, screen, 0,0,200,400, 900, 900);
    	blit(ring3, screen, 0,0,200,500, 900, 900);
    	blit(ring4, screen, 0,0,200,600, 900, 900);
    	blit(ring5, screen, 0,0,200,700, 900, 900);
    	*/
    	
    	rectfill(screen, x1, y1, x2, y2, RED);
    	rectfill(screen, x3, y1, x4, y2, RED);
    	rectfill(screen, x5, y1, x6, y2, RED);
    	
    	rectfill(screen, 170, 700, 230, 200, BLUE);
    	rectfill(screen, 420, 700, 480, 200, BLUE);
    	rectfill(screen, 670, 700, 730, 200, BLUE);
	}

	deinit();
	return 0;
}
END_OF_MAIN()




void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
