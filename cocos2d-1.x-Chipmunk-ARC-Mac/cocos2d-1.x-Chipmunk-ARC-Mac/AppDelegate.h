//
//  AppDelegate.h
//  cocos2d-1.x-Chipmunk-ARC-Mac
//
//  Created by Steffen Itterheim on 23.07.12.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#import "cocos2d.h"

@interface cocos2d_1_x_Chipmunk_ARC_MacAppDelegate : NSObject <NSApplicationDelegate>
{
	NSWindow	*__unsafe_unretained window_;
	MacGLView	*__weak glView_;
}

@property (unsafe_unretained) IBOutlet NSWindow	*window;
@property (weak) IBOutlet MacGLView	*glView;

- (IBAction)toggleFullScreen:(id)sender;

@end
