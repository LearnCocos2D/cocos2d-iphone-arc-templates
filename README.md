cocos2d-iphone-arc-templates
============================

ARC enabled Xcode project templates for cocos2d-iphone, for both v1.x and v2.x branches. 

Use these templates to start a cocos2d iOS/Mac project with ARC enabled and with or without physics without having to read a lengthy "How to use cocos2d with ARC" tutorial. Of course you'll be missing out on Kobold2D (http://www.kobold2d.com) (hint, hint) but at least I got to mention it here and maybe it made you curious enough to follow the link.

Exact cocos2d versions used:

1.x ==> v1.1 beta 2

2.x ==> v2.0 (stable)

========================
How to Use the Templates
========================

1. Make a copy of the desired project's folder
2. Open the .xcodeproj in Xcode.
3. (optional) Rename the project to your liking.
4. Start writing ARC code with cocos2d.

"Hey wow, that's even easier than running ./install-templates.sh was!"

(not an actual quote, just something I figured you were just saying to yourself)

============================
Selecting the Right Template
============================

The cocos2d version, platform and physics engine are coded into the folder/project name.

cocos2d-2.x-ARC-iOS			<== uses cocos2d 2.0, no physics, targetting iOS

cocos2d-1.x-Box2D-ARC-Mac	<== uses cocos2d 1.1, Box2D physics, targetting Mac OS

Homework assignment: figure out the remaining folder names. I know you can do it! Good luck.

================
Additional Notes
================

The templates are practically unmodified versions of the templates provided by cocos2d. Please don't blame me for the example code's quality.

The Mac templates build only 64-Bit apps. ARC for Mac OS requires building a 64-Bit app. Apple doesn't want you to build 32-Bit apps anymore anyway.

The v1.x templates do not include cocos live. This service has been superceded by the likes of OpenFeint and similar social SDKs at least 3 years ago. Along with cocos live I also removed TouchJSON which is used only by cocos live.

Fixed the ARC related memcpy warning in ccCArray.h (line 497) in the cocos2d v1.1 templates. Was missing a cast to (void*).

Fixed the cocos2d view to take up the entire window size in Mac apps. Original templates leave a blank area at the bottom.

========
The Rest
========

License? Still the same as always: MIT License. I really didn't add any code, technically I just modified the .xcodeproj and build settings.

If you haven't already, visit my homepage: http://www.learn-cocos2d.com
