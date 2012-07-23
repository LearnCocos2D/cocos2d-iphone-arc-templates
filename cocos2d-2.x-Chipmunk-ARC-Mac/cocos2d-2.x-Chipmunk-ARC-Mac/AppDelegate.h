//
//  AppDelegate.h
//  cocos2d-2.x-Chipmunk-ARC-Mac
//
//  Created by Steffen Itterheim on 23.07.12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//


#import "cocos2d.h"

@interface cocos2d_2_x_Chipmunk_ARC_MacAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*__unsafe_unretained window_;
	CCGLView	*__weak glView_;
}

@property (unsafe_unretained) IBOutlet NSWindow	*window;
@property (weak) IBOutlet CCGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
