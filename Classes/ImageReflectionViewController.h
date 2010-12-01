//
//  ImageReflectionViewController.h
//  ImageReflection
//
//  Created by Alex Nichol on 11/7/10.
//  Copyright Jitsik 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIImage+Reflection.h"

@interface ImageReflectionViewController : UIViewController {
	UIImage * myImage;
	IBOutlet UIImageView * monkeyView;
	IBOutlet UIImageView * topRef;
	IBOutlet UIImageView * refView;
}

@end

