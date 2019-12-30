/*
this file is a set of short script,i use them as the base of long script
*/
#include "base_script.h"


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

// start at main UI focus on game
static const command enter_game[] = {
	// enter game
	{ A,          5 }, // enter game
	{ DELAY,     50 },
	{ A,         10 }, // enter user
	{ DELAY,    400 }, // 
	{ TRIGGERS,   5 }, // set up controller
	{ DELAY,    150 },	
	{ TRIGGERS,   5 },
	{ DELAY,	150 },
	{ A,		  5 }, // game in
	{ DELAY,	500 } 
};


// start at game ui main
static const command connet_net[] = {
	{ Y,          5 }, // enter Y
	{ DELAY,     50 },
	{ plus,       5 }, // connect
	{ DELAY,   1200 }, // 
	{ A,          5 }, // confirm
	{ DELAY,    100 }
};

// start at raid UI
static const command rand_password[] = {
	{ plus,       5 }, // set password
	{ DELAY,	 50 }, // 
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ RANDRD,     3 }, //random opt in right and down so its 1111 or 1112
	{ DELAY,	  5 },
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ plus, 	  5 }, // confirm
	{ DELAY,	100 }, // 
	{ A,		  5 }, // use the password? yes
	{ DELAY,	300 }
};


// start at in game
static const command close_game[] = {
	{ HOME, 	  5 }, // return home
	{ DELAY,	 40 }, // 
	{ X, 	      5 }, // close game?
	{ DELAY,	 30 },
	{ A,	     20 }, // yes
	{ DELAY,	400 }  	
};

