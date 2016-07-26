//
//  FirstViewController.h
//  SunnyRainy
//
//  Created by Ziping Zheng on 7/18/16.
//  Copyright © 2016 Ziping Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <AVKit/AVKit.h>
#import <MediaPlayer/MediaPlayer.h>.
#import <AVFoundation/AVAudioPlayer.h> 

@interface MoodViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *imgWeather;
@property (weak, nonatomic) IBOutlet UILabel *lblWeather;
@property (weak, nonatomic) IBOutlet UIButton *btnLogin;

@end

