//
/* LICENSE:
 The MIT License (MIT)
 
 Copyright (c) 2015 Remsudeen Rameez
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of
 this software and associated documentation files (the "Software"), to deal in
 the Software without restriction, including without limitation the rights to
 use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 the Software, and to permit persons to whom the Software is furnished to do so,
 subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */


#import <AppKit/appkit.h>
#import <Cocoa/Cocoa.h>


/**
 *  Returns a NSColor from a given hex-code.
 *
 *  @param rgbValue The hex-code to use to get a NSColor. ex: 0xffffff
 *
 *  @return A NSColor object of the color of the passed in hex-code.
 */
#define NSColorFromRGB(rgbValue) \
[NSColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]



@interface NSColor (BFPaperColors)

#pragma mark - Utilities
/**
 *  Returns a BOOL indicating whether or not the color passed to this function is clear or not.
 *
 *  @param color The NSColor to test.
 *
 *  @return YES if clear, NO if not clear.
 */
+ (BOOL)isColorClear:(NSColor *)color;


/**
 *  Returns a UIImage generated by a color. (Useful for setting button background images for states that are a solid color.)
 *
 *  @param color The color to create an image out of.
 *
 *  @return A UIImage of the passed color.
 */
+ (NSImage *)imageFromColor:(NSColor *)color;


/**
 *  DEPRECATED! Please use 'hexStringFromRGBColor:' instead.
 *  Returns the hex-code representation of a NSColor.
 *
 *  @param color The color to inspect for its hex-code.
 *
 *  @return An NSString representing the hex-code of the passed in color.
 */
+ (NSString *)colorToHex:(NSColor *)color __attribute__((deprecated("Please use \'hexStringFromRGBColor:\' instead.")));


/**
 *  Returns the hex-code representation of a NSColor.
 *
 *  @param color The color to inspect for its hex-code.
 *
 *  @return An NSString representing the hex-code of the passed in color.
 */
+ (NSString *)hexStringFromRGBColor:(NSColor *)color;


/**
 *  Returns a simple gradient layer built from two colors.
 *
 *  @param startColor A NSColor to use as the start color of the gradient layer.
 *  @param endColor   A NSColor to use as the end color of the gradient layer.
 *
 *  @return A CAGradientLayer starting with the startColor and ending with the endColor.
 */
+ (NSGradient *)gradientWithStartColor:(NSColor *)startColor
                                   endColor:(NSColor *)endColor;


#pragma mark - Red
+ (NSColor *)paperColorRed50;
+ (NSColor *)paperColorRed100;
+ (NSColor *)paperColorRed200;
+ (NSColor *)paperColorRed300;
+ (NSColor *)paperColorRed400;
+ (NSColor *)paperColorRed500;
+ (NSColor *)paperColorRed600;
+ (NSColor *)paperColorRed700;
+ (NSColor *)paperColorRed800;
+ (NSColor *)paperColorRed900;
+ (NSColor *)paperColorRedA100;
+ (NSColor *)paperColorRedA200;
+ (NSColor *)paperColorRedA400;
+ (NSColor *)paperColorRedA700;
+ (NSColor *)paperColorRed;

#pragma mark - Pink
+ (NSColor *)paperColorPink50;
+ (NSColor *)paperColorPink100;
+ (NSColor *)paperColorPink200;
+ (NSColor *)paperColorPink300;
+ (NSColor *)paperColorPink400;
+ (NSColor *)paperColorPink500;
+ (NSColor *)paperColorPink600;
+ (NSColor *)paperColorPink700;
+ (NSColor *)paperColorPink800;
+ (NSColor *)paperColorPink900;
+ (NSColor *)paperColorPinkA100;
+ (NSColor *)paperColorPinkA200;
+ (NSColor *)paperColorPinkA400;
+ (NSColor *)paperColorPinkA700;
+ (NSColor *)paperColorPink;

