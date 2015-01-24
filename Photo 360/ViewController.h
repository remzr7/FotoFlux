//
//  ViewController.h
//  Photo 360
//
//  Created by Rameez Remsudeen  on 1/24/15.
//  Copyright (c) 2015 Rameez Remsudeen. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Gphoto2/Gphoto2.h>

@interface ViewController : NSViewController

@property (weak) IBOutlet NSSlider *brightnessSlider;

@property (weak) IBOutlet NSTextField *brightnessSliderNumber;
@property (weak) IBOutlet NSLevelIndicator *ProgressLevelIndicator;

@property (weak) IBOutlet NSButton *CaptureButton;

- (IBAction)Connect:(NSButton *)sender;

- (IBAction)setPreview:(id)sender;

@end

