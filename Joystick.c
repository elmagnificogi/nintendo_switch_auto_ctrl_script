/*
the file is the frame of auto script
*/

#include "Joystick.h"
#include <math>

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
	RANDRD
} options;

typedef struct {
	options opt;
	uint16_t duration;
} command; 

static const command step[] = {
	// Setup controller
	{ DELAY,    500 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ TRIGGERS,   5 },
	{ DELAY,    150 },
	{ DELAY,      5 },
	{ DELAY,    250 },

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

	// share 
	{ Y,          5 }, // enter Y
	{ DELAY,     50 },
	{ plus,       5 }, // connect
	{ DELAY,   1200 }, // 
	{ A,          5 }, // confirm
	{ DELAY,    100 }, // 
	{ B,		  5 }, // return game
	{ DELAY,	 50 }, // 

	{ A,          5 }, // confirm
	{ DELAY,    800 },		

	{ plus,       5 }, // set password
	{ DELAY,	 50 }, // 
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ RANDRD,     3 }, //random opt in right and down
	{ DELAY,	  5 },
	{ A,		  5 }, // enter 1
	{ DELAY,	  5 },
	{ plus, 	  5 }, // confirm
	{ DELAY,	100 }, // 
	{ A,		  5 }, // use the password? yes
	{ DELAY,	300 },
	{ A,		  5 }, // enter match
	{ DELAY,   1800 },
	{ UP,         5 }, // 
	{ DELAY,   3000 },
	{ A,          5 }, // ready 
	{ DELAY,     50 },
	{ A,          5 }, // start
	{ DELAY,     50 },
	{ A,          5 }, // not enough?
	{ DELAY,     50 },
	{ A,          5 }, // sure to start?
	{ DELAY,     50 },
	{ A,          5 }, // yes
	{ DELAY,     50 },	
	{ A,		  5 }, // yes
	{ DELAY,   1200 },
	
	{ HOME, 	  5 }, // return home
	{ DELAY,	 40 }, // 
	{ X, 	      5 }, // close game?
	{ DELAY,	 30 },
	{ A,	     20 }, // yes
	{ DELAY,	400 } // 	
};

// Main entry point.
int main(void) {
	// We'll start by performing hardware and peripheral setup.
	SetupHardware();
	
	// We'll then enable global interrupts for our use.
	GlobalInterruptEnable();
	
	// Once that's done, we'll enter an infinite loop.
	for (;;)
	{
		// We need to run our task to process and deliver data for our IN and OUT endpoints.
		HID_Task();
		
		// We also need to run the main USB management task.
		USB_USBTask();
	}
}

// Configures hardware and peripherals, such as the USB peripherals.
void SetupHardware(void) {
	// We need to disable watchdog if enabled by bootloader/fuses.
	MCUSR &= ~(1 << WDRF);
	wdt_disable();

	// We need to disable clock division before initializing the USB hardware.
	clock_prescale_set(clock_div_1);
	// We can then initialize our hardware and peripherals, including the USB stack.

	#ifdef ALERT_WHEN_DONE
	// Both PORTD and PORTB will be used for the optional LED flashing and buzzer.
	// warning LED and Buzzer functionality enabled. All pins on both PORTB and
	// PORTD will toggle when printing is done.
		DDRD  = 0xFF; //Teensy uses PORTD
		PORTD =  0x0;
	                  //We'll just flash all pins on both ports since the UNO R3
		DDRB  = 0xFF; //uses PORTB. Micro can use either or, but both give us 2 LEDs
		PORTB =  0x0; //The ATmega328P on the UNO will be resetting, so unplug it?
	#endif
	
	// The USB stack should be initialized last.
	USB_Init();
}

// Fired to indicate that the device is enumerating.
void EVENT_USB_Device_Connect(void) {
	// We can indicate that we're enumerating here (via status LEDs, sound, etc.).
}

// Fired to indicate that the device is no longer connected to a host.
void EVENT_USB_Device_Disconnect(void) {
	// We can indicate that our device is not ready (via status LEDs, sound, etc.).
}

// Fired when the host set the current configuration of the USB device after enumeration.
void EVENT_USB_Device_ConfigurationChanged(void) {
	bool ConfigSuccess = true;

	// We setup the HID report endpoints.
	ConfigSuccess &= Endpoint_ConfigureEndpoint(JOYSTICK_OUT_EPADDR, EP_TYPE_INTERRUPT, JOYSTICK_EPSIZE, 1);
	ConfigSuccess &= Endpoint_ConfigureEndpoint(JOYSTICK_IN_EPADDR, EP_TYPE_INTERRUPT, JOYSTICK_EPSIZE, 1);

	// We can read ConfigSuccess to indicate a success or failure at this point.
}

// Process control requests sent to the device from the USB host.
void EVENT_USB_Device_ControlRequest(void) {
	// We can handle two control requests: a GetReport and a SetReport.

	// Not used here, it looks like we don't receive control request from the Switch.
}

