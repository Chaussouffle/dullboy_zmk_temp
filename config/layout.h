#pragma once

/* =========================
 * ISO CH (Swiss) — ZMK defines
 * (OS layout: ISO CH)
 * ========================= */

#define CH_SECT GRAVE        /* § */
#define CH_DEG  LS(GRAVE)    /* ° */

/* ---- Shifted digits (ISO CH outputs) ---- */
#define CH_PLUS LS(N1)       /* + */
#define CH_DQUO LS(N2)       /* " */
#define CH_AST  LS(N3)       /* * */
#define CH_CCED LS(N4)       /* ç */
#define CH_PCT  LS(N5)       /* % */
#define CH_AMPR LS(N6)       /* & */
#define CH_SLSH LS(N7)       /* / */
#define CH_LPAR LS(N8)       /* ( */
#define CH_RPAR LS(N9)       /* ) */
#define CH_EQL  LS(N0)       /* = */

/* ---- AltGr on digits (ISO CH outputs) ---- */
#define CH_BRKP RA(N1)       /* ¦ */
#define CH_AT RA(N2)       /* @ */
#define CH_HASH  RA(N3)       /* # (selon ta table) */
#define CH_DEG4 RA(N4)       /* ° */
#define CH_SECT5 RA(N5)      /* § */
#define CH_NOT  RA(N6)       /* ¬ */
#define CH_PIPE RA(N7)       /* | */
#define CH_CENT RA(N8)       /* ¢ */

/* ---- Minus / Equal physical keys ---- */
#define CH_APOS MINUS        /* ' */
#define CH_QUES LS(MINUS)    /* ? */
#define CH_DACU RA(MINUS)    /* dead ´ */

#define CH_DCIR EQUAL        /* dead ^ */
#define CH_DGRV LS(EQUAL)    /* dead ` */
#define CH_DTLD RA(EQUAL)    /* dead ~ */

#define CH_Y Z   /* ISO CH: y */
#define CH_Z Y   /* ISO CH: z */

/* ---- Brackets block (ISO CH outputs) ---- */
#define CH_EGRV LEFT_BRACKET     /* è */
#define CH_EAC  SEMICOLON        /* é */
#define CH_UDI  LS(LEFT_BRACKET) /* ü */
#define CH_LBRK RA(LEFT_BRACKET) /* [ */

#define CH_DDIA RIGHT_BRACKET    /* dead ¨ */
#define CH_EXCL LS(RIGHT_BRACKET)/* ! */
#define CH_RBRK RA(RIGHT_BRACKET)/* ] */

/* ---- Home row punctuation (ISO CH outputs) ---- */
#define CH_ODI  LS(SEMICOLON)    /* ö */
/* RA(SEMICOLON) n’existe pas selon ta règle -> pas défini */

#define CH_AGRV APOSTROPHE       /* à */
#define CH_ADI  LS(APOSTROPHE)   /* ä */
#define CH_LCBR RA(APOSTROPHE)   /* { */

/* ---- Backslash physical key (ISO CH outputs) ---- */
#define CH_DLR  BACKSLASH        /* $ */
#define CH_PIP2 LS(BACKSLASH)    /* | */
#define CH_RCBR RA(BACKSLASH)    /* } */

/* ---- NON_US_BACKSLASH physical key (ISO CH outputs) ---- */
#define CH_LT   NON_US_BACKSLASH      /* < */
#define CH_GT   LS(NON_US_BACKSLASH)  /* > */
#define CH_BSLH RA(NON_US_BACKSLASH)  /* \ */

/* ---- Bottom-row punctuation (ISO CH outputs) ---- */
#define CH_COM  COMMA        /* , */
#define CH_SEM  LS(COMMA)    /* ; */

#define CH_DOT  DOT          /* . */
#define CH_COL  LS(DOT)      /* : */

#define CH_MIN  SLASH        /* - */
#define CH_UND  LS(SLASH)    /* _ */

/* ---- ISO CH extra (present in your original translator) ---- */
#define CH_EURO RA(E)        /* € */

#define CH_PND  LS(BACKSLASH)/* £ */


/*
 * Alias historiques non utilisés.
 * Les behaviors alt_XXXX correspondants ne sont plus définis.

#define CH_MDOT  &alt_0183
#define CH_PERM  &alt_0137
#define CH_EMD   &alt_0151
#define CH_GUIL_L &alt_0171
#define CH_GUIL_R &alt_0187
#define CH_NBSP  &alt_0160
#define CH_EMPTY &alt_0248
#define CH_SHARP &alt_0223
#define CH_OE  &alt_0140
#define CH_C_CED_CAP &alt_0199
#define CH_AE  &alt_0230
*/

