#ifndef _TOKEN_H
#define _TOKEN_H

typedef enum {
	MD_PARAGRAPH,

	MD_HEAD1,
	MD_HEAD2,
	MD_HEAD3,
	MD_HEAD4,
	MD_HEAD5,
	MD_HEAD6,
	MD_ITALICS,
	MD_BOLD,
	MD_STRIKETHROUGH,
	MD_LINEBREAK,
	MD_QUOTE,
	MD_INDENT,
	MD_UNOLIST,
	MD_ORLIST,
	MD_HRLINE,

	MD_LINK,
	MD_RFLINK,
	MD_BACKLINK,
	MD_SHORTLINK,
	MD_IMGLINK,

	MD_CODE,
	MD_ILLEGAL,
} token;

typedef struct {
	token type;
	char* literal;
} tokentype;

#endif // _TOKEN_H
