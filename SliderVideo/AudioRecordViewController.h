//
//  AudioRecordViewController.h
//  SliderVideo
//
//  Created Giuseppe on 7/10/14.
//  Copyright (c) Giuseppe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FilterViewController.h"

#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>
#import <MediaPlayer/MediaPlayer.h>

#import "POVoiceHUD.h"

@interface AudioRecordViewController : UIViewController<POVoiceHUDDelegate, AVAudioPlayerDelegate>
{
    
}
@property (nonatomic, retain)FilterViewController* parent;
@property (nonatomic,retain) IBOutlet UIButton* playbtn;
@property (nonatomic,retain) IBOutlet UIButton* recordbtn;
@property (nonatomic, retain) POVoiceHUD *voiceHud;
@end
