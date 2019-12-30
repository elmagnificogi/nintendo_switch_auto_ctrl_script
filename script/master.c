// auto get master ball
static const command step[] = {
	// Setup controller
	{ DELAY,    250 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ TRIGGERS,   5 },
	{ DELAY,      5 },
	{ DELAY,      5 },
	{ DELAY,      5 },

	// loop wat
	{ A,          5 }, // enter dialogue
	{ DELAY,     60 },	
	{ B,          5 }, // what do u want to do?
	{ DELAY,     60 },
	{ DOWN,       5 }, // select draw a lottery
	{ DELAY,      5 }, // 
	{ A,          5 }, // draw
	{ DELAY,     60 }, // wait
	{ B,          5 }, // connect id
	{ DELAY,     60 }, // wait2
	{ B,		  5 }, // if same id
	{ DELAY,	 60 }, // wait3
	{ B,		  5 }, // get reward record?
	{ DELAY,    120 }, // wait4
	{ A,		  5 }, // yes
	{ DELAY,	130 }, // wait5
	{ B,		  5 }, // record ok
	{ DELAY,	 65 }, // wait6
	{ B,		  5 }, // start draw
	{ DELAY,	 65 }, // wait7
	{ B,		  5 }, // ...
	{ DELAY,	 70 }, // wait8
	{ B,		  5 }, // the number
	{ DELAY,	 65 }, // wait9
	{ B,		  5 }, // find id
	{ DELAY,	170 }, // wait10
	{ B,		  5 }, // congratulation
	{ DELAY,	 65 }, // wait11
	{ B,		  5 }, // find someone
	{ DELAY,	 65 }, // wait12
	{ B,		  5 }, // same id
	{ DELAY,	 65 }, // wait13
	{ B,		  5 }, // id number
	{ DELAY,	 65 }, // wait14
	{ B,		  5 }, // give s
	{ DELAY,	 65 }, // wait15
	{ B,		  5 }, // reward thing
	{ DELAY,	155 }, // wait16
	{ B,		  5 }, // got it
	{ DELAY,	 65 }, // wait17
	{ B,		  5 }, // put in
	{ DELAY,	 65 }, // wait18
	{ B,		  5 }, // see you
	{ DELAY,	 65 }, // wait19


 	{ HOME, 	  5 }, // return home
	{ DELAY,	 40 }, // 
	{ DOWN, 	  5 }, // 
	{ DELAY,	  5 },
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
	{ DOWN,       5 }, // 2018 
	{ DELAY,      5 }, // 
	{ RIGHT,     25 }, // select ok 
	{ DELAY,      5 },
	{ A,          5 }, // change
	{ DELAY,     20 }, // 
	{ A,          5 }, // enter change again
	{ DELAY,     20 },
	{ LEFT,      25 }, // select year 
	{ DELAY,     20 }, // 
	{ UP,         5 }, // 2019  
	{ DELAY,      5 },
	{ RIGHT,     25 }, // select ok 
	{ DELAY,      5 }, // 
	{ A,          5 }, // complete change 
	{ DELAY,     30 },
	{ HOME,       5 }, // return home
	{ DELAY,     20 }, // 
	{ A,          5 }, // return game
	{ DELAY,     40 }	
};
