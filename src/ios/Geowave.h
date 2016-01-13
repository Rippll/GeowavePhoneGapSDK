//
//  Geowave.h
//  GeowaveSDK
//
//  Created by Nicola Donadoni on 09/06/2015.
//  Copyright (c) 2015 Rippll. All rights reserved.
//


#import <AdSupport/AdSupport.h>
#import <CoreLocation/CoreLocation.h>
#import <SystemConfiguration/SystemConfiguration.h>
#import <UIKit/UIKit.h>

@interface Geowave : NSObject <CLLocationManagerDelegate>

// This method must be called as first passing the AppID given by Rippll
+ (void)initWithAppID:(NSInteger)appID;

// Call this method if you want to show a webview when opening a push message with URL
+ (void)initWebViewControllerWithImageNamed:(NSString *)name andDismissButtonWithTitle:(NSString *)title andColor:(UIColor *)color;

// Insert this method inside the Apple's one
+ (void)applicationDidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

// Insert this method inside the Apple's one
+ (UIBackgroundFetchResult)applicationDidReceiveRemoteNotification:(NSDictionary *)userInfo;

// Insert this method when you want to request the location for the first time
+ (void)requestLocationAuthorization;

// Insert this method when you want to request the notification for the first time
+ (void)requestNotificationsAuthorization;

// Creates Segment(s)
+ (void)createSegmentsWithName:(NSString *)name andValues:(NSArray *)values;

// Removes from a single segment
+ (void)removeSegmentsWithName:(NSString *)name andValues:(NSArray *)values;

// Removes from multiple segments
+ (void)removeSegmentsWithName:(NSString *)name;

// Removes from all the segments
+ (void)removeAllSegments;

// Create Funnel
+ (void)createFunnelWithName:(NSString *)name andLevel:(NSInteger)level;

// Removes from all the funnels
+ (void)removeAllFunnels;

// This method returns the URL contained in the last open push notification
+ (NSString *)lastCamapaignURL;

@end