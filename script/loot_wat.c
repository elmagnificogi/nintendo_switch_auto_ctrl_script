static const command step[] = {
	// Setup controller
	{ DELAY,    250 },
	{ TRIGGERS,      5 },
	{ DELAY,    150 },
	{ TRIGGERS,      5 },
	{ DELAY,    150 },
	{ A,      5 },
	{ DELAY,    250 },

	// loop wat
	{ A,          5 }, // enter cave
	{ DELAY,     30 },
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
	//{ DOWN,       5 }, // 2018 
	//{ DELAY,     20 }, // 
	//{ RIGHT,     25 }, // select ok 
	//{ DELAY,     30 },
	//{ A,          5 }, // change
	//{ DELAY,     20 }, // 
	//{ A,          5 }, // enter change again
	//{ DELAY,     30 },
	//{ LEFT,      25 }, // select year 
	//{ DELAY,     20 }, // 
	{ UP,         5 }, // 2019  
	{ DELAY,      5 },
	{ RIGHT,     25 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     30 },
	{ HOME,       5 }, // return home
	{ DELAY,     20 }, // 
	{ A,          5 }, // return game
	{ DELAY,     30 },
	{ B,          5 }, // quit?
	{ DELAY,     50 }, // 
	{ A,          5 }, // yes quit 
	{ DELAY,    100 },
	{ A,          5 }, // get wat 
	{ DELAY,     30 },
	{ A,          5 }, // quick dialogue
	{ DELAY,     50 },	
	{ A,          5 }, // got it 
	{ DELAY,     50 }
	
};
