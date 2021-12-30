const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#101118", /* black   */
  [1] = "#4144AB", /* red     */
  [2] = "#4B5AAD", /* green   */
  [3] = "#596ACF", /* yellow  */
  [4] = "#966BA2", /* blue    */
  [5] = "#788498", /* magenta */
  [6] = "#7688E2", /* cyan    */
  [7] = "#c3c8ed", /* white   */

  /* 8 bright colors */
  [8]  = "#888ca5",  /* black   */
  [9]  = "#4144AB",  /* red     */
  [10] = "#4B5AAD", /* green   */
  [11] = "#596ACF", /* yellow  */
  [12] = "#966BA2", /* blue    */
  [13] = "#788498", /* magenta */
  [14] = "#7688E2", /* cyan    */
  [15] = "#c3c8ed", /* white   */

  /* special colors */
  [256] = "#101118", /* background */
  [257] = "#c3c8ed", /* foreground */
  [258] = "#c3c8ed",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
