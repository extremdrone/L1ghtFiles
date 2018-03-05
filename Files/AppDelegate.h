//
//  AppDelegate.h
//  Files
//
//  Created by Steven Troughton-Smith on 11/06/2016.
//  Copyright © 2016 High Caffeine Content. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FBColumnViewController;
@interface AppDelegate : UIResponder <UIApplicationDelegate, UIAlertViewDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong) FBColumnViewController *columnViewController;


@end