// Process and deliver data from IN and OUT endpoints.
void HID_Task(void) {
	// If the device isn't connected and properly configured, we can't do anything here.
	if (USB_DeviceState != DEVICE_STATE_Configured)
		return;

	// We'll start with the OUT endpoint.
	Endpoint_SelectEndpoint(JOYSTICK_OUT_EPADDR);
	// We'll check to see if we received something on the OUT endpoint.
	if (Endpoint_IsOUTReceived())
	{
		// If we did, and the packet has data, we'll react to it.
		if (Endpoint_IsReadWriteAllowed())
		{
			// We'll create a place to store our data received from the host.
			USB_JoystickReport_Output_t JoystickOutputData;
			// We'll then take in that data, setting it up in our storage.
			while(Endpoint_Read_Stream_LE(&JoystickOutputData, sizeof(JoystickOutputData), NULL) != ENDPOINT_RWSTREAM_NoError);
			// At this point, we can react to this data.

			// However, since we're not doing anything with this data, we abandon it.
		}
		// Regardless of whether we reacted to the data, we acknowledge an OUT packet on this endpoint.
		Endpoint_ClearOUT();
	}

	// We'll then move on to the IN endpoint.
	Endpoint_SelectEndpoint(JOYSTICK_IN_EPADDR);
	// We first check to see if the host is ready to accept data.
	if (Endpoint_IsINReady())
	{
		// We'll create an empty report.
		USB_JoystickReport_Input_t JoystickInputData;
		// We'll then populate this report with what we want to send to the host.
		GetNextReport(&JoystickInputData);
		// Once populated, we can output this data to the host. We do this by first writing the data to the control stream.
		while(Endpoint_Write_Stream_LE(&JoystickInputData, sizeof(JoystickInputData), NULL) != ENDPOINT_RWSTREAM_NoError);
		// We then send an IN packet on this endpoint.
		Endpoint_ClearIN();
	}
}

typedef enum {
	SYNC_CONTROLLER,
	SYNC_POSITION,
	BREATHE,
	PROCESS,
	CLEANUP,
	DONE
} State_t;
State_t state = SYNC_CONTROLLER;

#define ECHOES 2
int echoes = 0;
USB_JoystickReport_Input_t last_report;

int report_count = 0;
int xpos = 0;
int ypos = 0;
int bufindex = 0;
int duration_count = 0;
int portsval = 0;
int run_times = 0;

// Prepare the next report for the host.
void GetNextReport(USB_JoystickReport_Input_t* const ReportData) {

	// Prepare an empty report
	memset(ReportData, 0, sizeof(USB_JoystickReport_Input_t));
	ReportData->LX = STICK_CENTER;
	ReportData->LY = STICK_CENTER;
	ReportData->RX = STICK_CENTER;
	ReportData->RY = STICK_CENTER;
	ReportData->HAT = HAT_CENTER;

	// Repeat ECHOES times the last report
	if (echoes > 0)
	{
		memcpy(ReportData, &last_report, sizeof(USB_JoystickReport_Input_t));
		echoes--;
		return;
	}

	// States and moves management
	switch (state)
	{

		case SYNC_CONTROLLER:
			state = BREATHE;
			break;

		case SYNC_POSITION:
			bufindex = 0;


			ReportData->Button = 0;
			ReportData->LX = STICK_CENTER;
			ReportData->LY = STICK_CENTER;
			ReportData->RX = STICK_CENTER;
			ReportData->RY = STICK_CENTER;
			ReportData->HAT = HAT_CENTER;


			state = BREATHE;
			break;

		case BREATHE:
			state = PROCESS;
			break;

		case PROCESS:

			switch (step[bufindex].opt)
			{

				case UP:
					ReportData->LY = STICK_MIN;				
					break;

				case LEFT:
					ReportData->LX = STICK_MIN;				
					break;

				case DOWN:
					ReportData->LY = STICK_MAX;				
					break;

				case RIGHT:
					ReportData->LX = STICK_MAX;				
					break;

				case A:
					ReportData->Button |= SWITCH_A;
					break;

				case B:
					ReportData->Button |= SWITCH_B;
					break;

				case X:
					ReportData->Button |= SWITCH_X;
					break;
				
				case Y:
					ReportData->Button |= SWITCH_Y;
					break;
				case L:
					ReportData->Button |= SWITCH_L;
					break;
				
				case R:
					ReportData->Button |= SWITCH_R;
					break;
				
				case plus:
					ReportData->Button |= SWITCH_PLUS;
					break;

				case minus:
					ReportData->Button |= SWITCH_MINUS;
					break;

				case HOME:
					ReportData->Button |= SWITCH_HOME;
					break;

				case THROW:
					ReportData->LY = STICK_MIN;				
					ReportData->Button |= SWITCH_R;
					break;

				case TRIGGERS:
					ReportData->Button |= SWITCH_L | SWITCH_R;
					break;
				
				case RANDRD:
					if(run_times % 2==0)
					{
						ReportData->LX = STICK_MAX;
					}
					else
					{
					
						ReportData->LY = STICK_MIN;		
					}
					break;				

				default:
					ReportData->LX = STICK_CENTER;
					ReportData->LY = STICK_CENTER;
					ReportData->RX = STICK_CENTER;
					ReportData->RY = STICK_CENTER;
					ReportData->HAT = HAT_CENTER;
					break;
			}

			duration_count++;

			if (duration_count > step[bufindex].duration)
			{
				bufindex++;
				duration_count = 0;				
			}


			if (bufindex > (int)( sizeof(step) / sizeof(step[0])) - 1)
			{

				// state = CLEANUP;
				run_times++;
				bufindex = 7;
				duration_count = 0;

				state = BREATHE;

				ReportData->LX = STICK_CENTER;
				ReportData->LY = STICK_CENTER;
				ReportData->RX = STICK_CENTER;
				ReportData->RY = STICK_CENTER;
				ReportData->HAT = HAT_CENTER;
			}

			break;

		case CLEANUP:
			state = DONE;
			break;

		case DONE:
			#ifdef ALERT_WHEN_DONE
			portsval = ~portsval;
			PORTD = portsval; //flash LED(s) and sound buzzer if attached
			PORTB = portsval;
			_delay_ms(250);
			#endif
			return;
	}

	// Prepare to echo this report
	memcpy(&last_report, ReportData, sizeof(USB_JoystickReport_Input_t));
	echoes = ECHOES;

}
