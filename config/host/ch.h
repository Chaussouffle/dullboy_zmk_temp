#pragma once
#include "physical.h"

/* Original layout.h, ISO-CH mappings preserved as raw HID positions. */

/* =========================
 * ISO CH (Swiss) — ZMK defines
 * (OS layout: ISO CH)
 * ========================= */

#define CH_SECT PHY_GRAVE        /* § */
#define CH_DEG  LS(PHY_GRAVE)    /* ° */

/* ---- Shifted digits (ISO CH outputs) ---- */
#define CH_PLUS LS(PHY_N1)       /* + */
#define CH_DQUO LS(PHY_N2)       /* " */
#define CH_AST  LS(PHY_N3)       /* * */
#define CH_CCED LS(PHY_N4)       /* ç */
#define CH_PCT  LS(PHY_N5)       /* % */
#define CH_AMPR LS(PHY_N6)       /* & */
#define CH_SLSH LS(PHY_N7)       /* / */
#define CH_LPAR LS(PHY_N8)       /* ( */
#define CH_RPAR LS(PHY_N9)       /* ) */
#define CH_EQL  LS(PHY_N0)       /* = */

/* ---- AltGr on digits (ISO CH outputs) ---- */
#define CH_BRKP RA(PHY_N1)       /* ¦ */
#define CH_AT RA(PHY_N2)       /* @ */
#define CH_HASH  RA(PHY_N3)       /* # (selon ta table) */
#define CH_DEG4 RA(PHY_N4)       /* ° */
#define CH_SECT5 RA(PHY_N5)      /* § */
#define CH_NOT  RA(PHY_N6)       /* ¬ */
#define CH_PIPE RA(PHY_N7)       /* | */
#define CH_CENT RA(PHY_N8)       /* ¢ */

/* ---- Minus / Equal physical keys ---- */
#define CH_APOS PHY_MINUS        /* ' */
#define CH_QUES LS(PHY_MINUS)    /* ? */
#define CH_DACU RA(PHY_MINUS)    /* dead ´ */

#define CH_DCIR PHY_EQUAL        /* dead ^ */
#define CH_DGRV LS(PHY_EQUAL)    /* dead ` */
#define CH_DTLD RA(PHY_EQUAL)    /* dead ~ */

#define CH_Y PHY_Z   /* ISO CH: y */
#define CH_Z PHY_Y   /* ISO CH: z */

/* ---- Brackets block (ISO CH outputs) ---- */
#define CH_EGRV PHY_LEFT_BRACKET     /* è */
#define CH_EAC  PHY_SEMICOLON        /* é */
#define CH_UDI  LS(PHY_LEFT_BRACKET) /* ü */
#define CH_LBRK RA(PHY_LEFT_BRACKET) /* [ */

#define CH_DDIA PHY_RIGHT_BRACKET    /* dead ¨ */
#define CH_EXCL LS(PHY_RIGHT_BRACKET)/* ! */
#define CH_RBRK RA(PHY_RIGHT_BRACKET)/* ] */

/* ---- Home row punctuation (ISO CH outputs) ---- */
#define CH_ODI  LS(PHY_SEMICOLON)    /* ö */
/* RA(SEMICOLON) n’existe pas selon ta règle -> pas défini */

#define CH_AGRV PHY_APOSTROPHE       /* à */
#define CH_ADI  LS(PHY_APOSTROPHE)   /* ä */
#define CH_LCBR RA(PHY_APOSTROPHE)   /* { */

/* ---- Backslash physical key (ISO CH outputs) ---- */
#define CH_DLR  PHY_BACKSLASH        /* $ */
#define CH_PIP2 LS(PHY_BACKSLASH)    /* | */
#define CH_RCBR RA(PHY_BACKSLASH)    /* } */

/* ---- NON_US_BACKSLASH physical key (ISO CH outputs) ---- */
#define CH_LT   PHY_NON_US_BACKSLASH      /* < */
#define CH_GT   LS(PHY_NON_US_BACKSLASH)  /* > */
#define CH_BSLH RA(PHY_NON_US_BACKSLASH)  /* \ */

/* ---- Bottom-row punctuation (ISO CH outputs) ---- */
#define CH_COM  PHY_COMMA        /* , */
#define CH_SEM  LS(PHY_COMMA)    /* ; */

#define CH_DOT  PHY_DOT          /* . */
#define CH_COL  LS(PHY_DOT)      /* : */

#define CH_MIN  PHY_SLASH        /* - */
#define CH_UND  LS(PHY_SLASH)    /* _ */

/* ---- ISO CH extra (present in your original translator) ---- */
#define CH_EURO RA(PHY_E)        /* € */

#define CH_PND  LS(PHY_BACKSLASH)/* £ */


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

#include "overrides/ch_fr.h"
#define DULLBOY_TEXT_CH_FR 1
#define TEXT_ADI &kp CH_ADI
#define TEXT_EAC &kp CH_EAC
#define TEXT_CCED &kp CH_CCED
#define TEXT_DEG &kp CH_DEG
#define ACC_TILDE &kp CH_DTLD
#define ACC_ACUTE &kp CH_DACU
#define ACC_GRAVE &kp CH_DGRV
#define ACC_CIRC &kp CH_DCIR
#define ACC_DIAERESIS &kp CH_DDIA