#pragma mark - Purple
+ (NSColor *)paperColorPurple50;
+ (NSColor *)paperColorPurple100;
+ (NSColor *)paperColorPurple200;
+ (NSColor *)paperColorPurple300;
+ (NSColor *)paperColorPurple400;
+ (NSColor *)paperColorPurple500;
+ (NSColor *)paperColorPurple600;
+ (NSColor *)paperColorPurple700;
+ (NSColor *)paperColorPurple800;
+ (NSColor *)paperColorPurple900;
+ (NSColor *)paperColorPurpleA100;
+ (NSColor *)paperColorPurpleA200;
+ (NSColor *)paperColorPurpleA400;
+ (NSColor *)paperColorPurpleA700;
+ (NSColor *)paperColorPurple;

#pragma mark - Deep Purple
+ (NSColor *)paperColorDeepPurple50;
+ (NSColor *)paperColorDeepPurple100;
+ (NSColor *)paperColorDeepPurple200;
+ (NSColor *)paperColorDeepPurple300;
+ (NSColor *)paperColorDeepPurple400;
+ (NSColor *)paperColorDeepPurple500;
+ (NSColor *)paperColorDeepPurple600;
+ (NSColor *)paperColorDeepPurple700;
+ (NSColor *)paperColorDeepPurple800;
+ (NSColor *)paperColorDeepPurple900;
+ (NSColor *)paperColorDeepPurpleA100;
+ (NSColor *)paperColorDeepPurpleA200;
+ (NSColor *)paperColorDeepPurpleA400;
+ (NSColor *)paperColorDeepPurpleA700;
+ (NSColor *)paperColorDeepPurple;

#pragma mark - Indigo
+ (NSColor *)paperColorIndigo50;
+ (NSColor *)paperColorIndigo100;
+ (NSColor *)paperColorIndigo200;
+ (NSColor *)paperColorIndigo300;
+ (NSColor *)paperColorIndigo400;
+ (NSColor *)paperColorIndigo500;
+ (NSColor *)paperColorIndigo600;
+ (NSColor *)paperColorIndigo700;
+ (NSColor *)paperColorIndigo800;
+ (NSColor *)paperColorIndigo900;
+ (NSColor *)paperColorIndigoA100;
+ (NSColor *)paperColorIndigoA200;
+ (NSColor *)paperColorIndigoA400;
+ (NSColor *)paperColorIndigoA700;
+ (NSColor *)paperColorIndigo;

#pragma mark - Blue
+ (NSColor *)paperColorBlue50;
+ (NSColor *)paperColorBlue100;
+ (NSColor *)paperColorBlue200;
+ (NSColor *)paperColorBlue300;
+ (NSColor *)paperColorBlue400;
+ (NSColor *)paperColorBlue500;
+ (NSColor *)paperColorBlue600;
+ (NSColor *)paperColorBlue700;
+ (NSColor *)paperColorBlue800;
+ (NSColor *)paperColorBlue900;
+ (NSColor *)paperColorBlueA100;
+ (NSColor *)paperColorBlueA200;
+ (NSColor *)paperColorBlueA400;
+ (NSColor *)paperColorBlueA700;
+ (NSColor *)paperColorBlue;

#pragma mark - Light Blue
+ (NSColor *)paperColorLightBlue50;
+ (NSColor *)paperColorLightBlue100;
+ (NSColor *)paperColorLightBlue200;
+ (NSColor *)paperColorLightBlue300;
+ (NSColor *)paperColorLightBlue400;
+ (NSColor *)paperColorLightBlue500;
+ (NSColor *)paperColorLightBlue600;
+ (NSColor *)paperColorLightBlue700;
+ (NSColor *)paperColorLightBlue800;
+ (NSColor *)paperColorLightBlue900;
+ (NSColor *)paperColorLightBlueA100;
+ (NSColor *)paperColorLightBlueA200;
+ (NSColor *)paperColorLightBlueA400;
+ (NSColor *)paperColorLightBlueA700;
+ (NSColor *)paperColorLightBlue;

#pragma mark - Cyan
+ (NSColor *)paperColorCyan50;
+ (NSColor *)paperColorCyan100;
+ (NSColor *)paperColorCyan200;
+ (NSColor *)paperColorCyan300;
+ (NSColor *)paperColorCyan400;
+ (NSColor *)paperColorCyan500;
+ (NSColor *)paperColorCyan600;
+ (NSColor *)paperColorCyan700;
+ (NSColor *)paperColorCyan800;
+ (NSColor *)paperColorCyan900;
+ (NSColor *)paperColorCyanA100;
+ (NSColor *)paperColorCyanA200;
+ (NSColor *)paperColorCyanA400;
+ (NSColor *)paperColorCyanA700;
+ (NSColor *)paperColorCyan;

