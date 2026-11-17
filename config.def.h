/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int centered = 0;                    /* -c  option; centers dmenu on screen */
static int min_width = 500;                 /* minimum width when centered */
static const float menu_height_ratio = 4.0f;/* centered: distance from top = (screen - menu) / ratio */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Ubuntu Mono:style=Italic:size=16",
	"Symbols Nerd Font:size=14",
	"Noto Color Emoji:size=14",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
/* Mesmas cores da barra do dwm. O fundo dos destaques (fuzzyhighlight)
 * é copiado do fundo normal/selecionado em tempo de execução. */
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm]          = { "#ffffff", "#222222" },
	[SchemeSel]           = { "#ffffff", "#505050" },
	[SchemeNormHighlight] = { "#d79921", "#222222" }, /* letras que bateram na busca */
	[SchemeSelHighlight]  = { "#fabd2f", "#505050" },
	[SchemeOut]           = { "#222222", "#d79921" }, /* itens já escolhidos com Ctrl+Enter */
	[SchemeBorder]        = { "#d79921", NULL },      /* cor da borda (-bw) */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " /?\"&[]";

/* -bw option; size of the window border */
static unsigned int border_width = 0;
