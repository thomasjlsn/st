static const char *colorname[] = {
	/* 8 normal colors */
	"#073642", // black
	"#DB322F", // A4B16
	"#849801", // green
	"#B48801", // yellow
	"#268AD1", // blue
	"#D23681", // magenta
	"#2AA097", // cyan
	"#EDE7D4", // white

	/* 8 bright colors */
	"#012B36", // grey
	"#CA4B16", // red
	"#586E74", // green
	"#657B82", // yellow
	"#829395", // blue
	"#6C71C3", // magenta
	"#92A0A0", // cyan
	"#FCF5E2", // white

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */

unsigned int defaultfg = 0;
unsigned int defaultbg = 15;
static unsigned int defaultcs = 0;
static unsigned int defaultrcs = 7;