#pragma mark - Teal
+ (NSColor *)paperColorTeal50;
+ (NSColor *)paperColorTeal100;
+ (NSColor *)paperColorTeal200;
+ (NSColor *)paperColorTeal300;
+ (NSColor *)paperColorTeal400;
+ (NSColor *)paperColorTeal500;
+ (NSColor *)paperColorTeal600;
+ (NSColor *)paperColorTeal700;
+ (NSColor *)paperColorTeal800;
+ (NSColor *)paperColorTeal900;
+ (NSColor *)paperColorTealA100;
+ (NSColor *)paperColorTealA200;
+ (NSColor *)paperColorTealA400;
+ (NSColor *)paperColorTealA700;
+ (NSColor *)paperColorTeal;

#pragma mark - Green
+ (NSColor *)paperColorGreen50;
+ (NSColor *)paperColorGreen100;
+ (NSColor *)paperColorGreen200;
+ (NSColor *)paperColorGreen300;
+ (NSColor *)paperColorGreen400;
+ (NSColor *)paperColorGreen500;
+ (NSColor *)paperColorGreen600;
+ (NSColor *)paperColorGreen700;
+ (NSColor *)paperColorGreen800;
+ (NSColor *)paperColorGreen900;
+ (NSColor *)paperColorGreenA100;
+ (NSColor *)paperColorGreenA200;
+ (NSColor *)paperColorGreenA400;
+ (NSColor *)paperColorGreenA700;
+ (NSColor *)paperColorGreen;

#pragma mark - Light Green
+ (NSColor *)paperColorLightGreen50;
+ (NSColor *)paperColorLightGreen100;
+ (NSColor *)paperColorLightGreen200;
+ (NSColor *)paperColorLightGreen300;
+ (NSColor *)paperColorLightGreen400;
+ (NSColor *)paperColorLightGreen500;
+ (NSColor *)paperColorLightGreen600;
+ (NSColor *)paperColorLightGreen700;
+ (NSColor *)paperColorLightGreen800;
+ (NSColor *)paperColorLightGreen900;
+ (NSColor *)paperColorLightGreenA100;
+ (NSColor *)paperColorLightGreenA200;
+ (NSColor *)paperColorLightGreenA400;
+ (NSColor *)paperColorLightGreenA700;
+ (NSColor *)paperColorLightGreen;

#pragma mark - Lime
+ (NSColor *)paperColorLime50;
+ (NSColor *)paperColorLime100;
+ (NSColor *)paperColorLime200;
+ (NSColor *)paperColorLime300;
+ (NSColor *)paperColorLime400;
+ (NSColor *)paperColorLime500;
+ (NSColor *)paperColorLime600;
+ (NSColor *)paperColorLime700;
+ (NSColor *)paperColorLime800;
+ (NSColor *)paperColorLime900;
+ (NSColor *)paperColorLimeA100;
+ (NSColor *)paperColorLimeA200;
+ (NSColor *)paperColorLimeA400;
+ (NSColor *)paperColorLimeA700;
+ (NSColor *)paperColorLime;

#pragma mark - Yellow
+ (NSColor *)paperColorYellow50;
+ (NSColor *)paperColorYellow100;
+ (NSColor *)paperColorYellow200;
+ (NSColor *)paperColorYellow300;
+ (NSColor *)paperColorYellow400;
+ (NSColor *)paperColorYellow500;
+ (NSColor *)paperColorYellow600;
+ (NSColor *)paperColorYellow700;
+ (NSColor *)paperColorYellow800;
+ (NSColor *)paperColorYellow900;
+ (NSColor *)paperColorYellowA100;
+ (NSColor *)paperColorYellowA200;
+ (NSColor *)paperColorYellowA400;
+ (NSColor *)paperColorYellowA700;
+ (NSColor *)paperColorYellow;

