
/* Autogenerated File */
#define OUTPUT 0
#define INPUT 1
#define LOW 0
#define HIGH 1

/* fix for MCU missing PORTA (http://bugs.ethersex.de/view.php?id=166) */
#ifdef PORTA
#define PORT_CORR 0
#else
#define PORT_CORR 1
#endif

const char named_pin_text17112[] PROGMEM = "p1";
const char named_pin_text753[] PROGMEM = "p2";
const char named_pin_text29006[] PROGMEM = "p3";
const char named_pin_text22155[] PROGMEM = "p4";

const struct PinConfiguration portio_pincfg[] PROGMEM = {
    /*  port	pin	input	reverse? */
	{	0 - PORT_CORR,	0,	OUTPUT,	HIGH,	named_pin_text17112 }, 	/* p1	*/ 
	{	0 - PORT_CORR,	1,	OUTPUT,	HIGH,	named_pin_text753 }, 	/* p2	*/ 
	{	0 - PORT_CORR,	2,	OUTPUT,	HIGH,	named_pin_text29006 }, 	/* p3	*/ 
	{	0 - PORT_CORR,	3,	OUTPUT,	HIGH,	named_pin_text22155 }, 	/* p4	*/ 

    /* mark the end of the list */
    { 255, 255, 255, 255, NULL}
};
