static const char norm_fg[] = "#a5bedc";
static const char norm_bg[] = "#100a1e";
static const char norm_border[] = "#73859a";

static const char sel_fg[] = "#a5bedc";
static const char sel_bg[] = "#4F519A";
static const char sel_border[] = "#a5bedc";

static const char urg_fg[] = "#a5bedc";
static const char urg_bg[] = "#AE4870";
static const char urg_border[] = "#AE4870";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
