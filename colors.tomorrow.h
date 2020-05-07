static const char *colorname[] = {
	/* 8 normal colors */
	"#000000", // black
	"#D54E53", // red
	"#B9CA4A", // green
	"#E6C547", // yellow
	"#7AA6DA", // blue
	"#C397D8", // magenta
	"#70C0BA", // cyan
	"#EAEAEA", // white

	/* 8 bright colors */
	"#585858", // grey
	"#FF3334", // red
	"#9EC400", // green
	"#E7C547", // yellow
	"#7AA6DA", // blue
	"#B77EE0", // magenta
	"#54CED6", // cyan
	"#FFFFFF", // white

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */

unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
