//
//  POVoiceHUD.h
//  POVoiceHUD
//
//  Created by Polat Olu on 18/04/2017.
//  Copyright (c) 2017 Polat Olu. All rights reserved.
//


// This code is distributed under the terms and conditions of the MIT license.

// Copyright (c) 2017 Polat Olu
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "POVoiceHUDDelegate.h"

#define HUD_SIZE                80
#define CANCEL_BUTTON_HEIGHT    0
#define SOUND_METER_COUNT       40
#define WAVE_UPDATE_FREQUENCY   0.05

@interface POVoiceHUD : UIView <AVAudioRecorderDelegate> {
    UIButton *btnCancel;
    UIImage *imgMicrophone;
    int soundMeter;
    CGRect hudRect;
    
	NSMutableDictionary *recordSetting;
	NSString *recorderFilePath;
	AVAudioRecorder *recorder;
	
	SystemSoundID soundID;
	NSTimer *timer;
    float mDuration;
    
    float recordTime;
}

- (id)initWithParentView:(UIView *)view;
- (void)startForFilePath:(NSString *)filePath duration:(float)duration;
- (void)cancelRecording;

- (void)setCancelButtonTitle:(NSString *)title;

@property (nonatomic, retain) NSString *title;
@property (nonatomic, assign) id<POVoiceHUDDelegate> delegate;

@end