#pragma mark - Amber
+ (NSColor *)paperColorAmber50;
+ (NSColor *)paperColorAmber100;
+ (NSColor *)paperColorAmber200;
+ (NSColor *)paperColorAmber300;
+ (NSColor *)paperColorAmber400;
+ (NSColor *)paperColorAmber500;
+ (NSColor *)paperColorAmber600;
+ (NSColor *)paperColorAmber700;
+ (NSColor *)paperColorAmber800;
+ (NSColor *)paperColorAmber900;
+ (NSColor *)paperColorAmberA100;
+ (NSColor *)paperColorAmberA200;
+ (NSColor *)paperColorAmberA400;
+ (NSColor *)paperColorAmberA700;
+ (NSColor *)paperColorAmber;

#pragma mark - Orange
+ (NSColor *)paperColorOrange50;
+ (NSColor *)paperColorOrange100;
+ (NSColor *)paperColorOrange200;
+ (NSColor *)paperColorOrange300;
+ (NSColor *)paperColorOrange400;
+ (NSColor *)paperColorOrange500;
+ (NSColor *)paperColorOrange600;
+ (NSColor *)paperColorOrange700;
+ (NSColor *)paperColorOrange800;
+ (NSColor *)paperColorOrange900;
+ (NSColor *)paperColorOrangeA100;
+ (NSColor *)paperColorOrangeA200;
+ (NSColor *)paperColorOrangeA400;
+ (NSColor *)paperColorOrangeA700;
+ (NSColor *)paperColorOrange;

#pragma mark - Deep Orange
+ (NSColor *)paperColorDeepOrange50;
+ (NSColor *)paperColorDeepOrange100;
+ (NSColor *)paperColorDeepOrange200;
+ (NSColor *)paperColorDeepOrange300;
+ (NSColor *)paperColorDeepOrange400;
+ (NSColor *)paperColorDeepOrange500;
+ (NSColor *)paperColorDeepOrange600;
+ (NSColor *)paperColorDeepOrange700;
+ (NSColor *)paperColorDeepOrange800;
+ (NSColor *)paperColorDeepOrange900;
+ (NSColor *)paperColorDeepOrangeA100;
+ (NSColor *)paperColorDeepOrangeA200;
+ (NSColor *)paperColorDeepOrangeA400;
+ (NSColor *)paperColorDeepOrangeA700;
+ (NSColor *)paperColorDeepOrange;

#pragma mark - Brown
+ (NSColor *)paperColorBrown50;
+ (NSColor *)paperColorBrown100;
+ (NSColor *)paperColorBrown200;
+ (NSColor *)paperColorBrown300;
+ (NSColor *)paperColorBrown400;
+ (NSColor *)paperColorBrown500;
+ (NSColor *)paperColorBrown600;
+ (NSColor *)paperColorBrown700;
+ (NSColor *)paperColorBrown800;
+ (NSColor *)paperColorBrown900;
+ (NSColor *)paperColorBrown;

#pragma mark - Gray
+ (NSColor *)paperColorGray50;
+ (NSColor *)paperColorGray100;
+ (NSColor *)paperColorGray200;
+ (NSColor *)paperColorGray300;
+ (NSColor *)paperColorGray400;
+ (NSColor *)paperColorGray500;
+ (NSColor *)paperColorGray600;
+ (NSColor *)paperColorGray700;
+ (NSColor *)paperColorGray800;
+ (NSColor *)paperColorGray900;
+ (NSColor *)paperColorGray;

#pragma mark - Blue Gray
+ (NSColor *)paperColorBlueGray50;
+ (NSColor *)paperColorBlueGray100;
+ (NSColor *)paperColorBlueGray200;
+ (NSColor *)paperColorBlueGray300;
+ (NSColor *)paperColorBlueGray400;
+ (NSColor *)paperColorBlueGray500;
+ (NSColor *)paperColorBlueGray600;
+ (NSColor *)paperColorBlueGray700;
+ (NSColor *)paperColorBlueGray800;
+ (NSColor *)paperColorBlueGray900;
+ (NSColor *)paperColorBlueGray;



@end
