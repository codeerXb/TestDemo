//
//  AppDelegate.h
//  testDemo
//
//  Created by xiebin on 2019/7/5.
//  Copyright © 2019 iredfish. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

