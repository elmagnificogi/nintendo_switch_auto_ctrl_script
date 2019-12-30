// auto change time 60times then save the game
static const command step[] = {
	// Setup controller
	{ DELAY,    500 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ TRIGGERS,   5 },
	{ DELAY,    100 },
	{ DELAY,    100 },
	{ DELAY,      5 },

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
	{ DELAY,     50 },
	{ RIGHT,	 15 }, // select day	
	{ DELAY,	  5 },
	
	{ UP,         5 }, // 1  
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     30 },

	{ A,          5 }, // 2
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 	

	{ A,          5 }, // 3
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 4
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 	

	{ A,          5 }, // 5
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 6
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 7
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 8
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 9
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 10
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 11
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 12
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 13
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 14
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 15
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 16
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 17
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 18
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 19
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 20
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 21
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 22
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 23
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 24
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 25
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 26
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 27
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 28
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 29
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 30
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 31 complete 1 month
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     15 },  // 

	{ A,          5 }, // 1
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 2
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 	

	{ A,          5 }, // 3
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 4
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 	

	{ A,          5 }, // 5
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 6
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 7
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 8
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 9
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 10
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 11
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 12
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 13
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 14
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 15
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 16
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 17
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 18
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 19
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 20
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 21
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 22
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 23
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 24
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 25
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 26
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 27
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 28
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 29
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 30
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,      8 },  // 

	{ A,          5 }, // 31 complete 1 month
	{ DELAY,      8 },
	{ LEFT,      17 }, // select day 
	{ DELAY,      5 }, // 	
	{ UP,         5 }, //   
	{ DELAY,      5 },
	{ RIGHT,     17 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     15 },  // 

	// return game for save
	{ HOME,       5 }, // return home
	{ DELAY,    100 }, // 
	{ A,          5 }, // return game
	{ DELAY,    100 },

	//get 2000 wat
	{ A,          5 }, // enter cave
	{ DELAY,    100 },
	{ A,          5 }, // diague
	{ DELAY,    100 },	
	{ A,          5 }, // get 2000w
	{ DELAY,    280 },
	{ B,          5 }, // quit
	{ DELAY,    100 },

	// save
	{ X,          5 }, // enter option
	{ DELAY,     80 },
	{ R,		  5 }, // enter save
	{ DELAY,	 80 },
	{ A,		  5 }, // save
	{ DELAY,	250 }  // 

};
