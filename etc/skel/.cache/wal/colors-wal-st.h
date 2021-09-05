const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#030C15", /* black   */
  [1] = "#574A4D", /* red     */
  [2] = "#C64C3D", /* green   */
  [3] = "#0A7588", /* yellow  */
  [4] = "#517B85", /* blue    */
  [5] = "#0899A6", /* magenta */
  [6] = "#16D4D6", /* cyan    */
  [7] = "#99dddf", /* white   */

  /* 8 bright colors */
  [8]  = "#6b9a9c",  /* black   */
  [9]  = "#574A4D",  /* red     */
  [10] = "#C64C3D", /* green   */
  [11] = "#0A7588", /* yellow  */
  [12] = "#517B85", /* blue    */
  [13] = "#0899A6", /* magenta */
  [14] = "#16D4D6", /* cyan    */
  [15] = "#99dddf", /* white   */

  /* special colors */
  [256] = "#030C15", /* background */
  [257] = "#99dddf", /* foreground */
  [258] = "#99dddf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
