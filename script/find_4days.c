// just jump to see 4day's pokemon
static const command step[] = {
	// Setup controller
	{ DELAY,    500 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ DELAY,      5 },
	{ DELAY,    250 },


	// first change year to 2000
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
	{ DELAY,     50 },
	{ DOWN,      50 }, // 2000 
	{ DELAY,     20 }, // 
	{ RIGHT,     25 }, // select ok 
	{ DELAY,     30 },
	{ A,          5 }, // change
	{ DELAY,     20 }, // 
	{ HOME,       5 }, // return home
	{ DELAY,     50 }, // 

	// enter game
	{ A,          5 }, // enter game
	{ DELAY,     50 },
	{ A,         10 }, // enter user
	{ DELAY,    400 }, // 
	{ TRIGGERS,   5 },
	{ DELAY,    150 },	
	{ TRIGGERS,   5 },
	{ DELAY,	150 },
	{ A,		  5 }, // game in
	{ DELAY,	500 }, // 

	// loop wat1
	{ A,          5 }, // enter cave
	{ DELAY,     80 },
	{ A,          5 }, // diague
	{ DELAY,     80 },	
	{ A,          5 }, // get 2000w
	{ DELAY,     80 },
	{ A,         10 }, // enter match
	{ DELAY,    150 }, // 
	{ HOME,       5 }, // return home
	{ DELAY,     40 }, // 
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
	{ DELAY,     50 },
	{ UP,         5 }, // 2019  
	{ DELAY,      5 },
	{ RIGHT,     25 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     30 },
	{ HOME,       5 }, // return home
	{ DELAY,     40 }, // 
	{ A,          5 }, // return game
	{ DELAY,     30 },
	{ B,          5 }, // quit?
	{ DELAY,     50 }, // 
	{ A,          5 }, // yes quit 
	{ DELAY,    150 },

	// loop wat2
	{ A,          5 }, // get wat 
	{ DELAY,     80 },
	{ A,          5 }, // quick dialogue
	{ DELAY,     80 },	
	{ A,          5 }, // got it 
	{ DELAY,     80 },
	{ A,         10 }, // enter match
	{ DELAY,    120 }, // 
	{ HOME,       5 }, // return home
	{ DELAY,     40 }, // 
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
	{ DELAY,     50 },
	{ UP,         5 }, // 2019  
	{ DELAY,      5 },
	{ RIGHT,     25 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     30 },
	{ HOME,       5 }, // return home
	{ DELAY,     40 }, // 
	{ A,          5 }, // return game
	{ DELAY,     30 },
	{ B,          5 }, // quit?
	{ DELAY,     50 }, // 
	{ A,          5 }, // yes quit 
	{ DELAY,    250 },

	// loop wat3
	{ A,          5 }, // get wat 
	{ DELAY,    100 },
	{ A,          5 }, // quick dialogue
	{ DELAY,    100 },	
	{ A,          5 }, // got it 
	{ DELAY,    100 },
	{ A,         10 }, // enter match
	{ DELAY,    120 }, // 
	{ HOME,       5 }, // return home
	{ DELAY,     40 }, // 
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
	{ DELAY,     50 },
	{ UP,         5 }, // 2019  
	{ DELAY,      5 },
	{ RIGHT,     25 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     30 },
	{ HOME,       5 }, // return home
	{ DELAY,     40 }, // 
	{ A,          5 }, // return game
	{ DELAY,     30 },
	{ B,          5 }, // quit?
	{ DELAY,     50 }, // 
	{ A,          5 }, // yes quit 
	{ DELAY,    300 },

	{ A,          5 }, // enter cave
	{ DELAY,    200 },
	{ A,          5 }, // get 2000w
	{ DELAY,    200 },
	{ A,          5 }, // confirm
	{ DELAY,   1800 },		
	
	{ HOME, 	  5 }, // return home
	{ DELAY,	 40 }, // 
	{ X, 	      5 }, // close game
	{ DELAY,	 30 },
	{ A,	     20 }, // select settings
	{ DELAY,	400 } // 	
};
