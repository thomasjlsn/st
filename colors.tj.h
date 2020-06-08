static const char *colorname[] = {
	/* 8 normal colors */
	"#000000", // black
	"#cc6666", // red
	"#b5bd68", // green
	"#f0c674", // yellow
	"#81a2be", // blue
	"#b294bb", // magenta
	"#8abeb7", // cyan
	"#c5c8c6", // white

	/* 8 bright colors */
	"#555555", // grey
	"#d54e53", // red
	"#b9ca4a", // green
	"#e7c547", // yellow
	"#7aa6da", // blue
	"#c397d8", // magenta
	"#70c0b1", // cyan
	"#eaeaea", // white

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
static unsigned int defaultcs = 1;
static unsigned int defaultrcs = 257;
