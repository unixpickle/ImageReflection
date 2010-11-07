//
//  ImageReflectionAppDelegate.h
//  ImageReflection
//
//  Created by Alex Nichol on 11/7/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImageReflectionViewController;

@interface ImageReflectionAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ImageReflectionViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ImageReflectionViewController *viewController;

@end

