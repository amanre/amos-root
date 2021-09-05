static const char norm_fg[] = "#99dddf";
static const char norm_bg[] = "#030C15";
static const char norm_border[] = "#6b9a9c";

static const char sel_fg[] = "#99dddf";
static const char sel_bg[] = "#C64C3D";
static const char sel_border[] = "#99dddf";

static const char urg_fg[] = "#99dddf";
static const char urg_bg[] = "#574A4D";
static const char urg_border[] = "#574A4D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
