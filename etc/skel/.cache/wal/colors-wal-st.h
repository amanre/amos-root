const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#100a1e", /* black   */
  [1] = "#AE4870", /* red     */
  [2] = "#4F519A", /* green   */
  [3] = "#5C5697", /* yellow  */
  [4] = "#9E579F", /* blue    */
  [5] = "#D55DA0", /* magenta */
  [6] = "#BF6BD0", /* cyan    */
  [7] = "#a5bedc", /* white   */

  /* 8 bright colors */
  [8]  = "#73859a",  /* black   */
  [9]  = "#AE4870",  /* red     */
  [10] = "#4F519A", /* green   */
  [11] = "#5C5697", /* yellow  */
  [12] = "#9E579F", /* blue    */
  [13] = "#D55DA0", /* magenta */
  [14] = "#BF6BD0", /* cyan    */
  [15] = "#a5bedc", /* white   */

  /* special colors */
  [256] = "#100a1e", /* background */
  [257] = "#a5bedc", /* foreground */
  [258] = "#a5bedc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
