//
//  RZLevelIndicator.m
//  Photo 360
//
//  Created by Rameez Remsudeen  on 1/24/15.
//  Copyright (c) 2015 Rameez Remsudeen. All rights reserved.
//

#import "RZLevelIndicator.h"

@implementation RZLevelIndicator

{
    NSInteger lPercentage;
    
}

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];
    
    CGContextRef context = (CGContextRef)[[NSGraphicsContext currentContext] graphicsPort];
    CGContextClearRect(context, dirtyRect);
    
    
}

@end
