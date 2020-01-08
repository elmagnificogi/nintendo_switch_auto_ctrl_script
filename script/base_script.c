/*
this file is a set of short script,i use them as the base of long script
*/
#include "base_script.h"

// start at main UI focus on game
const command enter_game[] = {
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
const command connet_net[] = {
	{ Y,          5 }, // enter Y
	{ DELAY,     50 },
	{ plus,       5 }, // connect
	{ DELAY,   1200 }, // 
	{ A,          5 }, // confirm
	{ DELAY,    100 }
};

// start at raid UI
const command rand_password[] = {
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
const command close_game[] = {
	{ HOME, 	  5 }, // return home
	{ DELAY,	 40 }, // 
	{ X, 	      5 }, // close game?
	{ DELAY,	 30 },
	{ A,	     20 }, // yes
	{ DELAY,	400 }  	
};


// start in game 
const command goto_time_settings[] = {
	// change time
	{ HOME,       5 }, // return home
	{ DELAY,    100 }, // 
	{ DOWN,       5 }, // 
	{ DELAY,      5 },
	{ RIGHT,     20 }, // select settings
	{ DELAY,      5 }, // 
	{ A,          5 }, // enter settings
	{ DELAY,     50 },
	{ DOWN,      70 }, // select console
	{ DELAY,      5 }, // 	
	{ RIGHT,      5 }, // move to the tab 
	{ DELAY,      5 },
	{ DOWN,      20 }, // select date and time 
	{ DELAY,      5 }, // 
	{ A,          5 }, // enter change time
	{ DELAY,     20 },
	{ DOWN,      20 }, // selec cur time 
	{ DELAY,      5 }, // 
	{ A,          5 }, // enter change
	{ DELAY,     50 }
}


// start in game 
const command change_day_first_time[] = {
	{ RIGHT,	 15 }, // select day	
	{ DELAY,	  5 },
	{ UP,         5 }, // +1  
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     30 }
}

// use for loop  start in time settings 
const command change_time[] = {
	{ A,          5 }, 
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 },
	{ UP,         5 }, // +1
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 },
	{ A,          5 }, // complete change 
	{ DELAY,      8 }
}

// start in game
const command save_game[] = {
	// save
	{ X,          5 }, // enter option
	{ DELAY,     80 },
	{ R,		  5 }, // enter save
	{ DELAY,	 80 },
	{ A,		  5 }, // save
	{ DELAY,	250 }  // 
};

// start in time settings year back
static const command time_back[] = {
	// first change year to 2000	
	{ A,          5 }, // enter change
	{ DELAY,      8 },
	{ DOWN,      50 }, // down to 2000,mabey not enough 
	{ DELAY,     20 }, // 
	{ RIGHT,     25 }, // select ok 
	{ DELAY,     30 },
	{ A,          5 }, // change
	{ DELAY,     20 } 
}

// start in game front cave and wihtout getting 2000wat
static const command get_wat_enter_match[] = {
	// loop wat
	{ A,          5 }, // get wat 
	{ DELAY,     80 },
	{ A,          5 }, // quick dialogue
	{ DELAY,     80 },	
	{ A,          5 }, // got it 
	{ DELAY,     80 },
	{ A,         10 }, // enter match
	{ DELAY,    120 }
};

// start in game front cave and wihtout getting 2000wat
static const command get_wat_enter_match[] = {
	// loop wat
	{ B,          5 }, // quit?
	{ DELAY,     50 }, // 
	{ A,          5 }, // yes quit 
	{ DELAY,    300 }
};




