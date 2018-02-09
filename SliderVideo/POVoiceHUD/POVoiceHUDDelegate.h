//
//  POVoiceHUDDelegate.h
//  POVoiceHUD
//
//  Created by Polat Olu on 26/04/2017.
//  Copyright (c) 2017 Polat Olu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class POVoiceHUD;

@protocol POVoiceHUDDelegate <NSObject>

@optional

- (void)POVoiceHUD:(POVoiceHUD *)voiceHUD voiceRecorded:(NSString *)recordPath length:(float)recordLength;
- (void)voiceRecordCancelledByUser:(POVoiceHUD *)voiceHUD;

@end

