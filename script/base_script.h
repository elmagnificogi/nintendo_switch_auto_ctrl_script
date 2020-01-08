#ifndef _BASE_SCRIPT_H_
#define _BASE_SCRIPT_H_

typedef enum {
	UP,
	DOWN,
	LEFT,
	RIGHT,
	X,
	Y,
	A,
	B,
	L,
	R,
	plus,
	minus,
	HOME,
	CAPTURE,
	DELAY,
	TRIGGERS,
	THROW,
	RANDRU
} options;


typedef struct {
	options opt;
	uint16_t duration;
} command; 


static const command set_up_control[] = {
	// Setup controller
	{ DELAY,    500 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ DELAY,      5 },
	{ DELAY,    250 }
};



#endif
