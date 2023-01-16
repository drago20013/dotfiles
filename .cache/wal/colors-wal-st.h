const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#160814", /* black   */
  [1] = "#5F4968", /* red     */
  [2] = "#9F2651", /* green   */
  [3] = "#BD2D53", /* yellow  */
  [4] = "#694B98", /* blue    */
  [5] = "#97629E", /* magenta */
  [6] = "#A25EC4", /* cyan    */
  [7] = "#c9bcb7", /* white   */

  /* 8 bright colors */
  [8]  = "#8c8380",  /* black   */
  [9]  = "#5F4968",  /* red     */
  [10] = "#9F2651", /* green   */
  [11] = "#BD2D53", /* yellow  */
  [12] = "#694B98", /* blue    */
  [13] = "#97629E", /* magenta */
  [14] = "#A25EC4", /* cyan    */
  [15] = "#c9bcb7", /* white   */

  /* special colors */
  [256] = "#160814", /* background */
  [257] = "#c9bcb7", /* foreground */
  [258] = "#c9bcb7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
