static const char norm_fg[] = "#c2c9f3";
static const char norm_bg[] = "#010C11";
static const char norm_border[] = "#878caa";

static const char sel_fg[] = "#c2c9f3";
static const char sel_bg[] = "#1072F1";
static const char sel_border[] = "#c2c9f3";

static const char urg_fg[] = "#c2c9f3";
static const char urg_bg[] = "#1667DF";
static const char urg_border[] = "#1667DF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
