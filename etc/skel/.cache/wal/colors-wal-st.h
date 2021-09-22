const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#010C11", /* black   */
  [1] = "#1667DF", /* red     */
  [2] = "#1072F1", /* green   */
  [3] = "#827EDA", /* yellow  */
  [4] = "#0197B3", /* blue    */
  [5] = "#05A3D9", /* magenta */
  [6] = "#3DB1E2", /* cyan    */
  [7] = "#c2c9f3", /* white   */

  /* 8 bright colors */
  [8]  = "#878caa",  /* black   */
  [9]  = "#1667DF",  /* red     */
  [10] = "#1072F1", /* green   */
  [11] = "#827EDA", /* yellow  */
  [12] = "#0197B3", /* blue    */
  [13] = "#05A3D9", /* magenta */
  [14] = "#3DB1E2", /* cyan    */
  [15] = "#c2c9f3", /* white   */

  /* special colors */
  [256] = "#010C11", /* background */
  [257] = "#c2c9f3", /* foreground */
  [258] = "#c2c9f3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
