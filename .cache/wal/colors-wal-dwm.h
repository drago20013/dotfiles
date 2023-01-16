static const char norm_fg[] = "#c9bcb7";
static const char norm_bg[] = "#160814";
static const char norm_border[] = "#8c8380";

static const char sel_fg[] = "#c9bcb7";
static const char sel_bg[] = "#9F2651";
static const char sel_border[] = "#c9bcb7";

static const char urg_fg[] = "#c9bcb7";
static const char urg_bg[] = "#5F4968";
static const char urg_border[] = "#5F4968";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
