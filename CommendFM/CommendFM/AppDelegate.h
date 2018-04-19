//
//  AppDelegate.h
//  CommendFM
//
//  Created by Steven on 2018/4/19.
//  Copyright © 2018年 Steven. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

