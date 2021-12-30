static const char norm_fg[] = "#c3c8ed";
static const char norm_bg[] = "#101118";
static const char norm_border[] = "#888ca5";

static const char sel_fg[] = "#c3c8ed";
static const char sel_bg[] = "#4B5AAD";
static const char sel_border[] = "#c3c8ed";

static const char urg_fg[] = "#c3c8ed";
static const char urg_bg[] = "#4144AB";
static const char urg_border[] = "#4144AB";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
